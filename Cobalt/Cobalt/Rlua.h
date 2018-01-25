#include "stdafx.h"
#include "Scan.h"
#include "Main.cpp"
#include <Psapi.h>

#pragma once

typedef int(lua_state);
typedef int(PMSGTYPE);

#define ERRMSG		3
#define WARNMSG		2
#define INFOMSG		1
#define NORMMSG		0

#define rbx_GLOBALSINDEX -10002
#define rbx_REGISTRYINDEX -10000

#define rbx_getglobal(l,g)			 LuaC::rbx_getfield(l, rbx_GLOBALSINDEX, g)
#define rbx_pushbool(luaState, boolean)     int property = *(DWORD *)(luaState + 16); *(DWORD*)property = boolean; *(DWORD *)(property + 8) = 3; *(DWORD *)(luaState + 16) += 16;
#define rbx_pushnil(a1)             *(DWORD *)(*(DWORD *)(a1 + 24) + 8) = 0; *(DWORD *)(a1 + 24) += 16
#define rbx_tostring(l,idx)		 LuaC::rbx_toLstring(l, (idx), 0)
#define rbx_pop(L,n)                LuaC::rbx_settop(L, -(n)-1)
#define rbx_isnil(L,n)			     (LuaC::rbx_type(L, (n), TRUE) == 0)
#define rbx_TNONE					 (-1)
#define rbx_TNIL                     0
#define rbx_TNUMBER                  2
#define rbx_TBOOLEAN                 3
#define rbx_TSTRING                  4
#define rbx_TLIGHTUSERDATA		      1
#define rbx_TTABLE                   7
#define rbx_TUSERDATA			      8
#define rbx_TFUNCTION				  6
#define rbx_TPROTO                   9
#define rbx_TTHREAD                  5
#define rbx_TUPVALUE                 10


namespace Retcheck {
	DWORD unprotect(DWORD pFunc)
	{
		PBYTE tAddr = (PBYTE)pFunc + 0x10;

		while (tAddr[0] != 0x55 || tAddr[1] != 0x8B || tAddr[2] != 0xEC) {
			tAddr += 0x10;
		}

		DWORD funcSz = tAddr - (PBYTE)pFunc;

		PVOID newFunc = VirtualAlloc(0, funcSz, MEM_COMMIT | MEM_RESERVE, PAGE_EXECUTE_READWRITE);

		if (newFunc == 0)
			return pFunc;

		if (funcSz >= 0x100000)
			return pFunc;

		memcpy(newFunc, (PVOID)pFunc, funcSz);

		for (DWORD i = (DWORD)newFunc; i < (DWORD)newFunc + funcSz; i += 1) {
			if (*(BYTE*)i == 0x72 && *(BYTE*)(i + 0x2) == 0xA1 && (*(BYTE*)(i + 0x7)) == 0x8B) {
				memcpy((PVOID)i, "\xEB", 1);

					DWORD cNFunc = (DWORD)newFunc;

				while ((cNFunc - (DWORD)newFunc) < funcSz) {
					if (*(BYTE*)cNFunc == 0xE8)
					{
						DWORD tFunc = pFunc + (cNFunc - (DWORD)newFunc);
						DWORD oFunc = (tFunc + *(DWORD*)(tFunc + 1)) + 5;

						if (oFunc % 0x10 == 0)
						{
							DWORD realCAddr = oFunc - cNFunc - 5;
							memcpy((PVOID)(cNFunc + 1), &realCAddr, 4);
						}
						cNFunc += 5;
					}
					else cNFunc += 1;
				}
				return (DWORD)newFunc;
			}
		}
		VirtualFree(newFunc, funcSz, MEM_RELEASE);
		return pFunc;
	}
}

