#include <pch.h>

int main()
{
    SetConsoleTitleA("Debug Console");
    
    // The function needs IP, Port and UUID as parameters
    if (Kmbox.InitDevice("192.168.1.188", 16938, "264F1C27") != 0)
    {
        LOG_ERROR("Failed to initialize KMBOX");
		return 1;
    }
    
    LOG("KMBOX initialized");
    
    // That's it! You can now use the KMBOX API to control the device.

    system("pause");
    return 1;
}