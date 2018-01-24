#define _CRT_SECURE_NO_WARNINGS
#include <Windows.h>
#include <string>
#include <iostream>
#include <sstream>
#include <vector>
#include <time.h>
#include <iterator>
#include <fstream>
#include <cstdlib>
#include <tchar.h>
#include <chrono>
#include <thread>
#include <urlmon.h>
#include <Lmcons.h>
#include <direct.h>
#include <stdio.h>
#include <io.h>

#include <random>
#include <ctime>

#pragma comment(lib, "urlmon.lib")
#pragma comment(lib, "wininet.lib")
#pragma comment(lib, "iphlpapi.lib")
#pragma comment(lib,"ws2_32.lib")
#pragma comment(lib, "wininet")
#pragma comment(lib, "wsock32.lib") 
#pragma comment(lib, "detours.lib")
#pragma comment(lib, "lua51.lib")
#pragma comment(lib, "lua5.1.lib")
#pragma once

#include "stdafx.h"
#include "VMProtectSDK.h"
#include "Rlua.h"
#include "Defs.h"


#pragma comment(lib, "VMProtectSDK32")

std::string WebContent;
std::string PlayerName;
int PlayerID;
int DataModel;
int Players;
int Lighting;
int Workspace;
int ScriptContext;
int luaState;
int Filtering;

bool MaliciousAppCheckOn = true;

using namespace std;
using namespace LuaC;

std::string ConvertToString(int i) {

	std::string returnval;
	if (i) {
		returnval = std::to_string(i);
	}
	return returnval;
}

std::vector<std::string> Split(std::string str, char Delim) {
	std::vector<std::string> Args;
	std::stringstream ss(str);
	std::string Arg;
	while (getline(ss, Arg, Delim))
		Args.push_back(Arg);
	return Args;
}

std::string to_lower(std::string str)
{
	std::string retn("");
	for (int i = 0; i < str.length(); i++)
	{
		int ascii = (int)str.at(i);
		if (ascii >= (int)'a' && ascii <= (int)'z')
			retn += (char)ascii;
		else
			retn += (char)(ascii + ((int)'a' - (int)'A'));
	}
	return retn;
}

void getService(std::string service)
{
	using namespace LuaC;
	rbx_getfield(luaState, rbx_GLOBALSINDEX, "game");
	rbx_getfield(luaState, -1, "GetService");
	rbx_pushvalue(luaState, -2);
	rbx_pushstring(luaState, service.c_str());
	rbx_pcall(luaState, 2, 1, 0);
}






void FindFirstChild(std::string baseinst, std::string childname)
{
	using namespace LuaC;
	rbx_getfield(luaState, rbx_GLOBALSINDEX, "game");
	rbx_getfield(luaState, -1, baseinst.c_str());
	rbx_getfield(luaState, -1, "FindFirstChild");
	rbx_pushvalue(luaState, -2);
	rbx_pushstring(luaState, childname.c_str());
	rbx_pcall(luaState, 2, 1, 0);
}

const char* GetClass(int self)
{
	return (const char*)(*(int(**)(void))(*(int*)self + 16));
}

int GetParent(int Instance) {
	return *(int*)(Instance + 0x34);
}

std::string* GetName(int Instance) {
	return (std::string*)(*(int*)(Instance + 0x28));
}

int FindFirstClass(int Instance, const char* ClassName) {
	if (Instance > 10000) {
		DWORD StartOfChildren = *(DWORD*)(Instance + 0x2C);
		if (StartOfChildren != 0) {
			DWORD EndOfChildren = *(DWORD*)(StartOfChildren + 4);
			if (EndOfChildren != 0) {
				for (int i = *(int*)StartOfChildren; i != EndOfChildren; i += 8) {
					try {
						if (memcmp(GetClass(*(int*)i), ClassName, strlen(ClassName)) == 0) {
							return *(int*)i;
						}
					}
					catch (std::exception) {
						Sleep(1);
					}
					catch (...) {
						Sleep(1);
					}
				}
			}
		}
	}
	return 0;
}

