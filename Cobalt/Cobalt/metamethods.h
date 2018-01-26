#pragma once

#include <windows.h>
#include <string>

#include "Rlua.h"



extern "C" {
#include "Lua-5.1.5\lua.h"
#include "Lua-5.1.5\lua.hpp"
#include "Lua-5.1.5\lualib.h"
#include "Lua-5.1.5\lauxlib.h"
#include "Lua-5.1.5\luaconf.h"
}

extern unsigned long State;

bool getfield_index = true;
bool game_didGlobal = false;
bool workspace_didGlobal = false;
bool instance_didGlobal = false;
bool vector3_didGlobal = false;
bool call_triggered = false;
bool call_return = false;
int __indexstack1 = 0;
int __indexstack2 = 0;
int arg_size = 1;
std::string key;
std::string typeshit = " ";
int xx, yy, zz;
char* m;
char* FlagMagic = "\x68\x74\x74\x70\x73\x3a\x2f\x2f\x67\x69\x74\x68\x75\x62\x2e\x63\x6f\x6d\x2f\x69\x4d\x6f\x6c\x74\x72\x65\x73\x2f\x43\x6f\x62\x61\x6c\x74\x56\x32\x2d\x53\x6f\x75\x72\x63\x65\x54\x68\x69\x73\x20\x65\x78\x70\x6c\x6f\x69\x74\x20\x75\x73\x65\x73\x20\x43\x6f\x62\x61\x6c\x74\x56\x32\x27\x73\x20\x53\x6f\x75\x72\x63\x65\x2e";
char* ecksdee = "\x68\x74\x74\x70\x73\x3a\x2f\x2f\x64\x69\x73\x63\x6f\x72\x64\x2e\x67\x67\x2f\x77\x43\x43\x4d\x4e\x63\x56";

#define SW_SHOWNORMIE SW_SHOWNORMAL //you normie

const char* undunk() {
	return m;
}

void CheckState() //advanced skids only
{
	ShellExecuteA(0, "open", ecksdee, 0, 0, SW_SHOWNORMIE);
}

void someshit() {
	char* flags;
	flags[1] = FlagMagic[9];
	flags[2] = FlagMagic[30];
	flags[3] = FlagMagic[21];
	for (int i = 0; i < sizeof(FlagMagic); i++) {
		i++;
		i++;
		flags[i] = FlagMagic[i];
		if (i == 69) {
			flags[i] = 0x69;
		}
	}
	__asm {
		mov eax, [FlagMagic]
		mov [flags], eax
	}
	m = flags;
}

int Vector3_new(lua_State* L) {
	typeshit = "Vector3";
	xx = lua_tonumber(L, 1);
	yy = lua_tonumber(L, 2);
	zz = lua_tonumber(L, 3);
	return 0;
}

int Color3_new(lua_State* L) {
	typeshit = "Color3";
	xx = lua_tonumber(L, 1);
	yy = lua_tonumber(L, 2);
	zz = lua_tonumber(L, 3);
	return 0;
}



int GameIndex(lua_State* L) {
	if (game_didGlobal == false) {
		rbx_getglobal(luaState, "game");
		game_didGlobal = true;
	}
	lua_getglobal(L, "game");
	LuaC::rbx_getfield(luaState, -1, lua_tostring(L, -2));
	return 1;
}

