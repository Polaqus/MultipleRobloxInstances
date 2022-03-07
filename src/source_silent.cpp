#include <Windows.h>
#include <iostream>

void HideConsole()
{
    ::ShowWindow(::GetConsoleWindow(), SW_HIDE);
}

int main()
{

    HANDLE mutex = CreateMutexA(NULL, TRUE, "ROBLOX_singletonMutex");
    HideConsole();
    std::cin.get(); 
    bool ReleaseMutex(mutex);
    bool CloseHandle(mutex);

    return 0;
}