int *SetIdentity()
{
	int *Level = (int *)rbx_identity();
	if (*Level == 0)
		*Level = 69;
	return Level;
}




static bool ClickTPBool = false;
void msgbox(LPCSTR text, LPCSTR title)
{
	MessageBoxA(NULL, text, title, MB_OK | MB_TOPMOST);
}
static void ClickTP()
{
	do
	{
		if (GetKeyState(VK_LCONTROL) < 0 && GetKeyState(VK_LBUTTON) < 0 && ClickTPBool == true)
		{

			try {
				rbx_settop(luaState, 0);
				rbx_getglobal(luaState, "game");
				rbx_getfield(luaState, -1, "Players");
				rbx_getfield(luaState, -1, "LocalPlayer");
				rbx_getfield(luaState, -1, "GetMouse");
				rbx_pushvalue(luaState, -2);
				rbx_pcall(luaState, 1, 1, 0);
				rbx_getfield(luaState, -1, "Hit");
				rbx_getglobal(luaState, "game");
				rbx_getfield(luaState, -1, "Workspace");
				rbx_getfield(luaState, -1, "Remove");
				rbx_pushvalue(luaState, -4);
				Sleep(200);
			}
			catch (exception e)
			{
				msgbox("you died lol ur a skrub", "error u skrub");
			}


		}
	} while (true);
}

void CustomizeConsole(char* title) {
	DWORD Null;
	VirtualProtect((PVOID)&FreeConsole, 1, PAGE_EXECUTE_READWRITE, &Null);
	*(BYTE*)(&FreeConsole) = 0xC3;
	AllocConsole();
	SetConsoleTitleA(title);
	freopen("CONOUT$", "w", stdout);
	freopen("CONIN$", "r", stdin);
	//SetWindowLong(GetConsoleWindow(), GWL_STYLE, WS_CAPTION | WS_MINIMIZEBOX | WS_SYSMENU);
	HWND ConsoleHandle = GetConsoleWindow();
	::SetWindowPos(ConsoleHandle, HWND_NOTOPMOST, 0, 0, 0, 0, SWP_DRAWFRAME | SWP_NOMOVE | SWP_NOSIZE | SWP_SHOWWINDOW);
}

std::string GetInput() {
	std::string input;
	getline(std::cin, input);
	return input;
}

void CreateInstance(lua_state state, const char* Instance) {
	rbx_getfield(luaState, rbx_GLOBALSINDEX, "Instance");
	rbx_getfield(luaState, -1, "new");
	rbx_pushstring(luaState, Instance);
	rbx_pushvalue(luaState, -4);
	rbx_pcall(luaState, 2, 1, 0);
}
std::string LocalPlayerName() {
	using namespace LuaC;
	std::string name;
	getService("Players");
	rbx_getfield(luaState, -1, "LocalPlayer");
	rbx_getfield(luaState, -1, "Name");
	name = rbx_tostring(luaState, -1);
	return name;
}




void CreateScript(Script script) {
	switch (script.Type) {
	case RawScriptTypeNormal:
	{
		getService("Workspace");
		rbx_getfield(luaState, rbx_GLOBALSINDEX, "Instance");
		rbx_getfield(luaState, -1, "new");
		rbx_pushstring(luaState, "Script");
		rbx_pushvalue(luaState, -4);
		rbx_pcall(luaState, 2, 1, 0);

		rbx_pushstring(luaState, script.Source);
		rbx_setfield(luaState, -2, "Source");
		rbx_pushstring(luaState, (const char*)script.Name);
		rbx_setfield(luaState, -2, "Name");
	}
	case RawScriptTypeLocal:
	{
		getService("ReplicatedFirst");
		rbx_getfield(luaState, rbx_GLOBALSINDEX, "Instance");
		rbx_getfield(luaState, -1, "new");
		rbx_pushstring(luaState, "LocalScript");
		rbx_pushvalue(luaState, -4);
		rbx_pcall(luaState, 2, 1, 0);

		rbx_pushstring(luaState, script.Source);
		rbx_setfield(luaState, -2, "Source");
		rbx_pushstring(luaState, (const char*)script.Name);
		rbx_setfield(luaState, -2, "Name");
	}
	case RawScriptTypeModule:
	{
		getService("Workspace");
		rbx_getfield(luaState, rbx_GLOBALSINDEX, "Instance");
		rbx_getfield(luaState, -1, "new");
		rbx_pushstring(luaState, "ModuleScript");
		rbx_pushvalue(luaState, -4);
		rbx_pcall(luaState, 2, 1, 0);

		rbx_pushstring(luaState, script.Source);
		rbx_setfield(luaState, -2, "Source");
		rbx_pushstring(luaState, (const char*)script.Name);
		rbx_setfield(luaState, -2, "Name");
	}
	default:
		break;
	}


}