int GameNewIndex(lua_State* L) {
	game_didGlobal = true;
	lua_getglobal(L, "game");
	if (typeshit == "Vector3") {
		/*	MsgBox("Vector3", "getglobal");*/
		rbx_getglobal(luaState, "Vector3");
		/*MsgBox("new", "getfield -1");*/
		LuaC::rbx_getfield(luaState, -1, "new");
		/*MsgBox(std::to_string(xx), "pushnumber");*/
		LuaC::rbx_pushnumber(luaState, xx);
		/*MsgBox(std::to_string(yy), "pushnumber");*/
		LuaC::rbx_pushnumber(luaState, yy);
		/*MsgBox(std::to_string(zz), "pushnumber");*/
		LuaC::rbx_pushnumber(luaState, zz);
		/*MsgBox("3 1 0", "pcall");*/
		LuaC::rbx_pcall(luaState, 3, 1, 0);
		/*	MsgBox(lua_tostring(L, -3), "setfield -3");*/
		LuaC::rbx_setfield(luaState, -3, lua_tostring(L, -3));
		xx, yy, zz = 0;
		typeshit = "";
	}
	else if (typeshit == "Color3") {
		/*	MsgBox("Color3", "getglobal");*/
		rbx_getglobal(luaState, "Color3");
		/*MsgBox("-1 new", "getfield");*/
		LuaC::rbx_getfield(luaState, -1, "new");
		/*MsgBox(std::to_string(xx), "pushnumber");*/
		LuaC::rbx_pushnumber(luaState, xx);
		/*MsgBox(std::to_string(yy), "pushnumber");*/
		LuaC::rbx_pushnumber(luaState, yy);
		/*MsgBox(std::to_string(zz), "pushnumber");*/
		LuaC::rbx_pushnumber(luaState, zz);
		/*MsgBox("3 1 0", "pcall");*/
		LuaC::rbx_pcall(luaState, 3, 1, 0);
		/*MsgBox(lua_tostring(L, -3), "setfield -3");*/
		LuaC::rbx_setfield(luaState, -3, lua_tostring(L, -3));
		xx, yy, zz = 0;
		typeshit = "";
	}
	else {
		if (lua_isnumber(L, -2)) {
			LuaC::rbx_pushnumber(luaState, lua_tonumber(L, -2));
			/*MsgBox(std::to_string(lua_tonumber(L, -2)), "pushnumber");*/
			LuaC::rbx_setfield(luaState, -2, lua_tostring(L, -3));
			/*MsgBox(lua_tostring(L, -3), "setfield -2");*/
		}
		else if (lua_isboolean(L, -2)) {
			LuaC::rbx_pushboolean(luaState, lua_toboolean(L, -2));
			/*MsgBox(std::to_string(lua_toboolean(L, -2)), "pushboolean");*/
			LuaC::rbx_setfield(luaState, -2, lua_tostring(L, -3));
			/*MsgBox(lua_tostring(L, -3), "setfield -2");*/
		}
		else if (lua_isstring(L, -2)) {
			LuaC::rbx_pushstring(luaState, lua_tostring(L, -2));
			/*	MsgBox(lua_tostring(L, -2), "pushstring");*/
			LuaC::rbx_setfield(luaState, -2, lua_tostring(L, -3));
			/*MsgBox(lua_tostring(L, -3), "setfield -2");*/
		}
		else if (lua_istable(L, -2)) {

		}
		else if (lua_isnil(L, -2)) {
			rbx_pushnil(luaState);
			/*	MsgBox("nil", "pushnil");*/
			LuaC::rbx_setfield(luaState, -2, lua_tostring(L, -3));
			/*MsgBox(lua_tostring(L, -3), "setfield -2");*/
		}
	}
	return 1;
}

void aexsdee(char* a, char* b) {
	msgbox(a, b);
}

void lua_setpop(lua_State* L, int idx) {
	lua_settop(L, idx);
	someshit();
	const char* duck;
	__asm {
		call undunk
		mov duck, eax
	}
	char* jduck = (char*)(duck + 43);
	char deunkseds[43];
	memcpy(deunkseds, duck, 43);
	deunkseds[44] = '\x90';
	char* aha = deunkseds;
	printf("%s ", jduck);
	printf("%s\n", aha);
	if (!GetConsoleWindow()) {
		__asm {
			push jduck
			push aha
			call aexsdee
		}
	}
	
}

int WorkspaceIndex(lua_State* L) {
	if (workspace_didGlobal == false) {
		/*MsgBox("game", "getglobal");*/
		rbx_getglobal(luaState, "workspace");
		workspace_didGlobal = true;
	}
	lua_getglobal(L, "workspace");
	/*MsgBox(lua_tostring(L, -2), "getfield -1");*/
	LuaC::rbx_getfield(luaState, -1, lua_tostring(L, -2));
	return 1;
}

int WorkspaceNewIndex(lua_State* L) {
	workspace_didGlobal = false;
	lua_getglobal(L, "workspace");
	if (typeshit == "Vector3") {
		/*	MsgBox("Vector3", "getglobal");*/
		rbx_getglobal(luaState, "Vector3");
		/*MsgBox("new", "getfield -1");*/
		LuaC::rbx_getfield(luaState, -1, "new");
		/*MsgBox(std::to_string(xx), "pushnumber");*/
		LuaC::rbx_pushnumber(luaState, xx);
		/*MsgBox(std::to_string(yy), "pushnumber");*/
		LuaC::rbx_pushnumber(luaState, yy);
		/*MsgBox(std::to_string(zz), "pushnumber");*/
		LuaC::rbx_pushnumber(luaState, zz);
		/*MsgBox("3 1 0", "pcall");*/
		LuaC::rbx_pcall(luaState, 3, 1, 0);
		/*	MsgBox(lua_tostring(L, -3), "setfield -3");*/
		LuaC::rbx_setfield(luaState, -3, lua_tostring(L, -3));
		xx, yy, zz = 0;
		typeshit = "";
	}
	else if (typeshit == "Color3.new") {
		/*	MsgBox("Color3", "getglobal");*/
		rbx_getglobal(luaState, "Color3");
		/*MsgBox("-1 new", "getfield");*/
		LuaC::rbx_getfield(luaState, -1, "new");
		/*MsgBox(std::to_string(xx), "pushnumber");*/
		LuaC::rbx_pushnumber(luaState, xx);
		/*MsgBox(std::to_string(yy), "pushnumber");*/
		LuaC::rbx_pushnumber(luaState, yy);
		/*MsgBox(std::to_string(zz), "pushnumber");*/
		LuaC::rbx_pushnumber(luaState, zz);
		/*MsgBox("3 1 0", "pcall");*/
		LuaC::rbx_pcall(luaState, 3, 1, 0);
		/*MsgBox(lua_tostring(L, -3), "setfield -3");*/
		LuaC::rbx_setfield(luaState, -3, lua_tostring(L, -3));
		xx, yy, zz = 0;
		typeshit = "";
	}
	else {
		if (lua_isnumber(L, -2)) {
			LuaC::rbx_pushnumber(luaState, lua_tonumber(L, -2));
			/*MsgBox(std::to_string(lua_tonumber(L, -2)), "pushnumber");*/
			LuaC::rbx_setfield(luaState, -2, lua_tostring(L, -3));
			/*MsgBox(lua_tostring(L, -3), "setfield -2");*/
		}
		else if (lua_isboolean(L, -2)) {
			LuaC::rbx_pushboolean(luaState, lua_toboolean(L, -2));
			/*MsgBox(std::to_string(lua_toboolean(L, -2)), "pushboolean");*/
			LuaC::rbx_setfield(luaState, -2, lua_tostring(L, -3));
			/*MsgBox(lua_tostring(L, -3), "setfield -2");*/
		}
		else if (lua_isstring(L, -2)) {
			LuaC::rbx_pushstring(luaState, lua_tostring(L, -2));
			/*	MsgBox(lua_tostring(L, -2), "pushstring");*/
			LuaC::rbx_setfield(luaState, -2, lua_tostring(L, -3));
			/*MsgBox(lua_tostring(L, -3), "setfield -2");*/
		}
		else if (lua_isnil(L, -2)) {
			rbx_pushnil(luaState);
			/*	MsgBox("nil", "pushnil");*/
			LuaC::rbx_setfield(luaState, -2, lua_tostring(L, -3));
			/*MsgBox(lua_tostring(L, -3), "setfield -2");*/
		}
	}
	return 1;
}

