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

#pragma comment(lib, "urlmon.lib")
#pragma comment(lib, "wininet.lib")
#pragma comment(lib, "iphlpapi.lib")
#pragma comment(lib,"ws2_32.lib")
#pragma comment(lib, "wininet")
#pragma once

typedef DWORD Any;
typedef int ScriptType;

#define RawScriptTypeNormal 0
#define RawScriptTypeLocal 1
#define RawScriptTypeModule 2

namespace ScriptTypes {
	static ScriptType NormalScript = 0;
	static ScriptType LocalScript = 1;
	static ScriptType ModuleScript = 2;
}

#pragma pack(push, 1)
typedef struct {
	ScriptType Type;
	const char* Source;
	Any Name;
	int Id;
	std::function<void(Any)> Callback;
} Script;
#pragma pack(pop)