using namespace std;





vector<string> GetPlayerName(std::string input)
{
	vector<string> Players;
	if (input == "me") {
		rbx_getglobal(luaState, "game");
		rbx_getfield(luaState, -1, "Players");
		rbx_getfield(luaState, -1, "LocalPlayer");
		rbx_getfield(luaState, -1, "Name");
		std::string LocalPlayer = rbx_tostring(luaState, -1, 0);
		Players.push_back(LocalPlayer);
	}
	else if (input == "all") {
		rbx_getglobal(luaState, "game");
		rbx_getfield(luaState, -1, "Players");
		rbx_getfield(luaState, -1, "GetChildren");
		rbx_pushvalue(luaState, -2);
		rbx_pcall(luaState, 1, 1, 0);
		rbx_pushnil(luaState);
		while (rbx_next(luaState, -2) != 0) {
			std::string Player;
			rbx_getfield(luaState, -1, "Name");
			Player = rbx_tostring(luaState, -1, 0);
			rbx_pop(luaState, 2);
			Players.push_back(Player);
		}
	}
	else if (input == "others") {
		rbx_getglobal(luaState, "game");
		rbx_getfield(luaState, -1, "Players");
		rbx_getfield(luaState, -1, "GetChildren");
		rbx_pushvalue(luaState, -2);
		rbx_pcall(luaState, 1, 1, 0);
		rbx_pushnil(luaState);
		while (rbx_next(luaState, -2) != 0) {
			std::string Player;
			rbx_getfield(luaState, -1, "Name");
			Player = rbx_tostring(luaState, -1, 0);
			rbx_pop(luaState, 2);
			Players.push_back(Player);
		}
		std::string LocalPlayer;
		rbx_getglobal(luaState, "game");
		rbx_getfield(luaState, -1, "Players");
		rbx_getfield(luaState, -1, "LocalPlayer");
		rbx_getfield(luaState, -1, "Name");
		std::string LocalPlayerR = rbx_tostring(luaState, -1, 0);
		std::vector<std::string>::iterator iteration = find(Players.begin(), Players.end(), LocalPlayerR);
		Players.erase(iteration);
	}
	else if (input == "random") {
		rbx_getglobal(luaState, "game");
		rbx_getfield(luaState, -1, "Players");
		rbx_getfield(luaState, -1, "GetChildren");
		rbx_pushvalue(luaState, -2);
		rbx_pcall(luaState, 1, 1, 0);
		rbx_pushnil(luaState);
		while (rbx_next(luaState, -2) != 0) {
			std::string Player;
			rbx_getfield(luaState, -1, "Name");
			Player = rbx_tostring(luaState, -1, 0);
			rbx_pop(luaState, 2);
			Players.push_back(Player);
		}
		srand(time(0));
		int pick = rand() % Players.size();
		std::string meme = Players[pick];
		Players.clear();
		Players.push_back(meme);
	}
	else {
		vector<string> Iteration;
		rbx_getglobal(luaState, "game");
		rbx_getfield(luaState, -1, "Players");
		rbx_getfield(luaState, -1, "GetChildren");
		rbx_pushvalue(luaState, -2);
		rbx_pcall(luaState, 1, 1, 0);
		rbx_pushnil(luaState);
		while (rbx_next(luaState, -2) != 0) {
			std::string Player;
			rbx_getfield(luaState, -1, "Name");
			Player = rbx_tostring(luaState, -1, 0);
			rbx_pop(luaState, 2);
			Iteration.push_back(Player);
		}
		for (DWORD i = 0; i < Iteration.size(); ++i) {
			string PlayerName = Iteration[i];
			std::transform(PlayerName.begin(), PlayerName.end(), PlayerName.begin(), tolower);
			std::string ShortName = PlayerName.substr(0, input.size());
			if (ShortName == input) {
				Players.push_back(Iteration[i]);
			}
		}
	}
	return Players;
}


