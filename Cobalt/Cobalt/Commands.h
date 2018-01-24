#define _CRT_SECURE_NO_WARNINGS
#define _WIN32_WINNT _WIN32_WINNT_WINXP
#define _WINSOCK_DEPRECATED_NO_WARNINGS
#define WIN32_LEAN_AND_MEAN 

#include <Windows.h>
#include <iostream>
#include <string>
#include <fstream>
#include <iterator>
#include <vector>
#include <fstream>
#include <sstream>
#include <time.h>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <WinINet.h>
#include <algorithm>
#include <random>
#include <ostream>
#include <chrono>
#include <typeinfo>
#include <fcntl.h>
#include <io.h>
#include <urlmon.h>
#include <stdio.h>
#include <TlHelp32.h>
#include <wininet.h>
#include <Shlwapi.h>
#include <tchar.h>
#include <typeinfo>
#include <WinInet.h>
#include <fstream>
#include <algorithm>
#include <Psapi.h>
#include <tlhelp32.h>
#include <math.h>
#include <cmath>
#include <Windows.h>
#include <iostream>
#include <string> 
#include <Windows.h>
#include <iostream>
#include <vector>
#include <sstream>
#include <fstream>
#include <istream>
#include <iterator>
#include <algorithm>
#include <string>
#include <Psapi.h>
#include <tlhelp32.h>
#include <Windows.h>
#include <assert.h>
#include <iostream>
#include <thread>
#include <chrono>
#include <conio.h>
#include <time.h>
#include <map>
#include "VMProtectSDK.h"
#include "Colours.h"

#pragma comment(lib, "urlmon.lib")
#pragma comment(lib, "wininet.lib")
#pragma comment(lib, "iphlpapi.lib")
#pragma comment(lib,"ws2_32.lib")
#pragma comment(lib, "wininet")
#pragma once

#include "stdafx.h"

#include "Rlua.h"
#include "Functions.h"
#include "Defs.h"

using namespace std;
using namespace LuaC;

void LeftArm(std::string ye, std::string inst) {
	getService("Players");
	rbx_getfield(luaState, -1, ye.c_str());
	rbx_getfield(luaState, -1, "Character");
	rbx_getfield(luaState, -1, "Left Arm");
	rbx_getglobal(luaState, "Instance");
	rbx_getfield(luaState, -1, "new");
	rbx_pushstring(luaState, inst.c_str());
	rbx_pushvalue(luaState, -4);
	rbx_pcall(luaState, 2, 0, 0);

}

void LeftLeg(std::string ye, std::string inst) {
	getService("Players");
	rbx_getfield(luaState, -1, ye.c_str());
	rbx_getfield(luaState, -1, "Character");
	rbx_getfield(luaState, -1, "Left Leg");
	rbx_getglobal(luaState, "Instance");
	rbx_getfield(luaState, -1, "new");
	rbx_pushstring(luaState, inst.c_str());
	rbx_pushvalue(luaState, -4);
	rbx_pcall(luaState, 2, 0, 0);

}


void RightArm(std::string ye, std::string inst) {
	getService("Players");
	rbx_getfield(luaState, -1, ye.c_str());
	rbx_getfield(luaState, -1, "Character");
	rbx_getfield(luaState, -1, "Right Arm");
	rbx_getglobal(luaState, "Instance");
	rbx_getfield(luaState, -1, "new");
	rbx_pushstring(luaState, inst.c_str());
	rbx_pushvalue(luaState, -4);
	rbx_pcall(luaState, 2, 0, 0);

}

void RightLeg(std::string ye, std::string inst) {
	getService("Players");
	rbx_getfield(luaState, -1, ye.c_str());
	rbx_getfield(luaState, -1, "Character");
	rbx_getfield(luaState, -1, "Right Leg");
	rbx_getglobal(luaState, "Instance");
	rbx_getfield(luaState, -1, "new");
	rbx_pushstring(luaState, inst.c_str());
	rbx_pushvalue(luaState, -4);
	rbx_pcall(luaState, 2, 0, 0);

}


void CreateHeadPart(std::string ye, std::string inst) {

	getService("Players");
	rbx_getfield(luaState, -1, ye.c_str());
	rbx_getfield(luaState, -1, "Character");
	rbx_getfield(luaState, -1, "Head");
	rbx_getglobal(luaState, "Instance");
	rbx_getfield(luaState, -1, "new");
	rbx_pushstring(luaState, inst.c_str());
	rbx_pushvalue(luaState, -4);
	rbx_pcall(luaState, 2, 0, 0);

}

void CreateCharacterInstance(std::string ye, std::string inst) {
	getService("Players");
	rbx_getfield(luaState, -1, ye.c_str());
	rbx_getfield(luaState, -1, "Character");
	rbx_getfield(luaState, -1, "Torso");
	rbx_getglobal(luaState, "Instance");
	rbx_getfield(luaState, -1, "new");
	rbx_pushstring(luaState, inst.c_str());
	rbx_pushvalue(luaState, -4);
	rbx_pcall(luaState, 2, 0, 0);

}

std::string racist_nigger(std::string Input) {
	rbx_getglobal(luaState, "print");
	rbx_pushstring(luaState, Input.c_str());
	rbx_pcall(luaState, 1, 0, 0);
	return "your a gay ass nigger -roblox";
}

void PrintIdntity() {
	rbx_getglobal(luaState, "print");
	rbx_pushstring(luaState, "Current identity is 7");
	rbx_pcall(luaState, 1, 0, 0);
}

