#include <Windows.h>
#include <iostream>

int main(int argc, char* argv[])
{
    HANDLE mutex = CreateMutexA(NULL, TRUE, "ROBLOX_singletonMutex");
    std::cout << "Enabled. Close/press Enter to quit." << std::endl;

    std::cin.get();

    bool ReleaseMutex(mutex);
    bool CloseHandle(mutex);

    return 0;
}
