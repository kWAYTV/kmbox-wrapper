#include <pch.h>

int main()
{
	SetConsoleTitleA("Debug Console");

    std::string IP = "192.168.1.188";
	WORD Port = 0;
	std::string UUID = "ABCDEFG";

    if (Kmbox.InitDevice(IP, Port, UUID) != 0)
    {
        LOG_ERROR("Failed to initialize KMBOX");
		return 1;
    }

	LOG("KMBOX initialized");

    system("pause");
	return 1;
}