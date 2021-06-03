#pragma once
#pragma warning(suppress : 4996)
#pragma comment(lib, "Ws2_32.lib")

#include <iostream>
#include <fstream>
#include <stdio.h>
#include <string.h>
#include <errno.h>
#include <stdlib.h>
#include <sys/types.h>
#include <winsock2.h>
#include <ws2tcpip.h>

#define  SERVER_PORT     5555
#define  SERVER_NAME    "127.0.0.1"
#define  BUFLEN          512

using namespace std;

class Client
{
public:
	Client();
	Client(const Client& c);
	~Client() = default;
	const Client& operator=(const Client &c);
	int write_to_server(int fd);
	int read_from_server(int fd);
};

