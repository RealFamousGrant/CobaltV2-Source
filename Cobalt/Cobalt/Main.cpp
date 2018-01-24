#define _CRT_SECURE_NO_WARNINGS
#define _WIN32_WINNT _WIN32_WINNT_WINXP
#define _WINSOCK_DEPRECATED_NO_WARNINGS
#define WIN32_LEAN_AND_MEAN 

#include <Commdlg.h>
#include <shellapi.h>
#include <Windows.h>
#include <iostream>
#include <string>


#pragma comment(lib, "urlmon.lib")
#pragma comment(lib, "wininet.lib")
#pragma comment(lib, "iphlpapi.lib")
#pragma comment(lib,"ws2_32.lib")
#pragma comment(lib, "wininet")

#pragma once

#include "stdafx.h"

#include "Rlua.h"
#include "Scan.h"
#include "Functions.h"
#include "Commands.h"
#include "VMProtectSDK.h"
#include "Colours.h"
#include "metamethods.h"
#include "LFunctions.h"

extern "C" {
#include "Lua-5.1.5\lua.h"
#include "Lua-5.1.5\lua.hpp"
#include "Lua-5.1.5\lualib.h"
#include "Lua-5.1.5\lauxlib.h"
#include "Lua-5.1.5\luaconf.h"
}

#pragma comment(lib, "VMProtectSDK32")
#pragma comment(lib, "lua5.1")
using namespace std;

/*BEFORE YOU START EDITING THIS! MAKE SURE THAT YOU MAKE A UI AND CONNECT THE PIPES. YOU SHOULD KNOW HOW TO DO THAT!*/




DWORD WINAPI CmdPipe(PVOID lvpParameter)
{
	HANDLE hPipe;
	char buffer[1024];
	DWORD dwRead;
	hPipe = CreateNamedPipe(TEXT("\\\\.\\pipe\\cobaltpipehax"),
		PIPE_ACCESS_DUPLEX | PIPE_TYPE_BYTE | PIPE_READMODE_BYTE,
		PIPE_WAIT,
		1,
		1024 * 16,
		1024 * 16,
		NMPWAIT_USE_DEFAULT_WAIT,
		NULL);
	while (hPipe != INVALID_HANDLE_VALUE)
	{
		if (ConnectNamedPipe(hPipe, NULL) != FALSE)
		{
			while (ReadFile(hPipe, buffer, sizeof(buffer) - 1, &dwRead, NULL) != FALSE)
			{
				buffer[dwRead] = '\0';
				if (buffer != "" || buffer != " " || buffer != "cmds")
				{
					ExecuteCommand(buffer);
				}
			}
		}
		DisconnectNamedPipe(hPipe);
	}
}

DWORD WINAPI LuaCPipe(PVOID lvpParameter)
{
	HANDLE hPipe;
	char buffer[1024];
	DWORD dwRead;
	hPipe = CreateNamedPipe(TEXT("\\\\.\\pipe\\cobaltpipeehax"),
		PIPE_ACCESS_DUPLEX | PIPE_TYPE_BYTE | PIPE_READMODE_BYTE,
		PIPE_WAIT,
		1,
		1024 * 16,
		1024 * 16,
		NMPWAIT_USE_DEFAULT_WAIT,
		NULL);
	while (hPipe != INVALID_HANDLE_VALUE)
	{
		if (ConnectNamedPipe(hPipe, NULL) != FALSE)
		{
			while (ReadFile(hPipe, buffer, sizeof(buffer) - 1, &dwRead, NULL) != FALSE)
			{
				buffer[dwRead] = '\0';
				ExecuteLuaC(buffer);
				//}
			}
		}
		DisconnectNamedPipe(hPipe);
	}
}




#include <tchar.h>
#include <windows.h>


lua_State* L;