namespace LuaC {
	void set_jnz(unsigned int addr)
	{
		DWORD o_buff;
		VirtualProtect((void*)addr, 5, PAGE_EXECUTE_READWRITE, &o_buff);
		*(char*)addr = 0x75; //op_code for jnz. 
		VirtualProtect((void*)addr, 5, o_buff, &o_buff);
	}
	void set_jz(unsigned int addr)
	{
		DWORD o_buff;
		VirtualProtect((void*)addr, 5, PAGE_EXECUTE_READWRITE, &o_buff);
		*(char*)addr = 0x74; //opcode for jz
		VirtualProtect((void*)addr, 5, o_buff, &o_buff);
	}
	typedef void(__cdecl *Lua_getfield)(lua_state lst, int index, const char *k);
	Lua_getfield rbx_getfieldbase = (Lua_getfield)Retcheck::unprotect(aslr(0x733D00));//i was right ;-;

	typedef void(__cdecl *Lua_settop)(lua_state lst, int index);
	Lua_settop rbx_settopbase = (Lua_settop)Retcheck::unprotect(aslr(0x735E40));//done

	typedef void(__cdecl *Lua_pushstring)(lua_state lst, const char *s);
	Lua_pushstring rbx_pushstringbase = (Lua_pushstring)aslr(0x7350B0);
	
	typedef void(__cdecl *Lua_pushvalue)(lua_state lst, int index);
	Lua_pushvalue rbx_pushvaluebase = (Lua_pushvalue)Retcheck::unprotect(aslr(0x735180));

	typedef int(__cdecl *Lua_pcall)(lua_state lst, int nargs, int nresults, int errfunc);
	Lua_pcall rbx_pcallbase = (Lua_pcall)Retcheck::unprotect(aslr(0x734AE0));

	typedef void(__cdecl *Lua_setfield)(lua_state lst, int index, const char *k);
	Lua_setfield rbx_setfieldbase = (Lua_setfield)Retcheck::unprotect(aslr(0x735A60));

	typedef void(__cdecl *Lua_pushnumber)(lua_state lst, double n);
	Lua_pushnumber rbx_pushnumberbase = (Lua_pushnumber)Retcheck::unprotect(aslr(0x735020));

	typedef const char*(__cdecl *Lua_ToLString)(lua_state lst, int idx, size_t *len);
	Lua_ToLString rbx_toLstringbase = (Lua_ToLString)Retcheck::unprotect(aslr(0x736080));

	typedef int(__cdecl *Lua_toBoolean)(lua_state lst, int idx);
	Lua_toBoolean rbx_toBoolbase = (Lua_toBoolean)Retcheck::unprotect(aslr(0x735FC0));

	typedef int(__cdecl *Lua_tonumber)(lua_state lst, int idx);
	Lua_tonumber rbx_tonumberbase = (Lua_tonumber)Retcheck::unprotect(aslr(0x736360));

	typedef int(__cdecl *Lua_type)(lua_state lst, int idx, bool type);
	Lua_type rbx_typebase = (Lua_type)Retcheck::unprotect(aslr(0x7364C0));

	typedef int(__cdecl *Lua_next)(lua_state lst, int idx);
	Lua_next rbx_nextbase = (Lua_next)Retcheck::unprotect(aslr(0x734960));

	typedef int(__cdecl *Lua_getmetatable)(lua_state lst, int idx);
	Lua_getmetatable rbx_getmetatable = (Lua_getmetatable)Retcheck::unprotect(aslr(0x733FF0));

	typedef int(__cdecl *Identity)();
	Identity rbx_identity = (Identity)aslr(0x5A96E0);

	
	DWORD PENV = aslr(0x72D3F7); //EIP of the jz.

	void rbx_getfield(lua_state lst, int index, const char *k) {
		set_jnz(PENV);
		rbx_getfieldbase(lst, index, k);
		set_jz(PENV);
	}

	void rbx_settop(lua_state lst, int index) {
		set_jnz(PENV);
		rbx_settopbase(lst, index);
		set_jz(PENV);
	}