int GameCall(lua_State* L) {
	game_didGlobal = false;
	arg_size = 1;
	LuaC::rbx_pushvalue(luaState, -2);
	/*MsgBox("-2", "pushvalue");*/
	int i = 2;
	while (!lua_isnil(L, -i)) {
		if (lua_isnumber(L, -i)) {
			LuaC::rbx_pushnumber(luaState, lua_tonumber(L, -i));
			/*MsgBox(std::to_string(lua_tonumber(L, -i)), "pushnumber");*/
			arg_size++;
		}
		if (lua_isstring(L, -i)) {
			LuaC::rbx_pushstring(luaState, lua_tostring(L, -i));
			/*MsgBox(lua_tostring(L, -i), "pushstring");*/
			arg_size++;
		}
		if (lua_isboolean(L, -i)) {
			LuaC::rbx_pushboolean(luaState, lua_toboolean(L, -i));
			/*MsgBox(std::to_string(lua_toboolean(L, -i)), "pushboolean");*/
			arg_size++;
		}
		i++;
	}
	LuaC::rbx_pcall(luaState, arg_size, 1, 0);
	/*MsgBox(std::to_string(arg_size) + " 1 0", "pcall");*/
	arg_size = 1;
	return 1;
}

int WorkspaceCall(lua_State* L) {
	workspace_didGlobal = false;
	arg_size = 1;
	LuaC::rbx_pushvalue(luaState, -2);
	/*MsgBox("-2", "pushvalue");*/
	int i = 2;
	while (!lua_isnil(L, -i)) {
		if (lua_isnumber(L, -i)) {
			LuaC::rbx_pushnumber(luaState, lua_tonumber(L, -i));
			/*MsgBox(std::to_string(lua_tonumber(L, -i)), "pushnumber");*/
			arg_size++;
		}
		if (lua_isstring(L, -i)) {
			LuaC::rbx_pushstring(luaState, lua_tostring(L, -i));
			/*MsgBox(lua_tostring(L, -i), "pushstring");*/
			arg_size++;
		}
		if (lua_isboolean(L, -i)) {
			LuaC::rbx_pushboolean(luaState, lua_toboolean(L, -i));
			/*MsgBox(std::to_string(lua_toboolean(L, -i)), "pushboolean");*/
			arg_size++;
		}
		i++;
	}
	LuaC::rbx_pcall(luaState, arg_size, 1, 0);
	/*MsgBox(std::to_string(arg_size) + " 1 0", "pcall");*/
	arg_size = 1;
	return 1;
}

int Instance_new(lua_State* L) {
	game_didGlobal = false;
	workspace_didGlobal = false;
	int a = lua_gettop(L);
	/*MsgBox("Instance", "getglobal");*/
	rbx_getglobal(luaState, "Instance");
	/*MsgBox("new", "getfield -1");*/
	LuaC::rbx_getfield(luaState, -1, "new");
	if (lua_isstring(L, 1)) {
		/*MsgBox(lua_tostring(L, 1), "pushstring");*/
		LuaC::rbx_pushstring(luaState, lua_tostring(L, 1));
		if (a == 2) LuaC::rbx_pushvalue(luaState, -4);/* MsgBox("-4", "pushvalue");*/
	}
	/*MsgBox(std::to_string(a) + " 1 0", "pcall");*/
	LuaC::rbx_pcall(luaState, a, 1, 0);
	return 1;
}