int opencustomlibs(lua_State* L) {
	VMProtectBeginMutation("Lua");
	lua_newtable(L);
	lua_pushcfunction(L, Instance_new);
	lua_setfield(L, -2, "new");
	lua_setglobal(L, "Instance");
	lua_settop(L, 0);
	lua_newtable(L);
	lua_pushcfunction(L, Vector3_new);
	lua_setfield(L, -2, "new");
	lua_setglobal(L, "Vector3");
	lua_settop(L, 0);
	lua_getglobal(L, "Vector3");
	lua_pushvalue(L, -1);
	lua_setfield(L, -2, "__index");
	lua_settop(L, 0);
	lua_newtable(L);
	lua_pushcfunction(L, Color3_new);
	lua_setfield(L, -2, "new");
	lua_setglobal(L, "Color3");
	lua_settop(L, 0);
	lua_getglobal(L, "Color3");
	lua_pushvalue(L, -1);
	lua_setfield(L, -2, "__index");
	lua_settop(L, 0);
	lua_newtable(L);
	lua_pushstring(L, "asd");
	lua_setfield(L, -2, "__metatable");
	lua_settop(L, 0);
	lua_newtable(L);
	lua_createtable(L, 0, 1);
	lua_pushcfunction(L, GameIndex);
	lua_setfield(L, -2, "__index");
	lua_pushcfunction(L, GameNewIndex);
	lua_setfield(L, -2, "__newindex");
	lua_pushcfunction(L, GameCall);
	lua_setfield(L, -2, "__call");
	lua_setmetatable(L, -2);
	lua_setglobal(L, "game");
	lua_settop(L, 0);
	lua_newtable(L);
	lua_createtable(L, 0, 1);
	lua_pushcfunction(L, WorkspaceIndex);
	lua_setfield(L, -2, "__index");
	lua_pushcfunction(L, WorkspaceNewIndex);
	lua_setfield(L, -2, "__newindex");
	lua_pushcfunction(L, WorkspaceCall);
	lua_setfield(L, -2, "__call");
	lua_setmetatable(L, -2);
	lua_setglobal(L, "workspace");
	lua_settop(L, 0);
	lua_pushcfunction(L, PrintIdentity);
	lua_setglobal(L, "printidentity");
	lua_settop(L, 0);
	lua_pushcfunction(L, Warn);
	lua_setglobal(L, "warn");
	lua_settop(L, 0);
	lua_pushcfunction(L, Print);
	lua_setglobal(L, "print");
	lua_settop(L, 0);
	lua_pushcfunction(L, Wait);
	lua_setglobal(L, "wait");
	lua_settop(L, 0);
	lua_pushcfunction(L, LuaCAPI);
	lua_setglobal(L, "luac");
	lua_settop(L, 0);
	return 1;
	VMProtectEnd();
}

std::vector<std::string> split(std::string s) {
	std::vector<std::string> elems;
	std::stringstream ss(s);
	std::istream_iterator<std::string> begin(ss);
	std::istream_iterator<std::string> end;
	std::vector<std::string> vstrings(begin, end);
	return vstrings;
}

void ExecuteScript(std::string input) {
	VMProtectBeginMutation("ExeLua");
	lua_State* luaS = luaL_newstate();
	lua_State* LuaS = lua_newthread(luaS);
	luaL_openlibs(LuaS);
	opencustomlibs(LuaS);
	std::string total;
	try {
		int err = luaL_dostring(LuaS, input.c_str());
		if (err)
		{
			const char* errmsg = lua_tostring(LuaS, -1);
			printf(errmsg);
			lua_pop(LuaS, 1);
		}
	}
	catch (exception e)
	{
		printf(e.what());
	}
	VMProtectEnd();
}
DWORD WINAPI ScriptPipe(PVOID lvpParameter)
{
	HANDLE hPipe;
	char buffer[1024];
	DWORD dwRead;
	hPipe = CreateNamedPipe(TEXT("\\\\.\\pipe\\cobaltpipeeehax"),
		PIPE_ACCESS_DUPLEX | PIPE_TYPE_BYTE | PIPE_READMODE_BYTE,
		PIPE_WAIT,
		1,
		1024 * 16,
		1024 * 16,
		NMPWAIT_USE_DEFAULT_WAIT,
		NULL);
	while (hPipe != INVALID_HANDLE_VALUE)
	{
		if (ConnectNamedPipe(hPipe, NULL) != FALSE)
		{
			while (ReadFile(hPipe, buffer, sizeof(buffer) - 1, &dwRead, NULL) != FALSE)
			{
				buffer[dwRead] = '\0';
				ExecuteScript(buffer);
				//}
			}
		}
		DisconnectNamedPipe(hPipe);
	}
}

unsigned long scriptcontextvftableaddr = aslr(0x6bbd00);
void Scan() {
	using namespace std;
	VMProtectBeginMutation("Scan");
	DWORD ScriptContextVFTable = *(DWORD*)(scriptcontextvftableaddr + 0x2);
	ScriptContext = FastMemory::Scan((char*)&ScriptContextVFTable);
	luaState = (ScriptContext + 220) - *(DWORD *)(ScriptContext + 220);
	SetIdentity();
	VMProtectEnd();
}


int Init() {

	HWND ConsoleHandle = GetConsoleWindow();

	VMProtectBeginMutation("Initiation");

	CustomizeConsole("CobaltV2 Debug console");


	cout << "Scanning..." << endl;

	Scan();
	cout << "Scan Complete!" << endl;
	::ShowWindow(ConsoleHandle, SW_HIDE);

	CreateThread(NULL, 0, CmdPipe, NULL, 0, NULL);

	CreateThread(NULL, 0, LuaCPipe, NULL, 0, NULL);

	CreateThread(NULL, 0, ScriptPipe, NULL, 0, NULL);

	

	ExecuteScript("print(\"Welcome to CobaltV2!\")");

		

	VMProtectEnd();



	return 0;
}
