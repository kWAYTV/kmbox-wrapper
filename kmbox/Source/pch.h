#pragma once
#define _WINSOCK_DEPRECATED_NO_WARNINGS

#include <thread>
#include <WinSock2.h>
#include <WS2tcpip.h>
#include <iostream>
#include <string>
#include <filesystem>

#pragma comment(lib, "ws2_32.lib")

using namespace std;
namespace filesystem = std::filesystem;

#define LOG(str, ...) \
	{ \
        const auto filename = filesystem::path(__FILE__).filename().string(); \
        printf("[%s] " str "\n", filename.c_str(), __VA_ARGS__); \
    }

#define LOG_ERROR(str, ...) \
    { \
        const auto filename = filesystem::path(__FILE__).filename().string(); \
        printf("[%s:%d] " str "\n", filename.c_str(), __LINE__, __VA_ARGS__); \
    }

#include "Kmbox/Manager.h"