void ExecuteCommand(std::string cmd) {
	VMProtectBeginMutation("Commands");
	std::vector<std::string> In = Split(cmd, ' ');
	if (In.size() != 0) {

		if (to_lower(In.at(0)) == "normalgravity")
		{
			rbx_getglobal(luaState, "game");
			rbx_getfield(luaState, -1, "Workspace");
			rbx_pushstring(luaState, "196.2");
			rbx_setfield(luaState, -2, "Gravity");
			cout << "";
		}

		if (to_lower(In.at(0)) == "keycard")
		{
			getService("Players");
			rbx_getfield(luaState, -1, "LocalPlayer");
			rbx_getfield(luaState, -1, "TeamValue");
			rbx_pushstring(luaState, "Police");
			rbx_setfield(luaState, -2, "Value");
			cout << "";

		}
		if (to_lower(In.at(0)) == "changeteam")
		{
			getService("Players");
			rbx_getfield(luaState, -1, In.at(1).c_str());
			rbx_getfield(luaState, -1, "TeamValue");
			rbx_pushstring(luaState, In.at(2).c_str());
			rbx_setfield(luaState, -2, "Value");
		}

		if (to_lower(In.at(0)) == "particle")
		{
			if (to_lower(In.at(1)) == "me")
			{
				rbx_getglobal(luaState, "game");
				rbx_getfield(luaState, -1, "GetService");
				rbx_pushvalue(luaState, -2);
				rbx_pushstring(luaState, "Players");
				rbx_pcall(luaState, 2, 1, 0);
				rbx_getfield(luaState, -1, "LocalPlayer");
				rbx_getfield(luaState, -1, "Character");
				rbx_getfield(luaState, -1, "Torso");
				rbx_getglobal(luaState, "Instance");
				rbx_getfield(luaState, -1, "new");
				rbx_pushstring(luaState, "ParticleEmitter");
				rbx_pushvalue(luaState, -4);
				rbx_pcall(luaState, 2, 1, 0);
				string id = "rbxassetid://" + In.at(2);
				rbx_pushstring(luaState, id.c_str());
				rbx_setfield(luaState, -2, "Texture");
				rbx_pushnumber(luaState, 100);
				rbx_setfield(luaState, -2, "VelocitySpread");
			}
			else
			{
				std::string player = "" + In.at(1);
				rbx_getglobal(luaState, "game");
				rbx_getfield(luaState, -1, "GetService");
				rbx_pushvalue(luaState, -2);
				rbx_pushstring(luaState, "Players");
				rbx_pcall(luaState, 2, 1, 0);
				rbx_getfield(luaState, -1, player.c_str());
				rbx_getfield(luaState, -1, "Character");
				rbx_getfield(luaState, -1, "Torso");
				rbx_getglobal(luaState, "Instance");
				rbx_getfield(luaState, -1, "new");
				rbx_pushstring(luaState, "ParticleEmitter");
				rbx_pushvalue(luaState, -4);
				rbx_pcall(luaState, 2, 1, 0);
				string id = "rbxassetid://" + In.at(2);
				rbx_pushstring(luaState, id.c_str());
				rbx_setfield(luaState, -2, "Texture");
				rbx_pushnumber(luaState, 100);
				rbx_setfield(luaState, -2, "VelocitySpread");
				cout << "";
			}
		}

		if (to_lower(In.at(0)) == "bobs") {
			if (to_lower(In.at(1)) == "me" || to_lower(In.at(1)) == "localplr") {
				rbx_getglobal(luaState, "game");
				rbx_getfield(luaState, -1, "Players");
				rbx_getfield(luaState, -1, "LocalPlayer");
				rbx_pushnumber(luaState, 260);
				rbx_pushnumber(luaState, 8);
				rbx_pushnumber(luaState, -2542);
				rbx_pcall(luaState, 3, 1, 0);
				rbx_setfield(luaState, -3, "CFrame");
			}
			else {
				rbx_getglobal(luaState, "game");
				rbx_getfield(luaState, -1, "Players");
				rbx_getfield(luaState, -1, In.at(1).c_str());
				rbx_getfield(luaState, -1, "Character");
				rbx_getfield(luaState, -1, "HumanoidRootPart");
				rbx_getglobal(luaState, "CFrame");
				rbx_getfield(luaState, -1, "new");
				rbx_pushnumber(luaState, 260);
				rbx_pushnumber(luaState, 8);
				rbx_pushnumber(luaState, -2542);
				rbx_pcall(luaState, 3, 1, 0);
				rbx_setfield(luaState, -3, "CFrame");
				cout << "";
			}
		}

		if (to_lower(In.at(0)) == "boxcars") {
			if (to_lower(In.at(1)) == "me" || to_lower(In.at(1)) == "localplr") {
				rbx_getglobal(luaState, "game");
				rbx_getfield(luaState, -1, "Players");
				rbx_getfield(luaState, -1, "LocalPlayer");
				rbx_getfield(luaState, -1, "Character");
				rbx_getfield(luaState, -1, "HumanoidRootPart");
				rbx_getglobal(luaState, "CFrame");
				rbx_getfield(luaState, -1, "new");
				rbx_pushnumber(luaState, 509);
				rbx_pushnumber(luaState, 3);
				rbx_pushnumber(luaState, -1463);
				rbx_pcall(luaState, 3, 1, 0);
				rbx_setfield(luaState, -3, "CFrame");
			}
			else {
				rbx_getglobal(luaState, "game");
				rbx_getfield(luaState, -1, "Players");
				rbx_getfield(luaState, -1, In.at(1).c_str());
				rbx_getfield(luaState, -1, "Character");
				rbx_pushnumber(luaState, 509);
				rbx_pushnumber(luaState, 3);
				rbx_pushnumber(luaState, -1463);
				rbx_pcall(luaState, 3, 1, 0);
				rbx_setfield(luaState, -3, "CFrame");
				cout << "";
			}
		}

		if (to_lower(In.at(0)) == "bridge") {
			if (to_lower(In.at(1)) == "me" || to_lower(In.at(1)) == "localplr") {
				rbx_getglobal(luaState, "game");
				rbx_getfield(luaState, -1, "Players");
				rbx_getfield(luaState, -1, "LocalPlayer");
				rbx_getfield(luaState, -1, "Character");
				rbx_getfield(luaState, -1, "HumanoidRootPart");
				rbx_getglobal(luaState, "CFrame");
				rbx_pushnumber(luaState, -977);
				rbx_pcall(luaState, 3, 1, 0);
				rbx_setfield(luaState, -3, "CFrame");
			}
			else {
				rbx_getglobal(luaState, "game");
				rbx_getfield(luaState, -1, "Players");
				rbx_getfield(luaState, -1, In.at(1).c_str());
				rbx_getfield(luaState, -1, "Character");
				rbx_getfield(luaState, -1, "HumanoidRootPart");
				rbx_getglobal(luaState, "CFrame");
				rbx_getfield(luaState, -1, "new");
				rbx_pushnumber(luaState, 113);
				rbx_pushnumber(luaState, -977);
				rbx_pcall(luaState, 3, 1, 0);
				rbx_setfield(luaState, -3, "CFrame");
				cout << "";
			}
		}

		if (to_lower(In.at(0)) == "endtimes") {
			if (to_lower(In.at(1)) == "me" || to_lower(In.at(1)) == "localplr") {
				rbx_getglobal(luaState, "game");
				rbx_getfield(luaState, -1, "Players");
				rbx_getfield(luaState, -1, "LocalPlayer");
				rbx_getfield(luaState, -1, "Character");
				rbx_getfield(luaState, -1, "HumanoidRootPart");
				rbx_getglobal(luaState, "CFrame");
				rbx_getfield(luaState, -1, "new");
				rbx_setfield(luaState, -3, "CFrame");
			}
			else {
				rbx_getglobal(luaState, "game");
				rbx_getfield(luaState, -1, "Players");
				rbx_getfield(luaState, -1, In.at(1).c_str());
				rbx_getfield(luaState, -1, "Character");
				rbx_getfield(luaState, -1, "HumanoidRootPart");
				rbx_getglobal(luaState, "CFrame");
				rbx_getfield(luaState, -1, "new");
				rbx_pcall(luaState, 3, 1, 0);
				rbx_setfield(luaState, -3, "CFrame");
				cout << "";
			}
		}

		if (to_lower(In.at(0)) == "furnish") {
			if (to_lower(In.at(1)) == "me" || to_lower(In.at(1)) == "localplr") {
				rbx_getglobal(luaState, "game");
				rbx_getfield(luaState, -1, "Players");
				rbx_getfield(luaState, -1, "LocalPlayer");
				rbx_getfield(luaState, -1, "Character");
				rbx_getfield(luaState, -1, "HumanoidRootPart");
				rbx_getglobal(luaState, "CFrame");
				rbx_getfield(luaState, -1, "new");
				rbx_pushnumber(luaState, -1720);
				rbx_pcall(luaState, 3, 1, 0);
				rbx_setfield(luaState, -3, "CFrame");
			}
			else {
				rbx_getglobal(luaState, "game");
				rbx_getfield(luaState, -1, "Players");
				rbx_getfield(luaState, -1, In.at(1).c_str());
				rbx_getfield(luaState, -1, "Character");
				rbx_getfield(luaState, -1, "HumanoidRootPart");
				rbx_getglobal(luaState, "CFrame");
				rbx_getfield(luaState, -1, "new");
				rbx_pushnumber(luaState, 491);
				rbx_pushnumber(luaState, 3);
				rbx_pushnumber(luaState, -1720);
				rbx_pcall(luaState, 3, 1, 0);
				rbx_setfield(luaState, -3, "CFrame");
				cout << "";
			}
		}

		if (to_lower(In.at(0)) == "art") {
			if (to_lower(In.at(1)) == "me" || to_lower(In.at(1)) == "localplr") {
				rbx_getglobal(luaState, "game");
				rbx_getfield(luaState, -1, "Players");
				rbx_getfield(luaState, -1, "LocalPlayer");
				rbx_getfield(luaState, -1, "Character");
				rbx_getfield(luaState, -1, "HumanoidRootPart");
				rbx_getglobal(luaState, "CFrame");
				rbx_getfield(luaState, -1, "new");
				rbx_pushnumber(luaState, 5207);
				rbx_pushnumber(luaState, -166);
				rbx_pushnumber(luaState, 719);
				rbx_pcall(luaState, 3, 1, 0);
				rbx_setfield(luaState, -3, "CFrame");
			}
			else {
				rbx_getglobal(luaState, "game");
				rbx_getfield(luaState, -1, "Players");
				rbx_getfield(luaState, -1, In.at(1).c_str());
				rbx_getfield(luaState, -1, "Character");
				rbx_getfield(luaState, -1, "HumanoidRootPart");
				rbx_getglobal(luaState, "CFrame");
				rbx_getfield(luaState, -1, "new");
				rbx_pushnumber(luaState, 5207);
				rbx_pushnumber(luaState, -166);
				rbx_pushnumber(luaState, 719);
				rbx_pcall(luaState, 3, 1, 0);
				rbx_setfield(luaState, -3, "CFrame");
				cout << "";
			}
		}

		if (to_lower(In.at(0)) == "cave") {
			if (to_lower(In.at(1)) == "me" || to_lower(In.at(1)) == "localplr") {
				rbx_getglobal(luaState, "game");
				rbx_getfield(luaState, -1, "Players");
				rbx_getfield(luaState, -1, "LocalPlayer");
				rbx_getfield(luaState, -1, "Character");
				rbx_getfield(luaState, -1, "HumanoidRootPart");
				rbx_getglobal(luaState, "CFrame");
				rbx_pushnumber(luaState, 420);
				rbx_pcall(luaState, 3, 1, 0);
				rbx_setfield(luaState, -3, "CFrame");
			}
			else {
				rbx_getglobal(luaState, "game");
				rbx_getfield(luaState, -1, "Players");
				rbx_getfield(luaState, -1, In.at(1).c_str());
				rbx_getfield(luaState, -1, "Character");
				rbx_getfield(luaState, -1, "HumanoidRootPart");
				rbx_getglobal(luaState, "CFrame");
				rbx_getfield(luaState, -1, "new");
				rbx_pushnumber(luaState, 3581);
				rbx_pushnumber(luaState, -179);
				rbx_pushnumber(luaState, 430);
				rbx_pcall(luaState, 3, 1, 0);
				rbx_setfield(luaState, -3, "CFrame");
				cout << "";
			}
		}

		if (to_lower(In.at(0)) == "dock") {
			if (to_lower(In.at(1)) == "me" || to_lower(In.at(1)) == "localplr") {
				rbx_getglobal(luaState, "game");
				rbx_getfield(luaState, -1, "Players");
				rbx_getfield(luaState, -1, "LocalPlayer");
				rbx_getfield(luaState, -1, "Character");
				rbx_getfield(luaState, -1, "HumanoidRootPart");
				rbx_getglobal(luaState, "CFrame");
				rbx_getfield(luaState, -1, "new");
				rbx_pushnumber(luaState, 1114);
				rbx_pushnumber(luaState, -1);
				rbx_pushnumber(luaState, -197);
				rbx_pcall(luaState, 3, 1, 0);
				rbx_setfield(luaState, -3, "CFrame");
			}
			else {
				rbx_getglobal(luaState, "game");
				rbx_getfield(luaState, -1, "Players");
				rbx_getfield(luaState, -1, In.at(1).c_str());
				rbx_getfield(luaState, -1, "Character");
				rbx_getfield(luaState, -1, "HumanoidRootPart");
				rbx_getglobal(luaState, "CFrame");
				rbx_getfield(luaState, -1, "new");
				rbx_pushnumber(luaState, 1114);
				rbx_pushnumber(luaState, -1);
				rbx_pushnumber(luaState, -197);
				rbx_pcall(luaState, 3, 1, 0);
				rbx_setfield(luaState, -3, "CFrame");
				cout << "";
			}
		}

		if (to_lower(In.at(0)) == "lava") {
			if (to_lower(In.at(1)) == "me" || to_lower(In.at(1)) == "localplr") {
				rbx_getglobal(luaState, "game");
				rbx_getfield(luaState, -1, "Players");
				rbx_getfield(luaState, -1, "LocalPlayer");
				rbx_getfield(luaState, -1, "Character");
				rbx_getfield(luaState, -1, "HumanoidRootPart");
				rbx_getglobal(luaState, "CFrame");
				rbx_getfield(luaState, -1, "new");
				rbx_pushnumber(luaState, -1529.79089);
				rbx_pushnumber(luaState, 622.999268);
				rbx_pushnumber(luaState, 1094.59607);
				rbx_pcall(luaState, 3, 1, 0);
				rbx_setfield(luaState, -3, "CFrame");
			}
			else {
				rbx_getglobal(luaState, "game");
				rbx_getfield(luaState, -1, "Players");
				rbx_getfield(luaState, -1, In.at(1).c_str());
				rbx_getfield(luaState, -1, "Character");
				rbx_getfield(luaState, -1, "HumanoidRootPart");
				rbx_getglobal(luaState, "CFrame");
				rbx_getfield(luaState, -1, "new");
				rbx_pushnumber(luaState, -1529.79089);
				rbx_pushnumber(luaState, 622.999268);
				rbx_pushnumber(luaState, 1094.59607);
				rbx_pcall(luaState, 3, 1, 0);
				rbx_setfield(luaState, -3, "CFrame");
				cout << "";
			}
		}

		if (to_lower(In.at(0)) == "palm") {
			if (to_lower(In.at(1)) == "me" || to_lower(In.at(1)) == "localplr") {
				rbx_getglobal(luaState, "game");
				rbx_getfield(luaState, -1, "Players");
				rbx_getfield(luaState, -1, "LocalPlayer");
				rbx_getfield(luaState, -1, "Character");
				rbx_getfield(luaState, -1, "HumanoidRootPart");
				rbx_getglobal(luaState, "CFrame");
				rbx_getfield(luaState, -1, "new");
				rbx_pushnumber(luaState, 2549);
				rbx_setfield(luaState, -3, "CFrame");
			}
			else {
				rbx_getglobal(luaState, "game");
				rbx_getfield(luaState, -1, "Players");
				rbx_getfield(luaState, -1, In.at(1).c_str());
				rbx_getfield(luaState, -1, "Character");
				rbx_getfield(luaState, -1, "HumanoidRootPart");
				rbx_getglobal(luaState, "CFrame");
				rbx_getfield(luaState, -1, "new");
				rbx_pushnumber(luaState, 2549);
				rbx_pushnumber(luaState, -5);
				rbx_pushnumber(luaState, -42);
				rbx_pcall(luaState, 3, 1, 0);
				rbx_setfield(luaState, -3, "CFrame");
				cout << "";
			}
		}

		if (to_lower(In.at(0)) == "spawn") {
			if (to_lower(In.at(1)) == "me" || to_lower(In.at(1)) == "localplr") {
				rbx_getglobal(luaState, "game");
				rbx_getfield(luaState, -1, "Players");
				rbx_getfield(luaState, -1, "LocalPlayer");
				rbx_getfield(luaState, -1, "Character");
				rbx_getfield(luaState, -1, "HumanoidRootPart");
				rbx_getglobal(luaState, "CFrame");
				rbx_getfield(luaState, -1, "new");
				rbx_pushnumber(luaState, 155);
				rbx_pushnumber(luaState, 3);
				rbx_pushnumber(luaState, 74);
				rbx_pcall(luaState, 3, 1, 0);
				rbx_setfield(luaState, -3, "CFrame");
				cout << "";

			}
			else {
				rbx_getglobal(luaState, "game");
				rbx_getfield(luaState, -1, "Players");
				rbx_getfield(luaState, -1, In.at(1).c_str());
				rbx_getfield(luaState, -1, "Character");
				rbx_getfield(luaState, -1, "HumanoidRootPart");
				rbx_getglobal(luaState, "CFrame");
				rbx_getfield(luaState, -1, "new");
				rbx_pushnumber(luaState, 155);
				rbx_pushnumber(luaState, 3);
				rbx_pushnumber(luaState, 74);
				rbx_pcall(luaState, 3, 1, 0);
				rbx_setfield(luaState, -3, "CFrame");
				cout << "";

			}
		}

		if (to_lower(In.at(0)) == "swamp") {
			if (to_lower(In.at(1)) == "me" || to_lower(In.at(1)) == "localplr") {
				rbx_getglobal(luaState, "game");
				rbx_getfield(luaState, -1, "Players");
				rbx_getfield(luaState, -1, "LocalPlayer");
				rbx_getfield(luaState, -1, "Character");
				rbx_getfield(luaState, -1, "HumanoidRootPart");
				rbx_getglobal(luaState, "CFrame");
				rbx_getfield(luaState, -1, "new");
				rbx_pushnumber(luaState, -1209);
				rbx_pushnumber(luaState, 132);
				rbx_pushnumber(luaState, -801);
				rbx_pcall(luaState, 3, 1, 0);
				rbx_setfield(luaState, -3, "CFrame");
			}
			else {
				rbx_getglobal(luaState, "game");
				rbx_getfield(luaState, -1, "Players");
				rbx_getfield(luaState, -1, In.at(1).c_str());
				rbx_getfield(luaState, -1, "Character");
				rbx_getfield(luaState, -1, "HumanoidRootPart");
				rbx_getglobal(luaState, "CFrame");
				rbx_getfield(luaState, -1, "new");
				rbx_pushnumber(luaState, -1209);
				rbx_pushnumber(luaState, 132);
				rbx_pushnumber(luaState, -801);
				rbx_pcall(luaState, 3, 1, 0);
				rbx_setfield(luaState, -3, "CFrame");
				cout << "";

			}
		}

		if (to_lower(In.at(0)) == "ldstore") {
			if (to_lower(In.at(1)) == "me" || to_lower(In.at(1)) == "localplr") {
				rbx_getglobal(luaState, "game");
				rbx_getfield(luaState, -1, "Players");
				rbx_getfield(luaState, -1, "LocalPlayer");
				rbx_getfield(luaState, -1, "Character");
				rbx_getfield(luaState, -1, "HumanoidRootPart");
				rbx_getglobal(luaState, "CFrame");
				rbx_getfield(luaState, -1, "new");
				rbx_pushnumber(luaState, 258);
				rbx_pushnumber(luaState, 3);
				rbx_pushnumber(luaState, -99);
				rbx_pcall(luaState, 3, 1, 0);
				rbx_setfield(luaState, -3, "CFrame");
			}
			else {
				rbx_getglobal(luaState, "game");
				rbx_getfield(luaState, -1, "Players");
				rbx_getfield(luaState, -1, In.at(1).c_str());
				rbx_getfield(luaState, -1, "Character");
				rbx_getfield(luaState, -1, "HumanoidRootPart");
				rbx_getglobal(luaState, "CFrame");
				rbx_getfield(luaState, -1, "new");
				rbx_pushnumber(luaState, 258);
				rbx_pushnumber(luaState, 3);
				rbx_pushnumber(luaState, -99);
				rbx_pcall(luaState, 3, 1, 0);
				rbx_setfield(luaState, -3, "CFrame");
				cout << "";

			}
		}

		if (to_lower(In.at(0)) == "volc") {
			if (to_lower(In.at(1)) == "me" || to_lower(In.at(1)) == "localplr") {
				rbx_getglobal(luaState, "game");
				rbx_getfield(luaState, -1, "Players");
				rbx_getfield(luaState, -1, "LocalPlayer");
				rbx_getfield(luaState, -1, "Character");
				rbx_getfield(luaState, -1, "HumanoidRootPart");
				rbx_getglobal(luaState, "CFrame");
				rbx_getfield(luaState, -1, "new");
				rbx_pushnumber(luaState, -1585);
				rbx_pushnumber(luaState, 622);
				rbx_pushnumber(luaState, 1140);
				rbx_pcall(luaState, 3, 1, 0);
				rbx_setfield(luaState, -3, "CFrame");
			}
			else {
				rbx_getglobal(luaState, "game");
				rbx_getfield(luaState, -1, "Players");
				rbx_getfield(luaState, -1, In.at(1).c_str());
				rbx_getfield(luaState, -1, "Character");
				rbx_getfield(luaState, -1, "HumanoidRootPart");
				rbx_getglobal(luaState, "CFrame");
				rbx_getfield(luaState, -1, "new");
				rbx_pushnumber(luaState, -1585);
				rbx_pushnumber(luaState, 622);
				rbx_pushnumber(luaState, 1140);
				rbx_pcall(luaState, 3, 1, 0);
				rbx_setfield(luaState, -3, "CFrame");
				cout << "";

			}
		}

		if (to_lower(In.at(0)) == "wood") {
			if (to_lower(In.at(1)) == "me" || to_lower(In.at(1)) == "localplr") {
				rbx_getglobal(luaState, "game");
				rbx_getfield(luaState, -1, "Players");
				rbx_getfield(luaState, -1, "LocalPlayer");
				rbx_getfield(luaState, -1, "Character");
				rbx_getfield(luaState, -1, "HumanoidRootPart");
				rbx_getglobal(luaState, "CFrame");
				rbx_getfield(luaState, -1, "new");
				rbx_pushnumber(luaState, 265);
				rbx_pushnumber(luaState, 57);
				rbx_pcall(luaState, 3, 1, 0);
				rbx_setfield(luaState, -3, "CFrame");
			}
			else {
				rbx_getglobal(luaState, "game");
				rbx_getfield(luaState, -1, "Players");
				rbx_getfield(luaState, -1, In.at(1).c_str());
				rbx_getfield(luaState, -1, "Character");
				rbx_getfield(luaState, -1, "HumanoidRootPart");
				rbx_getglobal(luaState, "CFrame");
				rbx_getfield(luaState, -1, "new");
				rbx_pushnumber(luaState, 265);
				rbx_pushnumber(luaState, 3);
				rbx_pushnumber(luaState, 57);
				rbx_pcall(luaState, 3, 1, 0);
				rbx_setfield(luaState, -3, "CFrame");
				cout << "";

			}
		}

		if (to_lower(In.at(0)) == "logic") {
			if (to_lower(In.at(1)) == "me" || to_lower(In.at(1)) == "localplr") {
				rbx_getglobal(luaState, "game");
				rbx_getfield(luaState, -1, "Players");
				rbx_getfield(luaState, -1, "LocalPlayer");
				rbx_getfield(luaState, -1, "Character");
				rbx_getfield(luaState, -1, "HumanoidRootPart");
				rbx_getglobal(luaState, "CFrame");
				rbx_getfield(luaState, -1, "new");
				rbx_pushnumber(luaState, 4604);
				rbx_pushnumber(luaState, 3);
				rbx_pushnumber(luaState, -727);
				rbx_pcall(luaState, 3, 1, 0);
				rbx_setfield(luaState, -3, "CFrame");
			}
			else {
				rbx_getglobal(luaState, "game");
				rbx_getfield(luaState, -1, "Players");
				rbx_getfield(luaState, -1, In.at(1).c_str());
				rbx_getfield(luaState, -1, "Character");
				rbx_getfield(luaState, -1, "HumanoidRootPart");
				rbx_getglobal(luaState, "CFrame");
				rbx_pushnumber(luaState, 4604);
				rbx_pushnumber(luaState, 3);
				rbx_pushnumber(luaState, -727);
				rbx_pcall(luaState, 3, 1, 0);
				rbx_setfield(luaState, -3, "CFrame");
				cout << "";

			}
		}

		if (to_lower(In.at(0)) == "shrine") {
			if (to_lower(In.at(1)) == "me" || to_lower(In.at(1)) == "localplr") {
				rbx_getglobal(luaState, "game");
				rbx_getfield(luaState, -1, "Players");
				rbx_getfield(luaState, -1, "LocalPlayer");
				rbx_getfield(luaState, -1, "Character");
				rbx_getfield(luaState, -1, "HumanoidRootPart");
				rbx_getglobal(luaState, "CFrame");
				rbx_getfield(luaState, -1, "new");
			}
			else {
				rbx_getglobal(luaState, "game");
				rbx_getfield(luaState, -1, "Players");
				rbx_getfield(luaState, -1, In.at(1).c_str());
				rbx_getfield(luaState, -1, "Character");
				rbx_getfield(luaState, -1, "HumanoidRootPart");
				rbx_getglobal(luaState, "CFrame");
				rbx_getfield(luaState, -1, "new");
				rbx_pushnumber(luaState, -1600);
				rbx_pushnumber(luaState, 195);
				rbx_pushnumber(luaState, 919);
				rbx_pcall(luaState, 3, 1, 0);
				rbx_setfield(luaState, -3, "CFrame");
				cout << "";

			}
		}

		if (to_lower(In.at(0)) == "naruto")
		{
			if (to_lower(In.at(1)) == "me")
			{
				rbx_getglobal(luaState, "game");
				rbx_getfield(luaState, -1, "GetService");
				rbx_pushvalue(luaState, -2);
				rbx_pushstring(luaState, "Players");
				rbx_pcall(luaState, 2, 1, 0);
				rbx_getfield(luaState, -1, "LocalPlayer");
				rbx_getfield(luaState, -1, "Character");
				rbx_getfield(luaState, -1, "Torso");
				rbx_getglobal(luaState, "Instance");
				rbx_getfield(luaState, -1, "new");
				rbx_pushstring(luaState, "ParticleEmitter");
				rbx_pushvalue(luaState, -4);
				rbx_pcall(luaState, 2, 1, 0);
				rbx_pushstring(luaState, "rbxassetid://61596010");
				rbx_setfield(luaState, -2, "Texture");
				rbx_pushnumber(luaState, 100);
				rbx_setfield(luaState, -2, "VelocitySpread");

			}
			else
			{
				rbx_getglobal(luaState, "game");
				rbx_getfield(luaState, -1, "GetService");
				rbx_pushvalue(luaState, -2);
				rbx_pushstring(luaState, "Players");
				rbx_pcall(luaState, 2, 1, 0);
				rbx_getfield(luaState, -1, In.at(1).c_str());
				rbx_getfield(luaState, -1, "Character");
				rbx_getfield(luaState, -1, "Torso");
				rbx_getglobal(luaState, "Instance");
				rbx_getfield(luaState, -1, "new");
				rbx_pushstring(luaState, "ParticleEmitter");
				rbx_pushvalue(luaState, -4);
				rbx_pcall(luaState, 2, 1, 0);
				rbx_pushstring(luaState, "rbxassetid://61596010");
				rbx_setfield(luaState, -2, "Texture");
				rbx_pushnumber(luaState, 100);
				rbx_setfield(luaState, -2, "VelocitySpread");
			}
		}//

		 //7915602
		if (to_lower(In.at(0)) == "den") {
			if (to_lower(In.at(1)) == "me" || to_lower(In.at(1)) == "localplr") {
				rbx_getglobal(luaState, "game");
				rbx_getfield(luaState, -1, "Players");
				rbx_getfield(luaState, -1, "LocalPlayer");
				rbx_getfield(luaState, -1, "Character");
				rbx_getfield(luaState, -1, "HumanoidRootPart");
				rbx_getglobal(luaState, "CFrame");
				rbx_getfield(luaState, -1, "new");
				rbx_pushnumber(luaState, 323);
				rbx_pushnumber(luaState, 41);
				rbx_pushnumber(luaState, 1930);
				rbx_pcall(luaState, 3, 1, 0);
				rbx_setfield(luaState, -3, "CFrame");
			}
			else {
				rbx_getglobal(luaState, "game");
				rbx_getfield(luaState, -1, "Players");
				rbx_getfield(luaState, -1, In.at(1).c_str());
				rbx_getfield(luaState, -1, "Character");
				rbx_getfield(luaState, -1, "HumanoidRootPart");
				rbx_getglobal(luaState, "CFrame");
				rbx_getfield(luaState, -1, "new");
				rbx_pushnumber(luaState, 323);
				rbx_pushnumber(luaState, 41);
				rbx_pushnumber(luaState, 1930);
				rbx_pcall(luaState, 3, 1, 0);
				rbx_setfield(luaState, -3, "CFrame");
				cout << "";

			}
		}

		if (to_lower(In.at(0)) == "checkfe")
		{
			rbx_getglobal(luaState, "workspace");
			rbx_getfield(luaState, -1, "FilteringEnabled");
			rbx_getglobal(luaState, "print");
			rbx_pushvalue(luaState, -2);
			rbx_pcall(luaState, 1, 0, 0);
			cout << "";

		}



		if (to_lower(In.at(0)) == "troll") {
			if (to_lower(In.at(1)) == "me" || to_lower(In.at(1)) == "localplr") {
				rbx_getglobal(luaState, "game");
				rbx_getfield(luaState, -1, "GetService");
				rbx_pushvalue(luaState, -2);
				rbx_pushstring(luaState, "Players");
				rbx_pcall(luaState, 2, 1, 0);
				rbx_getfield(luaState, -1, "LocalPlayer");
				rbx_getfield(luaState, -1, "Character");
				rbx_getfield(luaState, -1, "Torso");
				rbx_getglobal(luaState, "Instance");
				rbx_getfield(luaState, -1, "new");
				rbx_pushstring(luaState, "ParticleEmitter");
				rbx_pushvalue(luaState, -4);
				rbx_pcall(luaState, 2, 1, 0);
				rbx_pushstring(luaState, "rbxassetid://45120559");
				rbx_setfield(luaState, -2, "Texture");
				rbx_pushnumber(luaState, 100);
				rbx_setfield(luaState, -2, "VelocitySpread");
			}
			else {
				rbx_getglobal(luaState, "game");
				rbx_getfield(luaState, -1, "GetService");
				rbx_pushvalue(luaState, -2);
				rbx_pushstring(luaState, "Players");
				rbx_pcall(luaState, 2, 1, 0);
				rbx_getfield(luaState, -1, In.at(1).c_str());
				rbx_getfield(luaState, -1, "Character");
				rbx_getfield(luaState, -1, "Torso");
				rbx_getglobal(luaState, "Instance");
				rbx_getfield(luaState, -1, "new");
				rbx_pushstring(luaState, "ParticleEmitter");
				rbx_pushvalue(luaState, -4);
				rbx_pcall(luaState, 2, 1, 0);
				rbx_pushstring(luaState, "rbxassetid://45120559");
				rbx_setfield(luaState, -2, "Texture");
				rbx_pushnumber(luaState, 100);
				rbx_setfield(luaState, -2, "VelocitySpread");
				cout << "";

			}
		}

		if (to_lower(In.at(0)) == "tp") {
			rbx_getglobal(luaState, "game");
			rbx_getfield(luaState, -1, "Workspace");
			rbx_getfield(luaState, -1, In.at(1).c_str());
			rbx_getfield(luaState, -1, "HumanoidRootPart");
			rbx_getglobal(luaState, "game");
			rbx_setfield(luaState, -6, "CFrame");
		}

		if (to_lower(In.at(0)) == "doge") {
			if (to_lower(In.at(1)) == "me" || to_lower(In.at(1)) == "localplr") {
				rbx_getglobal(luaState, "game");
				rbx_getfield(luaState, -1, "GetService");
				rbx_pushvalue(luaState, -2);
				rbx_pushstring(luaState, "Players");
				rbx_pcall(luaState, 2, 1, 0);
				rbx_getfield(luaState, -1, "LocalPlayer");
				rbx_getfield(luaState, -1, "Character");
				rbx_getfield(luaState, -1, "Torso");
				rbx_getglobal(luaState, "Instance");
				rbx_getfield(luaState, -1, "new");
				rbx_pushstring(luaState, "ParticleEmitter");
				rbx_pushvalue(luaState, -4);
				rbx_pcall(luaState, 2, 1, 0);
				rbx_pushstring(luaState, "rbxassetid://130742396");
				rbx_setfield(luaState, -2, "Texture");
				rbx_pushnumber(luaState, 100);
				rbx_setfield(luaState, -2, "VelocitySpread");
			}
			else {
				rbx_getglobal(luaState, "game");
				rbx_getfield(luaState, -1, "GetService");
				rbx_pushvalue(luaState, -2);
				rbx_pushstring(luaState, "Players");
				rbx_pcall(luaState, 2, 1, 0);
				rbx_getfield(luaState, -1, In.at(1).c_str());
				rbx_getfield(luaState, -1, "Character");
				rbx_getfield(luaState, -1, "Torso");
				rbx_getglobal(luaState, "Instance");
				rbx_getfield(luaState, -1, "new");
				rbx_pushstring(luaState, "ParticleEmitter");
				rbx_pushvalue(luaState, -4);
				rbx_pcall(luaState, 2, 1, 0);
				rbx_pushstring(luaState, "rbxassetid://130742396");
				rbx_setfield(luaState, -2, "Texture");
				rbx_pushnumber(luaState, 100);
				rbx_setfield(luaState, -2, "VelocitySpread");
				cout << "";

			}
		}

		if (to_lower(In.at(0)) == "anonymous") {
			if (to_lower(In.at(1)) == "me" || to_lower(In.at(1)) == "localplr") {
				rbx_getglobal(luaState, "game");
				rbx_getfield(luaState, -1, "GetService");
				rbx_pushvalue(luaState, -2);
				rbx_pushstring(luaState, "Players");
				rbx_pcall(luaState, 2, 1, 0);
				rbx_getfield(luaState, -1, "LocalPlayer");
				rbx_getfield(luaState, -1, "Character");
				rbx_getfield(luaState, -1, "Torso");
				rbx_getglobal(luaState, "Instance");
				rbx_getfield(luaState, -1, "new");
				rbx_pushstring(luaState, "ParticleEmitter");
				rbx_pushvalue(luaState, -4);
				rbx_pcall(luaState, 2, 1, 0);
				rbx_pushstring(luaState, "rbxassetid://127476787");
				rbx_setfield(luaState, -2, "Texture");
				rbx_pushnumber(luaState, 100);
				rbx_setfield(luaState, -2, "VelocitySpread");
			}
			else {
				rbx_getglobal(luaState, "game");
				rbx_getfield(luaState, -1, "GetService");
				rbx_pushvalue(luaState, -2);
				rbx_pushstring(luaState, "Players");
				rbx_pcall(luaState, 2, 1, 0);
				rbx_getfield(luaState, -1, In.at(1).c_str());
				rbx_getfield(luaState, -1, "Character");
				rbx_getfield(luaState, -1, "Torso");
				rbx_getglobal(luaState, "Instance");
				rbx_getfield(luaState, -1, "new");
				rbx_pushstring(luaState, "ParticleEmitter");
				rbx_pushvalue(luaState, -4);
				rbx_pcall(luaState, 2, 1, 0);
				rbx_pushstring(luaState, "rbxassetid://127476787");
				rbx_setfield(luaState, -2, "Texture");
				rbx_pushnumber(luaState, 100);
				rbx_setfield(luaState, -2, "VelocitySpread");
				cout << "";

			}
		}

		if (to_lower(In.at(0)) == "apocgod") {
			if (to_lower(In.at(1)) == "me" || to_lower(In.at(1)) == "localplr") {
				rbx_getglobal(luaState, "game");
				rbx_getfield(luaState, -1, "Players");
				rbx_getfield(luaState, -1, "LocalPlayer");
				rbx_getfield(luaState, -1, "Character");
				rbx_getfield(luaState, -1, "Humanoid");
				rbx_pushstring(luaState, "x");
				rbx_setfield(luaState, -2, "Name");
				rbx_getglobal(luaState, "game");
				rbx_getfield(luaState, -1, "Players");
				rbx_getfield(luaState, -1, "LocalPlayer");
				rbx_getfield(luaState, -1, "Character");
				rbx_getfield(luaState, -1, "Destroy");
				rbx_pushvalue(luaState, -2);
				rbx_pcall(luaState, 1, 0, 0);
				rbx_getglobal(luaState, "game");
				rbx_getfield(luaState, -1, "Players");
				rbx_getfield(luaState, -1, "LocalPlayer");
				rbx_getfield(luaState, -1, "Character");
				rbx_getfield(luaState, -1, "Humanoid");
				rbx_getglobal(luaState, "workspace");
				rbx_getfield(luaState, -1, "CurrentCamera");
				rbx_pushvalue(luaState, -3);
				rbx_setfield(luaState, -2, "CameraSubject");
			}
			else {
				rbx_getglobal(luaState, "game");
				rbx_getfield(luaState, -1, "Players");
				rbx_getfield(luaState, -1, In.at(1).c_str());
				rbx_getfield(luaState, -1, "Character");
				rbx_getfield(luaState, -1, "Humanoid");
				rbx_pushstring(luaState, "x");
				rbx_setfield(luaState, -2, "Name");
				rbx_getglobal(luaState, "game");
				rbx_getfield(luaState, -1, "Players");
				rbx_getfield(luaState, -1, In.at(1).c_str());
				rbx_getfield(luaState, -1, "Character");
				rbx_getfield(luaState, -1, "x");
				rbx_getfield(luaState, -1, "Clone");
				rbx_pushvalue(luaState, -2);
				rbx_pcall(luaState, 1, 1, 0);
				rbx_pushvalue(luaState, -3);
				rbx_setfield(luaState, -2, "Parent");
				rbx_pushstring(luaState, "Humanoid");
				rbx_setfield(luaState, -2, "Name");
				rbx_getglobal(luaState, "game");
				rbx_getfield(luaState, -1, "Players");
				rbx_getfield(luaState, -1, In.at(1).c_str());
				rbx_getfield(luaState, -1, "Character");
				rbx_getfield(luaState, -1, "x");
				rbx_getfield(luaState, -1, "Destroy");
				rbx_setfield(luaState, -2, "CameraSubject");
				cout << "";

			}
		}

		if (to_lower(In.at(0)) == "cargod") {
			rbx_getglobal(luaState, "game");
			rbx_getfield(luaState, -1, "Workspace");
			rbx_getfield(luaState, -1, "Vehicle");
			rbx_getfield(luaState, -1, "Holder");
			rbx_getfield(luaState, -1, "Stats");
			rbx_getfield(luaState, -1, "Fuel");
			rbx_pushnumber(luaState, 543);
			rbx_setfield(luaState, -2, "Value");
			rbx_getglobal(luaState, "game");
			rbx_getfield(luaState, -1, "Workspace");
			rbx_getfield(luaState, -1, "Vehicle");
			rbx_getfield(luaState, -1, "VehicleWreck");
			rbx_getfield(luaState, -1, "Stats");
			rbx_getfield(luaState, -1, "Fuel");
			rbx_pushnumber(luaState, 543);
			rbx_setfield(luaState, -2, "Value");
			rbx_getglobal(luaState, "game");
			rbx_getfield(luaState, -1, "Workspace");
			rbx_getfield(luaState, -1, "Vehicle");
			rbx_pushnumber(luaState, 66645358);
			rbx_setfield(luaState, -2, "Value");
			cout << "";

		}

		if (to_lower(In.at(0)) == "thirst") {
			if (to_lower(In.at(1)) == "me" || to_lower(In.at(1)) == "localplr") {
				rbx_getglobal(luaState, "game");
				rbx_getfield(luaState, -1, "Players");
				rbx_getfield(luaState, -1, "LocalPlayer");
				rbx_getfield(luaState, -1, "playerstats");
			}
			else {
				rbx_getglobal(luaState, "game");
				rbx_getfield(luaState, -1, "playerstats");
				rbx_getfield(luaState, -1, "Thirst");
				rbx_pushnumber(luaState, 1000);
				rbx_setfield(luaState, -2, "Value");
				cout << "";

			}
		}

		if (to_lower(In.at(0)) == "hunger") {
			if (to_lower(In.at(1)) == "me" || to_lower(In.at(1)) == "localplr") {
				rbx_getglobal(luaState, "game");
				rbx_getfield(luaState, -1, "Players");
				rbx_getfield(luaState, -1, "LocalPlayer");
				rbx_getfield(luaState, -1, "playerstats");
				rbx_setfield(luaState, -2, "Value");
			}
			else {
				rbx_getglobal(luaState, "game");
				rbx_getfield(luaState, -1, "Players");
				rbx_getfield(luaState, -1, In.at(1).c_str());
				rbx_getfield(luaState, -1, "playerstats");
				rbx_getfield(luaState, -1, "Hunger");
				rbx_pushnumber(luaState, 1000);
				rbx_setfield(luaState, -2, "Value");
				cout << "";

			}
		}


		if (to_lower(In.at(0)) == "invis") {
			if (to_lower(In.at(1)) == "me" || to_lower(In.at(1)) == "localplr") {
				rbx_getglobal(luaState, "game");
				rbx_getfield(luaState, -1, "Players");
				rbx_getfield(luaState, -1, "LocalPlayer");
				rbx_getfield(luaState, -1, "Character");
				rbx_getfield(luaState, -1, "Left Arm");
				rbx_pushnumber(luaState, 1);
				rbx_setfield(luaState, -2, "Transparency");
				rbx_pcall(luaState, 1, 0, 0);
				rbx_settop(luaState, 0);
				rbx_getglobal(luaState, "game");
				rbx_getfield(luaState, -1, "Players");
				rbx_getfield(luaState, -1, "LocalPlayer");
				rbx_getfield(luaState, -1, "Character");
				rbx_getfield(luaState, -1, "Right Leg");
				rbx_pushnumber(luaState, 1);
				rbx_setfield(luaState, -2, "Transparency");
				rbx_pcall(luaState, 1, 0, 0);
				rbx_settop(luaState, 0);
				rbx_getglobal(luaState, "game");
				rbx_getfield(luaState, -1, "Players");
				rbx_getfield(luaState, -1, "LocalPlayer");
				rbx_getfield(luaState, -1, "Character");
				rbx_getfield(luaState, -1, "Left Leg");
				rbx_pushnumber(luaState, 1);
				rbx_setfield(luaState, -2, "Transparency");
				rbx_pcall(luaState, 1, 0, 0);
				rbx_settop(luaState, 0);
			}
			else {
				rbx_getglobal(luaState, "game");
				rbx_getfield(luaState, -1, "Players");
				rbx_getfield(luaState, -1, In.at(1).c_str());
				rbx_getfield(luaState, -1, "Character");
				rbx_getfield(luaState, -1, "Head");
				rbx_getglobal(luaState, "game");
				rbx_getfield(luaState, -1, "Players");
				rbx_getfield(luaState, -1, In.at(1).c_str());
				rbx_getfield(luaState, -1, "Character");
				rbx_getfield(luaState, -1, "Left Leg");
				rbx_pushnumber(luaState, 1);
				rbx_setfield(luaState, -2, "Transparency");
				rbx_pcall(luaState, 1, 0, 0);
				rbx_settop(luaState, 0);
				cout << "";

			}
		}

		if (to_lower(In.at(0)) == "freeze") {
			if (to_lower(In.at(1)) == "me" || to_lower(In.at(1)) == "localplr") {
				getService("Players");
				rbx_getfield(luaState, -1, "LocalPlayer");
				rbx_getfield(luaState, -1, "Character");
				rbx_getfield(luaState, -1, "Torso");
				rbx_pushstring(luaState, "true");
			}

			else {
				rbx_getglobal(luaState, "game");
				rbx_getfield(luaState, -1, "Players");
				rbx_getfield(luaState, -1, In.at(1).c_str());
				rbx_getfield(luaState, -1, "Character");
				rbx_setfield(luaState, -2, "Anchored");
				cout << "";

			}
		}

		if (to_lower(In.at(0)) == "trump") {
			if (to_lower(In.at(1)) == "me" || to_lower(In.at(1)) == "localplr") {
				rbx_getglobal(luaState, "game");
				rbx_getfield(luaState, -1, "GetService");
				rbx_pushvalue(luaState, -2);
				rbx_pushstring(luaState, "Players");
				rbx_pcall(luaState, 2, 1, 0);
				rbx_getfield(luaState, -1, "LocalPlayer");
				rbx_getfield(luaState, -1, "Character");
				rbx_getfield(luaState, -1, "Torso");
				rbx_getglobal(luaState, "Instance");
				rbx_getfield(luaState, -1, "new");
				rbx_pushstring(luaState, "ParticleEmitter");
				rbx_pushvalue(luaState, -4);
				rbx_pcall(luaState, 2, 1, 0);
				rbx_pushstring(luaState, "rbxassetid://526577438");
				rbx_setfield(luaState, -2, "Texture");
				rbx_pushnumber(luaState, 100);
				rbx_setfield(luaState, -2, "VelocitySpread");
			}
			else {
				rbx_getglobal(luaState, "game");
				rbx_getfield(luaState, -1, "GetService");
				rbx_pushvalue(luaState, -2);
				rbx_pushstring(luaState, "Players");
				rbx_pcall(luaState, 2, 1, 0);
				rbx_getfield(luaState, -1, In.at(1).c_str());
				rbx_getfield(luaState, -1, "Character");
				rbx_getfield(luaState, -1, "Torso");
				rbx_getglobal(luaState, "Instance");
				rbx_getfield(luaState, -1, "new");
				rbx_pushstring(luaState, "ParticleEmitter");
				rbx_pushvalue(luaState, -4);
				rbx_pcall(luaState, 2, 1, 0);
				rbx_pushstring(luaState, "rbxassetid://526577438");
				rbx_setfield(luaState, -2, "Texture");
				rbx_pushnumber(luaState, 100);
				rbx_setfield(luaState, -2, "VelocitySpread");
				cout << "";

			}
		}

		if (to_lower(In.at(0)) == "pepe") {
			if (to_lower(In.at(1)) == "me" || to_lower(In.at(1)) == "localplr") {
				rbx_getglobal(luaState, "game");
				rbx_getfield(luaState, -1, "GetService");
				rbx_pushvalue(luaState, -2);
				rbx_pushstring(luaState, "Players");
				rbx_pcall(luaState, 2, 1, 0);
				rbx_getfield(luaState, -1, "LocalPlayer");
				rbx_getfield(luaState, -1, "Character");
				rbx_getfield(luaState, -1, "Torso");
				rbx_getglobal(luaState, "Instance");
				rbx_getfield(luaState, -1, "new");
				rbx_pushstring(luaState, "ParticleEmitter");
				rbx_pushvalue(luaState, -4);
				rbx_pcall(luaState, 2, 1, 0);
				rbx_pushstring(luaState, "rbxassetid://783009532");
				rbx_setfield(luaState, -2, "Texture");
				rbx_pushnumber(luaState, 100);
				rbx_setfield(luaState, -2, "VelocitySpread");
			}
			else {
				rbx_getglobal(luaState, "game");
				rbx_getfield(luaState, -1, "GetService");
				rbx_pushvalue(luaState, -2);
				rbx_pushstring(luaState, "Players");
				rbx_pcall(luaState, 2, 1, 0);
				rbx_getfield(luaState, -1, In.at(1).c_str());
				rbx_getfield(luaState, -1, "Character");
				rbx_getfield(luaState, -1, "Torso");
				rbx_getglobal(luaState, "Instance");
				rbx_getfield(luaState, -1, "new");
				rbx_pushstring(luaState, "ParticleEmitter");
				rbx_pushvalue(luaState, -4);
				rbx_pcall(luaState, 2, 1, 0);
				rbx_pushstring(luaState, "rbxassetid://783009532");
				rbx_setfield(luaState, -2, "Texture");
				rbx_pushnumber(luaState, 100);
				rbx_setfield(luaState, -2, "VelocitySpread");
				cout << "";

			}
		}

		if (to_lower(In.at(0)) == "pika") {
			if (to_lower(In.at(1)) == "me" || to_lower(In.at(1)) == "localplr") {
				rbx_getglobal(luaState, "game");
				rbx_getfield(luaState, -1, "GetService");
				rbx_pushvalue(luaState, -2);
				rbx_pushstring(luaState, "Players");
				rbx_pcall(luaState, 2, 1, 0);
				rbx_getfield(luaState, -1, "LocalPlayer");
				rbx_getfield(luaState, -1, "Character");
				rbx_getfield(luaState, -1, "Torso");
				rbx_getglobal(luaState, "Instance");
				rbx_getfield(luaState, -1, "new");
				rbx_pushnumber(luaState, 100);
				rbx_setfield(luaState, -2, "VelocitySpread");
			}
			else {
				rbx_getglobal(luaState, "game");
				rbx_getfield(luaState, -1, "GetService");
				rbx_pushvalue(luaState, -2);
				rbx_pushstring(luaState, "Players");
				rbx_pcall(luaState, 2, 1, 0);
				rbx_getfield(luaState, -1, In.at(1).c_str());
				rbx_getfield(luaState, -1, "Character");
				rbx_getfield(luaState, -1, "Torso");
				rbx_getglobal(luaState, "Instance");
				rbx_setfield(luaState, -2, "VelocitySpread");
				cout << "";

			}
		}

		if (to_lower(In.at(0)) == "nolado") {
			rbx_getglobal(luaState, "game");
			rbx_getfield(luaState, -1, "Workspace");
			rbx_getfield(luaState, -1, "Doors");
			rbx_getfield(luaState, -1, "Destroy");
			rbx_pushvalue(luaState, -2);
			rbx_pcall(luaState, 1, 0, 0);
			rbx_getglobal(luaState, "game");
			rbx_getfield(luaState, -1, "Workspace");
			rbx_getfield(luaState, -1, "Banks");
			rbx_getfield(luaState, -1, "Bank");
			rbx_getfield(luaState, -1, "Lasers");
			rbx_getfield(luaState, -1, "Destroy");
			rbx_pushvalue(luaState, -2);
			rbx_pcall(luaState, 1, 0, 0);
			rbx_getglobal(luaState, "game");
			rbx_getfield(luaState, -1, "Workspace");
			rbx_getfield(luaState, -1, "Jewelrys");
			rbx_getfield(luaState, -1, "15b54661-0ec0-45-81c2-d087377aac7e");
			rbx_getfield(luaState, -1, "FloorLasers");
			rbx_getfield(luaState, -1, "Destroy");
			rbx_pushvalue(luaState, -2);
			rbx_pcall(luaState, 1, 0, 0);
			rbx_getglobal(luaState, "game");
			rbx_getfield(luaState, -1, "Workspace");
			rbx_getfield(luaState, -1, "Jewelrys");
			rbx_getfield(luaState, -1, "15b54661-0ec0-45ff-81c2-d087377aac7e");
			rbx_getfield(luaState, -1, "Lasers");
			rbx_getfield(luaState, -1, "Destroy");
			rbx_pushvalue(luaState, -2);
			rbx_pcall(luaState, 1, 0, 0);
			rbx_getglobal(luaState, "game");
			rbx_getfield(luaState, -1, "Workspace");
			rbx_getfield(luaState, -1, "Jewelrys");
			rbx_getfield(luaState, -1, "15b54661-0ec0-45ff-81c2-d087377aac7e");
			rbx_getfield(luaState, -1, "Cameras");
			rbx_getfield(luaState, -1, "Destroy");
			rbx_pushvalue(luaState, -2);
			rbx_pcall(luaState, 1, 0, 0);
			cout << "";

		}

		if (to_lower(In.at(0)) == "music") {
			rbx_getglobal(luaState, "Workspace");
			rbx_getglobal(luaState, "Instance");
			rbx_getfield(luaState, -1, "new");
			rbx_pushstring(luaState, "Sound");
			rbx_pushvalue(luaState, -4);
			rbx_pcall(luaState, 2, 0, 0);

			rbx_getglobal(luaState, "Workspace");
			rbx_getfield(luaState, -1, "Sound");
			rbx_pushstring(luaState, "LuaC_Music");
			rbx_setfield(luaState, -2, "Name");

			rbx_getglobal(luaState, "Workspace");
			rbx_getfield(luaState, -1, "LuaC_Music");
			rbx_pushnumber(luaState, 1);
			rbx_setfield(luaState, -2, "Volume");

			rbx_getglobal(luaState, "Workspace");
			rbx_getfield(luaState, -1, "LuaC_Music");
			rbx_pushstring(luaState, ("rbxassetid://" + In.at(1)).c_str());
			rbx_setfield(luaState, -2, "SoundId");

			rbx_getglobal(luaState, "Workspace");
			rbx_getfield(luaState, -1, "LuaC_Music");
			rbx_getfield(luaState, -1, "Play");
			rbx_pushvalue(luaState, -2);
			rbx_pcall(luaState, 1, 0, 0);
			cout << "";
		}

		if (to_lower(In.at(0)) == "tp")
		{
			if (to_lower(In.at(1)) == "me" || to_lower(In.at(1)) == "localplr") {
				getService("Players");
				string Player2 = In.at(2);
				getService("Players");
				rbx_getfield(luaState, -1, "LocalPlayer");
				rbx_getfield(luaState, -1, "Character");
				rbx_getfield(luaState, -1, "HumanoidRootPart");
				rbx_getglobal(luaState, "game");
				rbx_getfield(luaState, -1, "Workspace");
				rbx_getfield(luaState, -1, Player2.c_str());
				rbx_getfield(luaState, -1, "Torso");
				rbx_getfield(luaState, -1, "CFrame");
				rbx_setfield(luaState, -6, "CFrame");
				rbx_settop(luaState, 0);
			}
			else {
				getService("Players");
				string Player1 = In.at(1);
				string Player2 = In.at(2);
				rbx_getglobal(luaState, "game");
				rbx_getfield(luaState, -1, "Workspace");
				rbx_getfield(luaState, -1, Player1.c_str());
				rbx_getfield(luaState, -1, "HumanoidRootPart");
				rbx_getglobal(luaState, "game");
				rbx_getfield(luaState, -1, "Workspace");
				rbx_getfield(luaState, -1, Player2.c_str());
				rbx_getfield(luaState, -1, "Torso");
				rbx_getfield(luaState, -1, "CFrame");
				rbx_setfield(luaState, -6, "CFrame");
				rbx_settop(luaState, 0);
				cout << "";
			}
		}

		if (to_lower(In.at(0)) == "noclipjb") {
			rbx_getglobal(luaState, "game");
			rbx_getfield(luaState, -1, "Players");
			rbx_getfield(luaState, -1, "LocalPlayer");
			rbx_getfield(luaState, -1, "Character");
			rbx_getfield(luaState, -1, "Humanoid");
			rbx_getfield(luaState, -1, "ChangeState");

			rbx_pushvalue(luaState, -2);
			rbx_pushnumber(luaState, 11);
			rbx_pcall(luaState, 2, 0, 0);
			cout << "";
		}

		if (to_lower(In.at(0)) == "skybox") {
			std::string Bk = "http://www.roblox.com/asset/?id=" + In.at(1);
			std::string Dn = "http://www.roblox.com/asset/?id=" + In.at(1);
			std::string Ft = "http://www.roblox.com/asset/?id=" + In.at(1);
			std::string Lf = "http://www.roblox.com/asset/?id=" + In.at(1);
			std::string Rt = "http://www.roblox.com/asset/?id=" + In.at(1);
			std::string Up = "http://www.roblox.com/asset/?id=" + In.at(1);
			rbx_getglobal(luaState, "game");
			rbx_getfield(luaState, -1, "Lighting");
			rbx_getglobal(luaState, "Instance");
			rbx_getfield(luaState, -1, "new");
			rbx_pushstring(luaState, "Sky");
			rbx_pushvalue(luaState, -4);
			rbx_pcall(luaState, 2, 1, 0);

			rbx_pushstring(luaState, Bk.c_str());
			rbx_setfield(luaState, -2, "SkyboxBk");

			rbx_pushstring(luaState, Dn.c_str());
			rbx_setfield(luaState, -2, "SkyboxDn");

			rbx_pushstring(luaState, Ft.c_str());
			rbx_setfield(luaState, -2, "SkyboxFt");

			rbx_pushstring(luaState, Lf.c_str());
			rbx_setfield(luaState, -2, "SkyboxLf");

			rbx_pushstring(luaState, Rt.c_str());
			rbx_setfield(luaState, -2, "SkyboxRt");

			rbx_pushstring(luaState, Up.c_str());
			rbx_setfield(luaState, -2, "SkyboxUp");

			rbx_pushstring(luaState, "Sky");
			rbx_setfield(luaState, -2, "Name");

			rbx_pushvalue(luaState, -2);
			rbx_pcall(luaState, 1, 0, 0);
			cout << "";
		}

		if (to_lower(In.at(0)) == "vault") {
			rbx_getglobal(luaState, "game");
			rbx_getfield(luaState, -1, "Players");
			rbx_getfield(luaState, -1, "LocalPlayer");
			rbx_getfield(luaState, -1, "Character");
			rbx_getfield(luaState, -1, "HumanoidRootPart");
			rbx_getglobal(luaState, "CFrame");
			rbx_getfield(luaState, -1, "new");
			rbx_pushnumber(luaState, 33);
			rbx_pushnumber(luaState, 1);
			rbx_pushnumber(luaState, 815);
			rbx_pcall(luaState, 3, 1, 0);
			rbx_setfield(luaState, -3, "CFrame");
			cout << "================= " << endl;
		}

		if (to_lower(In.at(0)) == "print") {
			string string;
			for (int i = 1; i < In.size(); i++) {
				if (i < (In.size() - 1)) {
					string.append(In.at(i) + ' ');
				}
				if (i == (In.size() - 1)) {
					string.append(In.at(i));
				}
			}
			racist_nigger(string.c_str());
			cout << "";
		}

		if (to_lower(In.at(0)) == "printidentity") {
			PrintIdntity();
		}

		if (to_lower(In.at(0)) == "helione") {
			rbx_getglobal(luaState, "game");
			rbx_getfield(luaState, -1, "Players");
			rbx_getfield(luaState, -1, "LocalPlayer");
			rbx_getfield(luaState, -1, "Character");
			rbx_getfield(luaState, -1, "HumanoidRootPart");
			rbx_getglobal(luaState, "CFrame");
			rbx_getfield(luaState, -1, "new");
			rbx_pushnumber(luaState, -1176.4231);
			rbx_pushnumber(luaState, 59.7911148);
			rbx_pushnumber(luaState, -1572.6908);
			rbx_pcall(luaState, 3, 1, 0);
			rbx_setfield(luaState, -3, "CFrame");
			cout << "================= " << endl;

		}

		if (to_lower(In.at(0)) == "helitwo") {
			rbx_getglobal(luaState, "game");
			rbx_getfield(luaState, -1, "Players");
			rbx_getfield(luaState, -1, "LocalPlayer");
			rbx_getfield(luaState, -1, "Character");
			rbx_getfield(luaState, -1, "HumanoidRootPart");
			rbx_getglobal(luaState, "CFrame");
			rbx_getfield(luaState, -1, "new");
			rbx_pushnumber(luaState, 751.44);
			rbx_pushnumber(luaState, 69.52);
			rbx_pushnumber(luaState, 1124.96);
			rbx_pcall(luaState, 3, 1, 0);
			rbx_setfield(luaState, -3, "CFrame");
			cout << "================= " << endl;
		}

		if (to_lower(In.at(0)) == "hidename") {
			if (to_lower(In.at(1)) == "me" || to_lower(In.at(1)) == "localplr") {
				rbx_getglobal(luaState, "game");
				rbx_getfield(luaState, -1, "Players");
				rbx_getfield(luaState, -1, "LocalPlayer");
				rbx_getfield(luaState, -1, "Character");
				rbx_getfield(luaState, -1, "Humanoid");
				rbx_pushvalue(luaState, 2);
				rbx_setfield(luaState, -2, "DisplayDistanceType");
			}
			else {
				rbx_getglobal(luaState, "game");
				rbx_getfield(luaState, -1, "Players");
				rbx_getfield(luaState, -1, In.at(1).c_str());
				rbx_getfield(luaState, -1, "Character");
				rbx_getfield(luaState, -1, "Humanoid");
				rbx_pushvalue(luaState, 2);
				rbx_setfield(luaState, -2, "DisplayDistanceType");
			}
			cout << "";
		}

		if (to_lower(In.at(0)) == "ff") {
			if (to_lower(In.at(1)) == "me" || to_lower(In.at(1)) == "localplr") {
				rbx_getglobal(luaState, "game");
				rbx_getfield(luaState, -1, "Players");
				rbx_getfield(luaState, -1, "LocalPlayer");
				rbx_getfield(luaState, -1, "Character");
				rbx_getglobal(luaState, "Instance");
				rbx_getfield(luaState, -1, "new");
				rbx_pushstring(luaState, "ForceField");
				rbx_pushvalue(luaState, -4);
				rbx_pcall(luaState, 2, 0, 0);
			}
			else {
				rbx_getglobal(luaState, "game");
				rbx_getfield(luaState, -1, "Players");
				rbx_getfield(luaState, -1, In.at(1).c_str());
				rbx_getfield(luaState, -1, "Character");
				rbx_getglobal(luaState, "Instance");
				rbx_getfield(luaState, -1, "new");
				rbx_pushstring(luaState, "ForceField");
				rbx_pushvalue(luaState, -4);
				rbx_pcall(luaState, 2, 0, 0);
			}
			cout << "";
		}


		if (to_lower(In.at(0)) == "heaven") {
			if (to_lower(In.at(1)) == "me" || to_lower(In.at(1)) == "localplr") {
				rbx_getglobal(luaState, "game");
				getService("Players");
				rbx_getfield(luaState, -1, "LocalPlayer");
				rbx_getfield(luaState, -1, "Character");
				rbx_getfield(luaState, -1, "Head");
				rbx_getglobal(luaState, "Instance");
				rbx_getfield(luaState, -1, "new");
				rbx_pushstring(luaState, "BodyVelocity");
				rbx_pushvalue(luaState, -4);
				rbx_pcall(luaState, 2, 1, 0);

				rbx_getglobal(luaState, "game");
				getService("Players");
				rbx_getfield(luaState, -1, "LocalPlayer");
				rbx_getfield(luaState, -1, "Character");
				rbx_getfield(luaState, -1, "Head");
				rbx_pushstring(luaState, "BodyVelocity");
				rbx_getfield(luaState, -1, "Destroy");
				rbx_pushvalue(luaState, -2);
				rbx_pcall(luaState, 1, 0, 0);
			}
			else {
				rbx_getglobal(luaState, "game");
				getService("Players");
				rbx_getfield(luaState, -1, In.at(1).c_str());
				rbx_getfield(luaState, -1, "Character");
				rbx_getfield(luaState, -1, "Head");
				rbx_getglobal(luaState, "Instance");
				rbx_getfield(luaState, -1, "new");
				rbx_pushstring(luaState, "BodyVelocity");
				rbx_pushvalue(luaState, -4);
				rbx_pcall(luaState, 2, 1, 0);

				rbx_getglobal(luaState, "game");
				getService("Players");
				rbx_getfield(luaState, -1, In.at(1).c_str());
				rbx_getfield(luaState, -1, "Character");
				rbx_getfield(luaState, -1, "Head");
				rbx_pushstring(luaState, "BodyVelocity");
				rbx_getfield(luaState, -1, "Destroy");
				rbx_pushvalue(luaState, -2);
				rbx_pcall(luaState, 1, 0, 0);
			}
			cout << "";
		}


		if (to_lower(In.at(0)) == "ghost") {
			if (to_lower(In.at(1)) == "me" || to_lower(In.at(1)) == "localplr") {
				rbx_getglobal(luaState, "game");
				rbx_getfield(luaState, -1, "Players");
				rbx_getfield(luaState, -1, "LocalPlayer");
				rbx_getfield(luaState, -1, "Character");
				rbx_getfield(luaState, -1, "Head");
				rbx_pushnumber(luaState, .5);
				rbx_setfield(luaState, -2, "Transparency");
				rbx_pcall(luaState, 1, 0, 0);
				rbx_settop(luaState, 0);
				rbx_getglobal(luaState, "game");
				rbx_getfield(luaState, -1, "Players");
				rbx_getfield(luaState, -1, "LocalPlayer");
				rbx_getfield(luaState, -1, "Character");
				rbx_getfield(luaState, -1, "Head");
				rbx_getfield(luaState, -1, "face");
				rbx_pushnumber(luaState, .5);
				rbx_setfield(luaState, -2, "Transparency");
				rbx_pcall(luaState, 1, 0, 0);
				rbx_settop(luaState, 0);
				rbx_getglobal(luaState, "game");
				rbx_getfield(luaState, -1, "Players");
				rbx_getfield(luaState, -1, "LocalPlayer");
				rbx_getfield(luaState, -1, "Character");
				rbx_getfield(luaState, -1, "Torso");
				rbx_pushnumber(luaState, .5);
				rbx_setfield(luaState, -2, "Transparency");
				rbx_pcall(luaState, 1, 0, 0);
				rbx_settop(luaState, 0);
				rbx_getglobal(luaState, "game");
				rbx_getfield(luaState, -1, "Players");
				rbx_getfield(luaState, -1, "LocalPlayer");
				rbx_getfield(luaState, -1, "Character");
				rbx_getfield(luaState, -1, "Right Arm");
				rbx_pushnumber(luaState, .5);
				rbx_setfield(luaState, -2, "Transparency");
				rbx_pcall(luaState, 1, 0, 0);
				rbx_settop(luaState, 0);
				rbx_getglobal(luaState, "game");
				rbx_getfield(luaState, -1, "Players");
				rbx_getfield(luaState, -1, "LocalPlayer");
				rbx_getfield(luaState, -1, "Character");
				rbx_getfield(luaState, -1, "Left Arm");
				rbx_pushnumber(luaState, .5);
				rbx_setfield(luaState, -2, "Transparency");
				rbx_pcall(luaState, 1, 0, 0);
				rbx_settop(luaState, 0);
				rbx_getglobal(luaState, "game");
				rbx_getfield(luaState, -1, "Players");
				rbx_getfield(luaState, -1, "LocalPlayer");
				rbx_getfield(luaState, -1, "Character");
				rbx_getfield(luaState, -1, "Right Leg");
				rbx_pushnumber(luaState, .5);
				rbx_setfield(luaState, -2, "Transparency");
				rbx_pcall(luaState, 1, 0, 0);
				rbx_settop(luaState, 0);
				rbx_getglobal(luaState, "game");
				rbx_getfield(luaState, -1, "Players");
				rbx_getfield(luaState, -1, "LocalPlayer");
				rbx_getfield(luaState, -1, "Character");
				rbx_getfield(luaState, -1, "Left Leg");
				rbx_setfield(luaState, -2, "Transparency");
				rbx_pcall(luaState, 1, 0, 0);
				rbx_settop(luaState, 0);
			}
			else {
				rbx_getglobal(luaState, "game");
				rbx_getfield(luaState, -1, "Players");
				rbx_getfield(luaState, -1, In.at(1).c_str());
				rbx_getfield(luaState, -1, "Character");
				rbx_getfield(luaState, -1, "Head");
				rbx_pushnumber(luaState, .5);
				rbx_setfield(luaState, -2, "Transparency");
				rbx_pcall(luaState, 1, 0, 0);
				rbx_settop(luaState, 0);
				rbx_getglobal(luaState, "game");
				rbx_getfield(luaState, -1, "Players");
				rbx_getfield(luaState, -1, In.at(1).c_str());
				rbx_getfield(luaState, -1, "Character");
				rbx_getfield(luaState, -1, "Head");
				rbx_getfield(luaState, -1, "face");
				rbx_pushnumber(luaState, .5);
				rbx_setfield(luaState, -2, "Transparency");
				rbx_pcall(luaState, 1, 0, 0);
				rbx_settop(luaState, 0);
				rbx_getglobal(luaState, "game");
				rbx_getfield(luaState, -1, "Players");
				rbx_getfield(luaState, -1, In.at(1).c_str());
				rbx_getfield(luaState, -1, "Character");
				rbx_getfield(luaState, -1, "Torso");
				rbx_pushnumber(luaState, .5);
				rbx_setfield(luaState, -2, "Transparency");
				rbx_pcall(luaState, 1, 0, 0);
				rbx_settop(luaState, 0);
				rbx_getglobal(luaState, "game");
				rbx_getfield(luaState, -1, "Players");
				rbx_getfield(luaState, -1, In.at(1).c_str());
				rbx_getfield(luaState, -1, "Character");
				rbx_getfield(luaState, -1, "Right Arm");
				rbx_pushnumber(luaState, .5);
				rbx_setfield(luaState, -2, "Transparency");
				rbx_pcall(luaState, 1, 0, 0);
				rbx_settop(luaState, 0);
				rbx_getglobal(luaState, "game");
				rbx_getfield(luaState, -1, "Players");
				rbx_getfield(luaState, -1, In.at(1).c_str());
				rbx_getfield(luaState, -1, "Character");
				rbx_getfield(luaState, -1, "Left Arm");
				rbx_pushnumber(luaState, .5);
				rbx_setfield(luaState, -2, "Transparency");
				rbx_pcall(luaState, 1, 0, 0);
				rbx_settop(luaState, 0);
				rbx_getglobal(luaState, "game");
				rbx_getfield(luaState, -1, "Players");
				rbx_getfield(luaState, -1, In.at(1).c_str());
				rbx_getfield(luaState, -1, "Character");
				rbx_getfield(luaState, -1, "Right Leg");
				rbx_pushnumber(luaState, .5);
				rbx_setfield(luaState, -2, "Transparency");
				rbx_pcall(luaState, 1, 0, 0);
				rbx_settop(luaState, 0);
				rbx_getglobal(luaState, "game");
				rbx_getfield(luaState, -1, "Players");
				rbx_getfield(luaState, -1, In.at(1).c_str());
				rbx_getfield(luaState, -1, "Character");
				rbx_getfield(luaState, -1, "Left Leg");
				rbx_setfield(luaState, -2, "Transparency");
				rbx_pcall(luaState, 1, 0, 0);
				rbx_settop(luaState, 0);
			}
			cout << "";
		}


		if (to_lower(In.at(0)) == "statchange") {
			if (to_lower(In.at(1)) == "me" || to_lower(In.at(1)) == "localplr") {
				rbx_getglobal(luaState, "game");
				rbx_getfield(luaState, -1, "Players");
				rbx_getfield(luaState, -1, "LocalPlayer");
				rbx_getfield(luaState, -1, "leaderstats");
				rbx_getfield(luaState, -1, In.at(2).c_str());
				rbx_pushnumber(luaState, atoi(In.at(3).c_str()));
				rbx_setfield(luaState, -2, "Value");
			}
			else {
				rbx_getglobal(luaState, "game");
				rbx_getfield(luaState, -1, "Players");
				rbx_getfield(luaState, -1, In.at(1).c_str());
				rbx_getfield(luaState, -1, "leaderstats");
				rbx_getfield(luaState, -1, In.at(2).c_str());
				rbx_pushnumber(luaState, atoi(In.at(3).c_str()));
				rbx_setfield(luaState, -2, "Value");
			}
			cout << "";
		}




		if (to_lower(In.at(0)) == "clicktpon") {
			ClickTPBool = true;
			ClickTP();
		}
		if (to_lower(In.at(0)) == "clicktpoff") {
			ClickTPBool = false;
			ClickTP();
		}


		if (to_lower(In.at(0)) == "duck") {

			rbx_getglobal(luaState, "game");
			rbx_getfield(luaState, -1, "Players");
			if (to_lower(In.at(1)) == "me") {
				rbx_getfield(luaState, -1, "LocalPlayer");
			}
			else {
				rbx_getfield(luaState, -1, In.at(1).c_str());
			}
			rbx_getfield(luaState, -1, "Character");
			rbx_getfield(luaState, -1, "Torso");
			rbx_getglobal(luaState, "Instance");
			rbx_getfield(luaState, -1, "new");
			rbx_pushstring(luaState, "SpecialMesh");
			rbx_pushvalue(luaState, -4);
			rbx_pcall(luaState, 2, 1, 0);
			std::string MeshId = "rbxassetid://521754610";
			std::string TextureId = "rbxassetid://521754612";

			rbx_pushstring(luaState, TextureId.c_str());
			rbx_setfield(luaState, -2, "TextureId");
			rbx_pushstring(luaState, MeshId.c_str());;
			rbx_setfield(luaState, -2, "MeshId");
			rbx_getglobal(luaState, "Vector3");
			rbx_getfield(luaState, -1, "new");
			rbx_pushnumber(luaState, 4);
			rbx_pushnumber(luaState, 4);
			rbx_pushnumber(luaState, 4);
			rbx_pcall(luaState, 3, 1, 0);
			rbx_setfield(luaState, -3, "Scale");

			rbx_getglobal(luaState, "game");
			rbx_getfield(luaState, -1, "Players");
			if (to_lower(In.at(1)) == "me") {
				rbx_getfield(luaState, -1, "LocalPlayer");
			}
			else {
				rbx_getfield(luaState, -1, In.at(1).c_str());
			}
			rbx_getfield(luaState, -1, "Character");
			rbx_getfield(luaState, -1, "Humanoid");
			rbx_pushstring(luaState, "0");
			rbx_setfield(luaState, -2, "HipHeight");

			rbx_getglobal(luaState, "game");
			rbx_getfield(luaState, -1, "Players");
			if (to_lower(In.at(1)) == "me") {
				rbx_getfield(luaState, -1, "LocalPlayer");
			}
			else {
				rbx_getfield(luaState, -1, In.at(1).c_str());
			}
			rbx_getfield(luaState, -1, "Character");
			rbx_getfield(luaState, -1, "Left Leg");
			rbx_pushnumber(luaState, 1);
			rbx_setfield(luaState, -2, "Transparency");
			rbx_getglobal(luaState, "game");
			rbx_getfield(luaState, -1, "Players");
			if (to_lower(In.at(1)) == "me") {
				rbx_getfield(luaState, -1, "LocalPlayer");
			}
			else {
				rbx_getfield(luaState, -1, In.at(1).c_str());
			}
			rbx_getfield(luaState, -1, "Character");
			rbx_getfield(luaState, -1, "Right Leg");
			rbx_pushnumber(luaState, 1);
			rbx_setfield(luaState, -2, "Transparency");
			rbx_getglobal(luaState, "game");
			rbx_getfield(luaState, -1, "Players");
			if (to_lower(In.at(1)) == "me") {
				rbx_getfield(luaState, -1, "LocalPlayer");
			}
			else {
				rbx_getfield(luaState, -1, In.at(1).c_str());
			}
			rbx_getfield(luaState, -1, "Character");
			rbx_getfield(luaState, -1, "Left Arm");
			rbx_pushnumber(luaState, 1);
			rbx_setfield(luaState, -2, "Transparency");
			rbx_getglobal(luaState, "game");
			rbx_getfield(luaState, -1, "Players");
			if (In.at(1) == "me") {
				rbx_getfield(luaState, -1, "LocalPlayer");
			}
			else {
				rbx_getfield(luaState, -1, In.at(1).c_str());
			}
			rbx_getfield(luaState, -1, "Character");
			rbx_getfield(luaState, -1, "Right Arm");
			rbx_pushnumber(luaState, 1);
			rbx_setfield(luaState, -2, "Transparency");
			rbx_getglobal(luaState, "game");
			rbx_getfield(luaState, -1, "Players");
			if (to_lower(In.at(1)) == "me") {
				rbx_getfield(luaState, -1, "LocalPlayer");
			}
			else {
				rbx_getfield(luaState, -1, In.at(1).c_str());
			}
			rbx_getfield(luaState, -1, "Character");
			rbx_getfield(luaState, -1, "Head");
			rbx_pushnumber(luaState, 1);
			rbx_setfield(luaState, -2, "Transparency");
			rbx_getglobal(luaState, "game");
			rbx_getfield(luaState, -1, "Players");
			if (to_lower(In.at(1)) == "me") {
				rbx_getfield(luaState, -1, "LocalPlayer");
			}
			else {
				rbx_getfield(luaState, -1, In.at(1).c_str());
			}
			rbx_getfield(luaState, -1, "Character");
			rbx_getfield(luaState, -1, "Humanoid");
			rbx_pushnumber(luaState, 20);
			rbx_setfield(luaState, -2, "WalkSpeed");
			std::string music = "";
			rbx_getglobal(luaState, "workspace");
			rbx_getglobal(luaState, "Instance");
			rbx_getfield(luaState, -1, "new");
			rbx_pushstring(luaState, "Sound");
			rbx_pushvalue(luaState, -4);
			rbx_pcall(luaState, 2, 1, 0);

			rbx_pushstring(luaState, ("rbxassetid://" + music).c_str());
			rbx_setfield(luaState, -2, "SoundId");
			cout << "";
		}


		if (to_lower(In.at(0)) == "mlg") {

			rbx_getglobal(luaState, "game");
			rbx_getfield(luaState, -1, "Players");
			if (to_lower(In.at(1)) == "me") {
				rbx_getfield(luaState, -1, "LocalPlayer");
			}
			else {
				rbx_getfield(luaState, -1, In.at(1).c_str());
			}
			rbx_getfield(luaState, -1, "Character");
			rbx_getfield(luaState, -1, "Torso");
			rbx_getglobal(luaState, "Instance");
			rbx_getfield(luaState, -1, "new");
			rbx_pushstring(luaState, "SpecialMesh");
			rbx_pushvalue(luaState, -4);
			rbx_pcall(luaState, 2, 1, 0);
			std::string MeshId = "rbxassetid://430452142";
			std::string TextureId = "rbxassetid://430452215";

			rbx_pushstring(luaState, TextureId.c_str());
			rbx_setfield(luaState, -2, "TextureId");
			rbx_pushstring(luaState, MeshId.c_str());;
			rbx_setfield(luaState, -2, "MeshId");
			rbx_getglobal(luaState, "Vector3");
			rbx_getfield(luaState, -1, "new");
			rbx_pushnumber(luaState, 4);
			rbx_pushnumber(luaState, 4);
			rbx_pushnumber(luaState, 4);
			rbx_pcall(luaState, 3, 1, 0);
			rbx_setfield(luaState, -3, "Scale");

			rbx_getglobal(luaState, "game");
			rbx_getfield(luaState, -1, "Players");
			if (to_lower(In.at(1)) == "me") {
				rbx_getfield(luaState, -1, "LocalPlayer");
			}
			else {
				rbx_getfield(luaState, -1, In.at(1).c_str());
			}
			rbx_getfield(luaState, -1, "Character");
			rbx_getfield(luaState, -1, "Humanoid");
			rbx_pushstring(luaState, "17");
			rbx_setfield(luaState, -2, "HipHeight");

			rbx_getglobal(luaState, "game");
			rbx_getfield(luaState, -1, "Players");
			if (to_lower(In.at(1)) == "me") {
				rbx_getfield(luaState, -1, "LocalPlayer");
			}
			else {
				rbx_getfield(luaState, -1, In.at(1).c_str());
			}
			rbx_getfield(luaState, -1, "Character");
			rbx_getfield(luaState, -1, "Left Leg");
			rbx_pushnumber(luaState, 1);
			rbx_setfield(luaState, -2, "Transparency");
			rbx_getglobal(luaState, "game");
			rbx_getfield(luaState, -1, "Players");
			if (to_lower(In.at(1)) == "me") {
				rbx_getfield(luaState, -1, "LocalPlayer");
			}
			else {
				rbx_getfield(luaState, -1, In.at(1).c_str());
			}
			rbx_getfield(luaState, -1, "Character");
			rbx_getfield(luaState, -1, "Right Leg");
			rbx_pushnumber(luaState, 1);
			rbx_setfield(luaState, -2, "Transparency");
			rbx_getglobal(luaState, "game");
			rbx_getfield(luaState, -1, "Players");
			if (to_lower(In.at(1)) == "me") {
				rbx_getfield(luaState, -1, "LocalPlayer");
			}
			else {
				rbx_getfield(luaState, -1, In.at(1).c_str());
			}
			rbx_getfield(luaState, -1, "Character");
			rbx_getfield(luaState, -1, "Left Arm");
			rbx_pushnumber(luaState, 1);
			rbx_setfield(luaState, -2, "Transparency");
			rbx_getglobal(luaState, "game");
			rbx_getfield(luaState, -1, "Players");
			if (In.at(1) == "me") {
				rbx_getfield(luaState, -1, "LocalPlayer");
			}
			else {
				rbx_getfield(luaState, -1, In.at(1).c_str());
			}
			rbx_getfield(luaState, -1, "Character");
			rbx_getfield(luaState, -1, "Right Arm");
			rbx_pushnumber(luaState, 1);
			rbx_setfield(luaState, -2, "Transparency");
			rbx_getglobal(luaState, "game");
			rbx_getfield(luaState, -1, "Players");
			if (to_lower(In.at(1)) == "me") {
				rbx_getfield(luaState, -1, "LocalPlayer");
			}
			else {
				rbx_getfield(luaState, -1, In.at(1).c_str());
			}
			rbx_getfield(luaState, -1, "Character");
			rbx_getfield(luaState, -1, "Head");
			rbx_pushnumber(luaState, 1);
			rbx_setfield(luaState, -2, "Transparency");
			rbx_getglobal(luaState, "game");
			rbx_getfield(luaState, -1, "Players");
			if (to_lower(In.at(1)) == "me") {
				rbx_getfield(luaState, -1, "LocalPlayer");
			}
			else {
				rbx_getfield(luaState, -1, In.at(1).c_str());
			}
			rbx_getfield(luaState, -1, "Character");
			rbx_getfield(luaState, -1, "Humanoid");
			rbx_pushnumber(luaState, 50);
			rbx_setfield(luaState, -2, "");
			std::string music = "";
			rbx_getglobal(luaState, "workspace");
			rbx_getglobal(luaState, "Instance");
			rbx_getfield(luaState, -1, "new");
			rbx_pushstring(luaState, "Sound");
			rbx_pushvalue(luaState, -4);
			rbx_pcall(luaState, 2, 1, 0);

			rbx_pushstring(luaState, ("rbxassetid://" + music).c_str());
			rbx_setfield(luaState, -2, "SoundId");
			cout << "";
		}

		if (to_lower(In.at(0)) == "goto") {
			std::string localplayer = "" + LocalPlayerName();

			rbx_getglobal(luaState, "game");
			rbx_getfield(luaState, -1, "Workspace");
			rbx_getfield(luaState, -1, localplayer.c_str());
			rbx_getfield(luaState, -1, "HumanoidRootPart");
			rbx_getglobal(luaState, "game");
			rbx_getfield(luaState, -1, "Workspace");
			rbx_getfield(luaState, -1, In.at(1).c_str());
			rbx_getfield(luaState, -1, "Torso");
			rbx_getfield(luaState, -1, "CFrame");
			rbx_setfield(luaState, -6, "CFrame");

		}

		if (to_lower(In.at(0)) == "fog") {
			rbx_getglobal(luaState, "Game");
			rbx_getfield(luaState, -1, "GetService");
			rbx_pushvalue(luaState, -2);
			rbx_pushstring(luaState, "Lighting");
			rbx_pcall(luaState, 2, 1, 0);
			rbx_pushnumber(luaState, stof(In.at(1).c_str()));
			rbx_setfield(luaState, -2, "FogEnd");
			cout << "";
		}


		if (to_lower(In.at(0)) == "rfog") {
			rbx_getglobal(luaState, "Game");
			rbx_getfield(luaState, -1, "GetService");
			rbx_pushvalue(luaState, -2);
			rbx_pushstring(luaState, "Lighting");
			rbx_pcall(luaState, 2, 1, 0);
			rbx_pushnumber(luaState, 1000000);
			rbx_setfield(luaState, -2, "FogEnd");
			cout << "";
		}

		if (In.at(0) == "explode") {



		}



		if (to_lower(In.at(0)) == "rhat") {
			if (to_lower(In.at(1)) == "me" || to_lower(In.at(1)) == "localplr") {
				getService("Players");
				rbx_getfield(luaState, -1, "LocalPlayer");
				rbx_getfield(luaState, -1, "Character");
				rbx_getfield(luaState, -1, "Head");

				rbx_getfield(luaState, rbx_GLOBALSINDEX, "Vector3");
				rbx_getfield(luaState, -1, "new");
				rbx_pushnumber(luaState, 1);
				rbx_pushnumber(luaState, 1);
				rbx_pushnumber(luaState, 1);
				rbx_pushnumber(luaState, 1);
				rbx_pushnumber(luaState, 1);
				rbx_pushnumber(luaState, 1);
				rbx_pcall(luaState, 6, 1, 0);
				rbx_setfield(luaState, -3, "Size");
			}
			else {
				getService("Players");
				rbx_getfield(luaState, -1, In.at(1).c_str());
				rbx_getfield(luaState, -1, "Character");
				rbx_getfield(luaState, -1, "Head");

				rbx_getfield(luaState, rbx_GLOBALSINDEX, "Vector3");
				rbx_getfield(luaState, -1, "new");
				rbx_pushnumber(luaState, 1);
				rbx_pushnumber(luaState, 1);
				rbx_pushnumber(luaState, 1);
				rbx_pushnumber(luaState, 1);
				rbx_pushnumber(luaState, 1);
				rbx_pushnumber(luaState, 1);
				rbx_pcall(luaState, 6, 1, 0);
				rbx_setfield(luaState, -3, "Size");
			}
			cout << "";
		}


		if (to_lower(In.at(0)) == "ws") {
			if (to_lower(In.at(1)) == "me" || to_lower(In.at(1)) == "localplr") {
				getService("Players");
				rbx_getfield(luaState, -1, "LocalPlayer");
				rbx_getfield(luaState, -1, "Character");
				rbx_getfield(luaState, -1, "Humanoid");
				rbx_pushnumber(luaState, stof(In.at(2).c_str()));
				rbx_setfield(luaState, -2, "WalkSpeed");
			}
			else {
				getService("Players");
				rbx_getfield(luaState, -1, "FindFirstChild");
				rbx_pushvalue(luaState, -2);
				rbx_pushstring(luaState, In.at(1).c_str());
				rbx_pcall(luaState, 2, 1, 0);
				if (!rbx_isnil(luaState, -1)) {
					rbx_getfield(luaState, -1, "Character");
					rbx_getfield(luaState, -1, "Humanoid");
					rbx_pushnumber(luaState, stof(In.at(2).c_str()));
					rbx_setfield(luaState, -2, "WalkSpeed");
				}


			}
			cout << "";
		}


		if (to_lower(In.at(0)) == "sit") {
			if (to_lower(In.at(1)) == "me" || to_lower(In.at(1)) == "localplr") {
				getService("Players");
				rbx_getfield(luaState, -1, "LocalPlayer");
				rbx_getfield(luaState, -1, "Character");
				rbx_getfield(luaState, -1, "Humanoid");
				rbx_pushnumber(luaState, 1);
				rbx_setfield(luaState, -2, "Sit");
			}
			else {
				getService("Players");
				rbx_getfield(luaState, -1, "FindFirstChild");
				rbx_pushvalue(luaState, -2);
				rbx_pushstring(luaState, In.at(1).c_str());
				rbx_pcall(luaState, 2, 1, 0);
				if (!rbx_isnil(luaState, -1)) {
					rbx_getfield(luaState, -1, "Character");
					rbx_getfield(luaState, -1, "Humanoid");
					rbx_pushnumber(luaState, 1);
					rbx_setfield(luaState, -2, "Sit");
				}


			}
			cout << "";
		}


		if (to_lower(In.at(0)) == "hipheight") {
			if (to_lower(In.at(1)) == "me" || to_lower(In.at(1)) == "localplr") {
				getService("Players");
				rbx_getfield(luaState, -1, "LocalPlayer");
				rbx_getfield(luaState, -1, "Character");
				rbx_getfield(luaState, -1, "Humanoid");
				rbx_pushnumber(luaState, stof(In.at(2).c_str()));
				rbx_setfield(luaState, -2, "HipHeight");
			}
			else {
				getService("Players");
				rbx_getfield(luaState, -1, "FindFirstChild");
				rbx_pushvalue(luaState, -2);
				rbx_pushstring(luaState, In.at(1).c_str());
				rbx_pcall(luaState, 2, 1, 0);
				if (!rbx_isnil(luaState, -1)) {
					rbx_getfield(luaState, -1, "Character");
					rbx_getfield(luaState, -1, "Humanoid");
					rbx_pushnumber(luaState, stof(In.at(2).c_str()));
					rbx_setfield(luaState, -2, "HipHeight");
				}


			}
			cout << "";
		}


		if (to_lower(In.at(0)) == "jp") {
			if (to_lower(In.at(1)) == "me" || to_lower(In.at(1)) == "localplr") {
				getService("Players");
				rbx_getfield(luaState, -1, "LocalPlayer");
				rbx_getfield(luaState, -1, "Character");
				rbx_getfield(luaState, -1, "Humanoid");
				rbx_pushnumber(luaState, stof(In.at(2).c_str()));
				rbx_setfield(luaState, -2, "JumpPower");
			}
			else {
				getService("Players");
				rbx_getfield(luaState, -1, "FindFirstChild");
				rbx_pushvalue(luaState, -2);
				rbx_pushstring(luaState, In.at(1).c_str());
				rbx_pcall(luaState, 2, 1, 0);
				if (!rbx_isnil(luaState, -1)) {
					rbx_getfield(luaState, -1, "Character");
					rbx_getfield(luaState, -1, "Humanoid");
					rbx_pushnumber(luaState, stof(In.at(2).c_str()));
					rbx_setfield(luaState, -2, "JumpPower");
				}


			}
			cout << "";
		}


		if (to_lower(In.at(0)) == "kill") {
			if (to_lower(In.at(1)) == "me" || to_lower(In.at(1)) == "localplr") {
				getService("Players");
				rbx_getfield(luaState, -1, "LocalPlayer");
				rbx_getfield(luaState, -1, "Character");
				rbx_getfield(luaState, -1, "Torso");
				rbx_getfield(luaState, -1, "Destroy");
				rbx_pushvalue(luaState, -2);
				rbx_pcall(luaState, 1, 0, 0);
				

			}
			else {
				getService("Players");
				rbx_getfield(luaState, -1, In.at(1).c_str());
				rbx_getfield(luaState, -1, "Character");
				rbx_getfield(luaState, -1, "Torso");
				rbx_getfield(luaState, -1, "Destroy");
				rbx_pushvalue(luaState, -2);
				rbx_pcall(luaState, 1, 0, 0);
			}
			cout << "";
		}

		if (to_lower(In.at(0)) == "gravity") {
			rbx_getglobal(luaState, "game");
			rbx_getfield(luaState, -1, "Workspace");
			rbx_pushnumber(luaState, stof(In.at(1).c_str()));
			rbx_setfield(luaState, -2, "Gravity");
			cout << "";
		}


		if (to_lower(In.at(0)) == "btools") {
			if (to_lower(In.at(1)) == "me" || to_lower(In.at(1)) == "localplr") {
				for (int i = 2; i <= 4; i++) {
					getService("Players");
					rbx_getfield(luaState, -1, "LocalPlayer");
					rbx_getfield(luaState, -1, "Backpack");
					rbx_getfield(luaState, rbx_GLOBALSINDEX, "Instance");
					rbx_getfield(luaState, -1, "new");
					rbx_pushstring(luaState, "HopperBin");
					rbx_pushvalue(luaState, -4);
					rbx_pcall(luaState, 2, 1, 0);

					rbx_pushnumber(luaState, i);
					rbx_setfield(luaState, -2, "Name");
					rbx_pushnumber(luaState, i);
					rbx_setfield(luaState, -2, "BinType");
				}
				cout << "";
			}



			else {
				for (int i = 1; i <= 3; i++) {
					getService("Players");
					rbx_getfield(luaState, -1, "FindFirstChild");
					rbx_pushvalue(luaState, -2);
					rbx_pushstring(luaState, In.at(1).c_str());
					rbx_pcall(luaState, 2, 1, 0);
					if (!rbx_isnil(luaState, -1)) {
						rbx_getfield(luaState, -1, "Backpack");
						rbx_getfield(luaState, rbx_GLOBALSINDEX, "Instance");
						rbx_getfield(luaState, -1, "new");
						rbx_pushstring(luaState, "HopperBin");
						rbx_pushvalue(luaState, -4);
						rbx_pcall(luaState, 2, 1, 0);

						rbx_pushnumber(luaState, i);
						rbx_setfield(luaState, -2, "Name");
						rbx_pushnumber(luaState, i);
						rbx_setfield(luaState, -2, "BinType");
					}


				}
				cout << "";
			}
		}


		if (to_lower(In.at(0)) == "god") {
			if (to_lower(In.at(1)) == "me" || to_lower(In.at(1)) == "localplr") {
				getService("Players");
				rbx_getfield(luaState, -1, "LocalPlayer");
				rbx_getfield(luaState, -1, "Character");
				rbx_getfield(luaState, -1, "Humanoid");
				rbx_pushnumber(luaState, HUGE_VAL);
				rbx_setfield(luaState, -2, "MaxHealth");
			}
			else {
				getService("Players");
				rbx_getfield(luaState, -1, "FindFirstChild");
				rbx_pushvalue(luaState, -2);
				rbx_pushstring(luaState, In.at(1).c_str());
				rbx_pcall(luaState, 2, 1, 0);
				if (!rbx_isnil(luaState, -1)) {
					rbx_getfield(luaState, -1, "Character");
					rbx_getfield(luaState, -1, "Humanoid");
					rbx_pushnumber(luaState, HUGE_VAL);
					rbx_setfield(luaState, -2, "MaxHealth");
				}


			}
			cout << "";
		}
		if (to_lower(In.at(0)) == "bigfire" || to_lower(In.at(0)) == "bodyfire") {
			if (to_lower(In.at(1)) == "me" || to_lower(In.at(1)) == "localplr") {
				getService("Players");
				rbx_getfield(luaState, -1, "LocalPlayer");
				rbx_getfield(luaState, -1, "Character");
				rbx_getfield(luaState, -1, "Torso");
				rbx_getfield(luaState, rbx_GLOBALSINDEX, "Instance");
				rbx_getfield(luaState, -1, "new");
				rbx_pushstring(luaState, "Fire");
				rbx_pushvalue(luaState, -4);
				rbx_pcall(luaState, 2, 1, 0);
				if (!rbx_isnil(luaState, -1)) {
					rbx_pushstring(luaState, "29");
					rbx_setfield(luaState, -2, "Size");
				}
			}
			else {
				getService("Players");
				rbx_getfield(luaState, -1, "FindFirstChild");
				rbx_pushvalue(luaState, -2);
				rbx_pushstring(luaState, In.at(1).c_str());
				rbx_pcall(luaState, 2, 1, 0);
				if (!rbx_isnil(luaState, -1)) {
					rbx_getfield(luaState, -1, "Character");
					rbx_getfield(luaState, -1, "Torso");
					rbx_getfield(luaState, rbx_GLOBALSINDEX, "Instance");
					rbx_getfield(luaState, -1, "new");
					rbx_pushstring(luaState, "Fire");
					rbx_pushvalue(luaState, -4);
					rbx_pcall(luaState, 2, 1, 0);
					if (!rbx_isnil(luaState, -1)) {
						rbx_pushstring(luaState, "29");
						rbx_setfield(luaState, -2, "Size");
					}
				}


			}
			cout << "";
		}


		if (to_lower(In.at(0)) == "time") {
			\
				getService("Lighting");
			if (!rbx_isnil(luaState, -1)) {
				rbx_pushnumber(luaState, atoi(In.at(1).c_str()));
				rbx_setfield(luaState, -2, "TimeOfDay");
			}

			cout << "";
		}


		if (to_lower(In.at(0)) == "select" || to_lower(In.at(0)) == "outline") {
			if (to_lower(In.at(1)) == "me") {
				getService("Players");
				rbx_getfield(luaState, -1, "LocalPlayer");
				rbx_getfield(luaState, -1, "Character");
				rbx_getfield(luaState, rbx_GLOBALSINDEX, "Instance");
				rbx_getfield(luaState, -1, "new");
				rbx_pushstring(luaState, "SelectionBox");
				rbx_pushvalue(luaState, -4);
				rbx_pcall(luaState, 2, 1, 0);

				rbx_pushvalue(luaState, -3);
				rbx_setfield(luaState, -2, "Adornee");

				/*getService("Players");
				rbx_getfield(luaState, -1, "LocalPlayer");
				rbx_getfield(luaState, -1, "Character");
				rbx_getfield(luaState, -1, "SelectionBox");

				rbx_getfield(luaState, rbx_GLOBALSINDEX, "Color3");
				rbx_getfield(luaState, -1, "new");
				rbx_pushnumber(luaState, 225);
				rbx_pushnumber(luaState, 0);
				rbx_pushnumber(luaState, 0);
				rbx_pcall(luaState, 3, 1, 0);
				rbx_setfield(luaState, -7, "Color3");*/

			}
			else {
				getService("Players");
				rbx_getfield(luaState, -1, In.at(1).c_str());
				if (!rbx_isnil(luaState, -1)) {
					rbx_getfield(luaState, -1, "Character");
					rbx_getfield(luaState, rbx_GLOBALSINDEX, "Instance");
					rbx_getfield(luaState, -1, "new");
					rbx_pushstring(luaState, "SelectionBox");
					rbx_pushvalue(luaState, -4);
					rbx_pcall(luaState, 2, 1, 0);

					rbx_pushvalue(luaState, -3);
					rbx_setfield(luaState, -2, "Adornee");
				}
			}
			cout << "";
		}




		if (to_lower(In.at(0)) == "chat") {
			if (to_lower(In.at(1)) == "me") {
				if (to_lower(In.at(2)) == "green") {
					std::string string;
					for (int i = 3; i < In.size(); i++) {
						if (i < (In.size() - 1)) {
							string.append(In.at(i) + ' ');
						}
						if (i == (In.size() - 1)) {
							string.append(In.at(i));
						}
					}
					getService("Players");
					rbx_getfield(luaState, -1, "LocalPlayer");
					rbx_getfield(luaState, -1, "Character");
					rbx_getfield(luaState, -1, "Head");

					rbx_getfield(luaState, rbx_GLOBALSINDEX, "game");
					rbx_getfield(luaState, -1, "Chat");
					rbx_getfield(luaState, -1, "Chat");
					rbx_pushvalue(luaState, -2);
					rbx_pushvalue(luaState, -5);
					rbx_pushstring(luaState, string.c_str());
					rbx_pushstring(luaState, "Green");
					rbx_pcall(luaState, 4, 1, 0);

				}
				if (to_lower(In.at(2)) == "red") {
					std::string string;
					for (int i = 3; i < In.size(); i++) {
						if (i < (In.size() - 1)) {
							string.append(In.at(i) + ' ');
						}
						if (i == (In.size() - 1)) {
							string.append(In.at(i));
						}
					}
					getService("Players");
					rbx_getfield(luaState, -1, "LocalPlayer");
					rbx_getfield(luaState, -1, "Character");
					rbx_getfield(luaState, -1, "Head");

					rbx_getfield(luaState, rbx_GLOBALSINDEX, "game");
					rbx_getfield(luaState, -1, "Chat");
					rbx_getfield(luaState, -1, "Chat");
					rbx_pushvalue(luaState, -2);
					rbx_pushvalue(luaState, -5);
					rbx_pushstring(luaState, string.c_str());
					rbx_pushstring(luaState, "Red");
					rbx_pcall(luaState, 4, 1, 0);
				}
				if (to_lower(In.at(2)) == "blue") {
					std::string string;
					for (int i = 3; i < In.size(); i++) {
						if (i < (In.size() - 1)) {
							string.append(In.at(i) + ' ');
						}
						if (i == (In.size() - 1)) {
							string.append(In.at(i));
						}
					}
					getService("Players");
					rbx_getfield(luaState, -1, "LocalPlayer");
					rbx_getfield(luaState, -1, "Character");
					rbx_getfield(luaState, -1, "Head");

					rbx_getfield(luaState, rbx_GLOBALSINDEX, "game");
					rbx_getfield(luaState, -1, "Chat");
					rbx_getfield(luaState, -1, "Chat");
					rbx_pushvalue(luaState, -2);
					rbx_pushvalue(luaState, -5);
					rbx_pushstring(luaState, string.c_str());
					rbx_pushstring(luaState, "Blue");
					rbx_pcall(luaState, 4, 1, 0);
				}
			}
			else {
				if (to_lower(In.at(2)) == "green") {
					std::string string;
					for (int i = 3; i < In.size(); i++) {
						if (i < (In.size() - 1)) {
							string.append(In.at(i) + ' ');
						}
						if (i == (In.size() - 1)) {
							string.append(In.at(i));
						}
					}
					getService("Players");
					rbx_getfield(luaState, -1, In.at(1).c_str());
					rbx_getfield(luaState, -1, "Character");
					rbx_getfield(luaState, -1, "Head");

					rbx_getfield(luaState, rbx_GLOBALSINDEX, "game");
					rbx_getfield(luaState, -1, "Chat");
					rbx_getfield(luaState, -1, "Chat");
					rbx_pushvalue(luaState, -2);
					rbx_pushvalue(luaState, -5);
					rbx_pushstring(luaState, string.c_str());
					rbx_pushstring(luaState, "Green");
					rbx_pcall(luaState, 4, 1, 0);
				}
				if (to_lower(In.at(2)) == "red") {
					std::string string;
					for (int i = 3; i < In.size(); i++) {
						if (i < (In.size() - 1)) {
							string.append(In.at(i) + ' ');
						}
						if (i == (In.size() - 1)) {
							string.append(In.at(i));
						}
					}
					getService("Players");
					rbx_getfield(luaState, -1, In.at(1).c_str());
					rbx_getfield(luaState, -1, "Character");
					rbx_getfield(luaState, -1, "Head");

					rbx_getfield(luaState, rbx_GLOBALSINDEX, "game");
					rbx_getfield(luaState, -1, "Chat");
					rbx_getfield(luaState, -1, "Chat");
					rbx_pushvalue(luaState, -2);
					rbx_pushvalue(luaState, -5);
					rbx_pushstring(luaState, string.c_str());
					rbx_pushstring(luaState, "Red");
					rbx_pcall(luaState, 4, 1, 0);
				}
				if (to_lower(In.at(2)) == "blue") {
					std::string string;
					for (int i = 3; i < In.size(); i++) {
						if (i < (In.size() - 1)) {
							string.append(In.at(i) + ' ');
						}
						if (i == (In.size() - 1)) {
							string.append(In.at(i));
						}
					}
					getService("Players");
					rbx_getfield(luaState, -1, In.at(1).c_str());
					rbx_getfield(luaState, -1, "Character");
					rbx_getfield(luaState, -1, "Head");

					rbx_getfield(luaState, rbx_GLOBALSINDEX, "game");
					rbx_getfield(luaState, -1, "Chat");
					rbx_getfield(luaState, -1, "Chat");
					rbx_pushvalue(luaState, -2);
					rbx_pushvalue(luaState, -5);
					rbx_pushstring(luaState, string.c_str());
					rbx_pushstring(luaState, "Blue");
					rbx_pcall(luaState, 4, 1, 0);
				}
			}
			cout << "";
		}


		if (to_lower(In.at(0)) == "charapp" || to_lower(In.at(0)) == "char") {
			if (to_lower(In.at(1)) == "me" || to_lower(In.at(1)) == "localplr") {
				getService("Players");
				rbx_getfield(luaState, -1, "LocalPlayer");
				if (!rbx_isnil(luaState, -1)) {
					std::string InitialID = "http://www.roblox.com/Asset/CharacterFetch.ashx?userId=" + In.at(2);
					rbx_pushstring(luaState, InitialID.c_str());
					rbx_setfield(luaState, -2, "CharacterAppearance");
				}

			}
			else {
				getService("Players");
				rbx_getfield(luaState, -1, In.at(1).c_str());
				if (!rbx_isnil(luaState, -1)) {
					std::string InitialID = "http://www.roblox.com/Asset/CharacterFetch.ashx?userId=" + In.at(2);
					rbx_pushstring(luaState, InitialID.c_str());
					rbx_setfield(luaState, -2, "CharacterAppearance");
				}
			}
			cout << "";
		}


		if (to_lower(In.at(0)) == "noob") {
			if (to_lower(In.at(1)) == "me" || to_lower(In.at(1)) == "localplr") {
				getService("Players");
				rbx_getfield(luaState, -1, "LocalPlayer");
				if (!rbx_isnil(luaState, -1)) {
					std::string InitialID = "http://www.roblox.com/Asset/CharacterFetch.ashx?userId=5";
					rbx_pushstring(luaState, InitialID.c_str());
					rbx_setfield(luaState, -2, "CharacterAppearance");

				}
			}
			else {
				getService("Players");
				rbx_getfield(luaState, -1, In.at(1).c_str());
				if (!rbx_isnil(luaState, -1)) {
					std::string InitialID = "http://www.roblox.com/Asset/CharacterFetch.ashx?userId=5";
					rbx_pushstring(luaState, InitialID.c_str());
					rbx_setfield(luaState, -2, "CharacterAppearance");

				}
			}
			cout << "";
		}


		if (to_lower(In.at(0)) == "fire") {
			if (to_lower(In.at(1)) == "me" || to_lower(In.at(1)) == "localplr") {
				getService("Players");
				rbx_getfield(luaState, -1, "LocalPlayer");
				rbx_getfield(luaState, -1, "Character");
				rbx_getfield(luaState, -1, "Torso");
				rbx_getfield(luaState, rbx_GLOBALSINDEX, "Instance");
				rbx_getfield(luaState, -1, "new");
				rbx_pushstring(luaState, "Fire");
				rbx_pushvalue(luaState, -4);
				rbx_pcall(luaState, 2, 1, 0);
			}
			else {
				getService("Players");
				rbx_getfield(luaState, -1, In.at(1).c_str());
				if (!rbx_isnil(luaState, -1)) {
					rbx_getfield(luaState, -1, "Character");
					rbx_getfield(luaState, -1, "Torso");
					rbx_getfield(luaState, rbx_GLOBALSINDEX, "Instance");
					rbx_getfield(luaState, -1, "new");
					rbx_pushstring(luaState, "Fire");
					rbx_pushvalue(luaState, -4);
					rbx_pcall(luaState, 2, 1, 0);
				}
			}
			cout << "";
		}


		if (to_lower(In.at(0)) == "smoke") {
			if (to_lower(In.at(1)) == "me" || to_lower(In.at(1)) == "localplr") {
				getService("Players");
				rbx_getfield(luaState, -1, "LocalPlayer");
				rbx_getfield(luaState, -1, "Character");
				rbx_getfield(luaState, -1, "Torso");
				rbx_getfield(luaState, rbx_GLOBALSINDEX, "Instance");
				rbx_getfield(luaState, -1, "new");
				rbx_pushstring(luaState, "Smoke");
				rbx_pushvalue(luaState, -4);
				rbx_pcall(luaState, 2, 1, 0);
			}
			else {
				getService("Players");
				rbx_getfield(luaState, -1, In.at(1).c_str());
				if (!rbx_isnil(luaState, -1)) {
					rbx_getfield(luaState, -1, "Character");
					rbx_getfield(luaState, -1, "Torso");
					rbx_getfield(luaState, rbx_GLOBALSINDEX, "Instance");
					rbx_getfield(luaState, -1, "new");
					rbx_pushstring(luaState, "Smoke");
					rbx_pushvalue(luaState, -4);
					rbx_pcall(luaState, 2, 1, 0);
				}
			}
			cout << "";
		}


		if (to_lower(In.at(0)) == "sethealth" || to_lower(In.at(0)) == "shealth") {
			if (to_lower(In.at(1)) == "me" || to_lower(In.at(1)) == "localplr") {
				getService("Players");
				rbx_getfield(luaState, -1, "LocalPlayer");
				if (!rbx_isnil(luaState, -1)) {
					rbx_getfield(luaState, -1, "Character");
					rbx_pushnumber(luaState, atoi(In.at(2).c_str()));
					rbx_setfield(luaState, -2, "MaxHealth");
				}
			}
			else {
				getService("Players");
				rbx_getfield(luaState, -1, In.at(1).c_str());
				if (!rbx_isnil(luaState, -1)) {
					rbx_getfield(luaState, -1, "Character");
					rbx_pushnumber(luaState, atoi(In.at(2).c_str()));
					rbx_setfield(luaState, -2, "MaxHealth");
				}
			}
			cout << "";
		}


		if (to_lower(In.at(0)) == "addhealth") {
			if (to_lower(In.at(1)) == "me" || to_lower(In.at(1)) == "localplr") {
				getService("Players");
				rbx_getfield(luaState, -1, "LocalPlayer");
				rbx_getfield(luaState, -1, "Character");
				rbx_getfield(luaState, -1, "Humanoid");
				rbx_getfield(luaState, -1, "MaxHealth");
				const char* MaxHealthVal = rbx_tostring(luaState, -1);
				getService("Players");
				rbx_getfield(luaState, -1, "LocalPlayer");
				rbx_getfield(luaState, -1, "Character");
				rbx_getfield(luaState, -1, "Humanoid");
				rbx_pushstring(luaState, (const char*)MaxHealthVal + atoi(In.at(2).c_str()));
				rbx_setfield(luaState, -2, "MaxHealth");
			}
			else {
				getService("Players");
				rbx_getfield(luaState, -1, In.at(1).c_str());
				rbx_getfield(luaState, -1, "Character");
				rbx_getfield(luaState, -1, "Humanoid");
				rbx_getfield(luaState, -1, "MaxHealth");
				const char* MaxHealthVal = rbx_tostring(luaState, -1);
				getService("Players");
				rbx_getfield(luaState, -1, In.at(1).c_str());
				rbx_getfield(luaState, -1, "Character");
				rbx_getfield(luaState, -1, "Humanoid");
				rbx_pushstring(luaState, (const char*)MaxHealthVal + atoi(In.at(2).c_str()));
				rbx_setfield(luaState, -2, "MaxHealth");
			}
			cout << "";
		}


		if (to_lower(In.at(0)) == "sparkles" || to_lower(In.at(0)) == "sp") {
			if (to_lower(In.at(1)) == "me" || to_lower(In.at(1)) == "localplr") {
				getService("Players");
				rbx_getfield(luaState, -1, "LocalPlayer");
				rbx_getfield(luaState, -1, "Character");
				rbx_getfield(luaState, -1, "Torso");
				if (!rbx_isnil(luaState, -1)) {
					rbx_getfield(luaState, rbx_GLOBALSINDEX, "Instance");
					rbx_getfield(luaState, -1, "new");
					rbx_pushstring(luaState, "Sparkles");
					rbx_pushvalue(luaState, -4);
					rbx_pcall(luaState, 2, 1, 0);

					rbx_pushstring(luaState, "Sparkles");
					rbx_setfield(luaState, -2, "Name");
				}
				else {
					getService("Players");
					rbx_getfield(luaState, -1, "LocalPlayer");
					rbx_getfield(luaState, -1, "Character");
					rbx_getfield(luaState, -1, "UpperTorso");
					if (!rbx_isnil(luaState, -1)) {
						rbx_getfield(luaState, rbx_GLOBALSINDEX, "Instance");
						rbx_getfield(luaState, -1, "new");
						rbx_pushstring(luaState, "Sparkles");
						rbx_pushvalue(luaState, -4);
						rbx_pcall(luaState, 2, 1, 0);

						rbx_pushstring(luaState, "Sparkles");
						rbx_setfield(luaState, -2, "Name");
					}
				}
			}
			else {
				getService("Players");
				rbx_getfield(luaState, -1, In.at(1).c_str());
				if (!rbx_isnil(luaState, -1)) {
					rbx_getfield(luaState, -1, "Character");
					rbx_getfield(luaState, -1, "Torso");
					rbx_getfield(luaState, rbx_GLOBALSINDEX, "Instance");
					rbx_getfield(luaState, -1, "new");
					rbx_pushstring(luaState, "Sparkles");
					rbx_pushvalue(luaState, -4);
					rbx_pcall(luaState, 2, 1, 0);

					rbx_pushstring(luaState, "Sparkles");
					rbx_setfield(luaState, -2, "Name");
				}
			}
			cout << "";
		}


		/*
		JAILBREAK COMMANDS
		*/

		if (to_lower(In.at(0)) == "criminal") {
			rbx_getglobal(luaState, "game");
			rbx_getfield(luaState, -1, "Players");
			rbx_getfield(luaState, -1, "LocalPlayer");
			rbx_getfield(luaState, -1, "Character");
			rbx_getfield(luaState, -1, "HumanoidRootPart");
			rbx_getglobal(luaState, "CFrame");
			rbx_getfield(luaState, -1, "new");
			rbx_pushnumber(luaState, -222.339157);
			rbx_pushnumber(luaState, 17.9125443);
			rbx_pushnumber(luaState, 1575.82336);
			rbx_pcall(luaState, 3, 1, 0);
			rbx_setfield(luaState, -3, "CFrame");
			cout << "";
		}

		if (to_lower(In.at(0)) == "garage") {
			rbx_getglobal(luaState, "game");
			rbx_getfield(luaState, -1, "Players");
			rbx_getfield(luaState, -1, "LocalPlayer");
			rbx_getfield(luaState, -1, "Character");
			rbx_getfield(luaState, -1, "HumanoidRootPart");
			rbx_getglobal(luaState, "CFrame");
			rbx_getfield(luaState, -1, "new");
			rbx_pushnumber(luaState, -342.130798);
			rbx_pushnumber(luaState, 19.3135223);
			rbx_pushnumber(luaState, 1182.73669);
			rbx_pcall(luaState, 3, 1, 0);
			rbx_setfield(luaState, -3, "CFrame");
			cout << "";
		}

		if (to_lower(In.at(0)) == "bank") {
			rbx_getglobal(luaState, "game");
			getService("Players");
			rbx_getfield(luaState, -1, "LocalPlayer");
			rbx_getfield(luaState, -1, "Character");
			rbx_getfield(luaState, -1, "HumanoidRootPart");
			rbx_getglobal(luaState, "CFrame");
			rbx_getfield(luaState, -1, "new");
			rbx_pushnumber(luaState, 1.1110189);
			rbx_pushnumber(luaState, 17.9213142);
			rbx_pushnumber(luaState, 782.103455);
			rbx_pcall(luaState, 3, 1, 0);
			rbx_setfield(luaState, -3, "CFrame");
			cout << "";
		}


		if (to_lower(In.at(0)) == "prison") {
			rbx_getglobal(luaState, "game");
			rbx_getfield(luaState, -1, "Players");
			rbx_getfield(luaState, -1, "LocalPlayer");
			rbx_getfield(luaState, -1, "Character");
			rbx_getfield(luaState, -1, "HumanoidRootPart");
			rbx_getglobal(luaState, "CFrame");
			rbx_getfield(luaState, -1, "new");
			rbx_pushnumber(luaState, -1100.4469);
			rbx_pushnumber(luaState, 17.7500038);
			rbx_pushnumber(luaState, -1493.18286);
			rbx_pcall(luaState, 3, 1, 0);
			rbx_setfield(luaState, -3, "CFrame");
			cout << "";
		}


		if (to_lower(In.at(0)) == "nodoors") {
			rbx_getglobal(luaState, "game");
			getService("Workspace");
			rbx_getfield(luaState, -1, "Doors");
			rbx_getfield(luaState, -1, "Destroy");
			rbx_pushvalue(luaState, -2);
			rbx_pcall(luaState, 1, 0, 0);
			cout << "";
		}

		if (to_lower(In.at(0)) == "bankLasers") {
			rbx_getglobal(luaState, "game");
			getService("Workspace");
			rbx_getfield(luaState, -1, "Banks");
			rbx_getfield(luaState, -1, "15b54661-0ec0-45ff-81c2-d087377aac7e");
			rbx_getfield(luaState, -1, "Lasers");
			rbx_getfield(luaState, -1, "Destroy");
			rbx_pushvalue(luaState, -2);
			rbx_pcall(luaState, 1, 0, 0);
			cout << "";
		}

		if (to_lower(In.at(0)) == "nocameras") {
			rbx_getglobal(luaState, "game");
			rbx_getfield(luaState, -1, "Workspace");
			rbx_getfield(luaState, -1, "Jewelrys");
			rbx_getfield(luaState, -1, "244d5696-5b1d-4e6d-aedd-da7423e51935");
			rbx_getfield(luaState, -1, "Cameras");
			rbx_getfield(luaState, -1, "Destroy");
			rbx_pushvalue(luaState, -2);
			rbx_pcall(luaState, 1, 0, 0);
			cout << "";
		}

		if (to_lower(In.at(0)) == "jewelryLasers") {
			rbx_getglobal(luaState, "game");
			rbx_getfield(luaState, -1, "Workspace");
			rbx_getfield(luaState, -1, "Jewelrys");
			rbx_getfield(luaState, -1, "244d5696-5b1d-4e6d-aedd-da7423e51935");
			rbx_getfield(luaState, -1, "Lasers");
			rbx_getfield(luaState, -1, "Destroy");
			rbx_pushvalue(luaState, -2);
			rbx_pcall(luaState, 1, 0, 0);
			cout << "";
		}

		if (to_lower(In.at(0)) == "jewelryfLasers") {
			rbx_getglobal(luaState, "game");
			rbx_getfield(luaState, -1, "Workspace");
			rbx_getfield(luaState, -1, "Jewelrys");
			rbx_getfield(luaState, -1, "244d5696-5b1d-4e6d-aedd-da7423e51935");
			rbx_getfield(luaState, -1, "FloorLasers");
			rbx_getfield(luaState, -1, "Destroy");
			rbx_pushvalue(luaState, -2);
			rbx_pcall(luaState, 1, 0, 0);
			cout << "";
		}

		if (to_lower(In.at(0)) == "jewelry") {
			rbx_getglobal(luaState, "game");
			rbx_getfield(luaState, -1, "Players");
			rbx_getfield(luaState, -1, "LocalPlayer");
			rbx_getfield(luaState, -1, "Character");
			rbx_getfield(luaState, -1, "HumanoidRootPart");
			rbx_getglobal(luaState, "CFrame");
			rbx_getfield(luaState, -1, "new");
			rbx_pushnumber(luaState, 124);
			rbx_pushnumber(luaState, 17);
			rbx_pushnumber(luaState, 1317);
			rbx_pcall(luaState, 3, 1, 0);
			rbx_setfield(luaState, -3, "CFrame");
			cout << "";
		}


		if (to_lower(In.at(0)) == "clearws") {
			getService("Workspace");
			rbx_getfield(luaState, -1, "ClearAllChildren");
			rbx_pushvalue(luaState, -2);
			rbx_pcall(luaState, 1, 0, 0);
		}


		if (to_lower(In.at(0)) == "unanchorall") {
			getService("Workspace");
			rbx_getfield(luaState, -1, "GetChildren");
			rbx_pushvalue(luaState, -2);
			rbx_pcall(luaState, 1, 1, 0);
			rbx_pushnil(luaState);
			while (rbx_next(luaState, -2) != 0) {
				rbx_getfield(luaState, -1, "ClassName");
				if (rbx_tostring(luaState, -1) == "Part" || rbx_tostring(luaState, -1) == "SpawnLocation" || rbx_tostring(luaState, -1) == "Seat") {
					rbx_pushvalue(luaState, false);
					rbx_setfield(luaState, -2, "Anchored");
				}
				else if (rbx_tostring(luaState, -1) == "Model") {
					rbx_getfield(luaState, -1, "GetChildren");
					rbx_pushvalue(luaState, -2);
					rbx_pcall(luaState, 1, 1, 0);
					rbx_pushnil(luaState);
					while (rbx_next(luaState, -2) != 0) {
						rbx_getfield(luaState, -1, "ClassName");
						if (rbx_tostring(luaState, -1) == "Part" || rbx_tostring(luaState, -1) == "SpawnLocation" || rbx_tostring(luaState, -1) == "Seat") {
							rbx_pushvalue(luaState, false);
							rbx_setfield(luaState, -2, "Anchored");
						}
					}
				}
			}
		}

		if (to_lower(In.at(0)) == "ls") {
			std::string string;
			for (int i = 1; i < In.size(); i++) {
				if (i < (In.size() - 1)) {
					string.append(In.at(i) + ' ');
				}
				if (i == (In.size() - 1)) {
					string.append(In.at(i));
				}
			}
			Script lscript;
			lscript.Type = ScriptTypes::NormalScript;
			lscript.Name = (Any)"Script";
			lscript.Source = string.c_str();
			lscript.Callback = [=](Any nothing) {
				CreateScript(lscript);
			};
		}
		rbx_settop(luaState, 0);
		VMProtectEnd();
	}
	else
	{
		VMProtectEnd();
		return;
	}
}

