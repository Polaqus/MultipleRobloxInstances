#include <Windows.h>
#include <iostream>


void HideConsole()
{
    ::ShowWindow(::GetConsoleWindow(), SW_HIDE);
}

int main()
{
    HANDLE mutex = CreateMutexA(NULL, TRUE, "ROBLOX_singletonMutex");
    std::cout << "You can now use multiple roblox instances!\n\nThis popup will close in 5 seconds";
    Sleep(5000);
    HideConsole();
    std::cin.get(); 
    bool ReleaseMutex(mutex);
    bool CloseHandle(mutex);

    return 0;
}