std::vector<std::string> GetPlayerVectorFromPlaceHolder(std::string inp) {
	VMProtectBeginUltra("GetPlayerVectorFromPlaceHolder");
	std::vector<std::string> Players = {};
	try {
		if (inp == "all") {
			getService("Players");
			rbx_getfield(luaState, -1, "GetChildren");
			rbx_pushvalue(luaState, -2);
			rbx_pcall(luaState, 1, 1, 0);
			rbx_pushnil(luaState);
			while (rbx_next(luaState, -2) != 0) {
				rbx_getfield(luaState, -1, "Name");
				std::string CharName = rbx_tostring(luaState, -1, 0);
				Players.push_back(CharName);
			}
		}
		if (inp == "others") {
			getService("Players");
			rbx_getfield(luaState, -1, "GetChildren");
			rbx_pushvalue(luaState, -2);
			rbx_pcall(luaState, 1, 1, 0);
			rbx_pushnil(luaState);
			while (rbx_next(luaState, -2) != 0) {
				rbx_getfield(luaState, -1, "Name");
				std::string CharName = rbx_tostring(luaState, -1);
				if (CharName != LocalPlayerName())
					Players.push_back(CharName);
			}
		}
	}
	catch (std::exception e) {
		Sleep(1);
	}
	return Players;
	VMProtectEnd();
}

std::string replaceAll(std::string subject, const std::string& search,
	const std::string& replace) {
	size_t pos = 0;
	while ((pos = subject.find(search, pos)) != std::string::npos) {
		subject.replace(pos, search.length(), replace);
		pos += replace.length();
	}
	return subject;
}

bool findAll(std::string subject, const std::string& search) {
	bool found = false;
	size_t pos = 0;
	while ((pos = subject.find(search, pos)) != std::string::npos) {
		if (&subject[pos] == search)
			found = true;
	}
	return found;
}

std::string DownloadURL(const char* URL) {
	HINTERNET interwebs = InternetOpenA("Mozilla/5.0", INTERNET_OPEN_TYPE_DIRECT, NULL, NULL, NULL);
	HINTERNET urlFile;
	std::string rtn;
	if (interwebs) {
		urlFile = InternetOpenUrlA(interwebs, URL, NULL, NULL, NULL, NULL);
		if (urlFile) {
			char buffer[2000];
			DWORD bytesRead;
			do {
				InternetReadFile(urlFile, buffer, 2000, &bytesRead);
				rtn.append(buffer, bytesRead);
				memset(buffer, 0, 2000);
			} while (bytesRead);
			InternetCloseHandle(interwebs);
			InternetCloseHandle(urlFile);
			std::string p = replaceAll(rtn, "|n", "\r\n");
			return p;
		}
	}
	InternetCloseHandle(interwebs);
	std::string p = replaceAll(rtn, "|n", "\r\n");
	return p;
}

size_t writeCallback(char* buf, size_t size, size_t nmemb, void* up)
{
	for (int c = 0; c < size*nmemb; c++)
	{
		WebContent.push_back(buf[c]);
	}
	return size*nmemb;
}
int FindFirstChild_PartOf(int Instance, std::string Name) {
	DWORD StartOfChildren = *(DWORD*)(Instance + 0x2C);
	DWORD EndOfChildren = *(DWORD*)(StartOfChildren + 4);
	for (int i = *(int*)StartOfChildren; i != EndOfChildren; i += 8)
	{
		if (strstr(GetName(*(int*)i)->c_str(), Name.c_str()))
		{
			return *(int*)i;
		}
	}
	return 0;
}