	void rbx_pushstring(lua_state lst, const char *s) {
		rbx_pushstringbase(lst, s);
	}

	void rbx_pushvalue(lua_state lst, int value) {
		set_jnz(PENV);
		rbx_pushvaluebase(lst, value);
		set_jz(PENV);
	}

	int rbx_pcall(lua_state lst, int nargs, int nresults, int errfunc) {
		set_jnz(PENV);
		auto ret = rbx_pcallbase(lst, nargs, nresults, errfunc);
		set_jz(PENV);
		return ret;
	}

	void rbx_setfield(int L, int idx, const char *k) {
		rbx_pushvalue(L, idx);
		if (rbx_getmetatable(L, -1)) {
			rbx_getfield(L, -1, "__newindex");
			rbx_pushvalue(L, -3);
			rbx_pushstring(L, k);
			rbx_pushvalue(L, -6);
			rbx_pcall(L, 3, 0, 0);
			rbx_pop(L, 3);
		}
		else {
			rbx_pop(L, 1);
			rbx_setfieldbase(L, idx, k);
		}
	}

	void rbx_pushnumber(lua_state lst, double n) {
		set_jnz(PENV);
		rbx_pushnumberbase(lst, n);
		set_jz(PENV);
	}

	const char* rbx_toLstring(lua_state lst, int idx, size_t *len) {
		set_jnz(PENV);
		auto ret = rbx_toLstringbase(lst, idx, len);
		set_jz(PENV);
		return ret;
	}

	bool rbx_toboolean(lua_state lst, int idx) {
		set_jnz(PENV);
		auto ret = rbx_toBoolbase(lst, idx);
		set_jz(PENV);
		return ret;
	}

	int rbx_tonumber(lua_state lst, int idx) {
		set_jnz(PENV);
		auto ret = rbx_tonumberbase(lst, idx);
		set_jz(PENV);
		return ret;
	}

	int rbx_type(lua_state lst, int idx, bool type) {
		set_jnz(PENV);
		auto ret = rbx_typebase(lst, idx, type);
		set_jz(PENV);
		return ret;
	}

	int rbx_next(lua_state lst, int idx) {
		set_jnz(PENV);
		auto ret = rbx_nextbase(lst, idx);
		set_jz(PENV);
		return ret;
	}
	static void rbx_pushboolean(int L, int a2)
	{
		int v2;
		v2 = *(DWORD *)(L + 16);
		*(DWORD *)v2 = a2 != 0;
		*(DWORD *)(v2 + 8) = 3;
		*(DWORD *)(L + 16) += 16;
	}
	int rbx_gettop(lua_state state) {
		return (*(DWORD *)(state + 20) - *(DWORD *)(state + 24)) >> 4;
	}


}

void rbx_print(PMSGTYPE out, const char * msgfmt, ...)
{
	va_list args;
	va_start(args, msgfmt);
	char buff[1024];
	vsnprintf_s(buff, sizeof(buff), msgfmt, args);
	((int(*)(int, int, const char*, ...))aobscan::scan("\x55\x8B\xEC\x6A\xFF\x68\x00\x00\x00\x00\x64\xA1\x00\x00\x00\x00\x50\x64\x89\x25\x00\x00\x00\x00\x83\xEC\x30\x8D\x45\x14", "xxxxxx????xx????xxxx????xxxxxx"))(((int(__cdecl*)())aobscan::scan("\x55\x8B\xEC\x6A\xFF\x68\x00\x00\x00\x00\x64\xA1\x00\x00\x00\x00\x50\x64\x89\x25\x00\x00\x00\x00\x51\x64\xA1\x00\x00\x00\x00\x8B\x0D\x00\x00\x00\x00\x8B\x0C\x88\xA1\x00\x00\x00\x00\x3B\x81\x00\x00\x00\x00\x7E\x4F", "xxxxxx????xx????xxxx????xxx????xx????xxxx????xx????xx"))(), out, buff);
	va_end(args);
}