std::vector<std::string> LuaCSplit(std::string s)
{
	std::vector<std::string> elems;
	std::stringstream ss(s);
	std::istream_iterator<std::string> begin(ss);
	std::istream_iterator<std::string> end;
	std::vector<std::string> vstrings(begin, end);
	return vstrings;
}

void luaC(std::string input) {
	try {
		std::vector<std::string> In = LuaCSplit(input);

		if (In.at(0) == "getfield") {
			rbx_getfield(luaState, stoi(In.at(1)), In.at(2).c_str());
		}

		else if (In.at(0) == "getglobal") {
			rbx_getglobal(luaState, In.at(1).c_str());
		}

		else if (In.at(0) == "setfield") {
			rbx_setfield(luaState, stoi(In.at(1)), In.at(2).c_str());
		}

		else if (In.at(0) == "pushvalue") {
			rbx_pushvalue(luaState, stoi(In.at(1)));
		}

		else if (In.at(0) == "pushstring") {
			rbx_pushstring(luaState, In.at(1).c_str());
		}

		else if (In.at(0) == "pushnumber") {
			rbx_pushnumber(luaState, stoi(In.at(1)));
		}

		else if (In.at(0) == "pcall") {
			rbx_pcall(luaState, stoi(In.at(1)), stoi(In.at(2)), stoi(In.at(3)));

		}

		else if (In.at(0) == "emptystack") {
			rbx_pushstring(luaState, In.at(1).c_str());
		}

		else if (In.at(0) == "settop") {
			rbx_settop(luaState, stoi(In.at(1)));
		}
		else {
			ExecuteCommand(input);
		}
	}
	catch (...) {

	}
}
void ExecuteLuaC(std::string what) {
	std::istringstream stuff(what);
	std::string asd;
	while (std::getline(stuff, asd)) {
		luaC(asd);
	}
}