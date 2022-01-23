/*
    As you can obviously see I just stopped coding randomly in this one,
    yes the GetModuleBaseAddress function is pasted. Get over it.
*/
#include <windows.h>
#include <tlhelp32.h>

uintptr_t GetModuleBaseAddress(const char* modName) {
    HANDLE hSnap = CreateToolhelp32Snapshot(TH32CS_SNAPMODULE | TH32CS_SNAPMODULE32, procId);
    if (hSnap != INVALID_HANDLE_VALUE) {
      MODULEENTRY32 modEntry;
      modEntry.dwSize = sizeof(modEntry);
      if (Module32First(hSnap, &modEntry)) {
        do {
          if (!strcmp(modEntry.szModule, modName)) {
            CloseHandle(hSnap);
            return (uintptr_t)modEntry.modBaseAddr;
          }
        } while (Module32Next(hSnap, &modEntry));
      }
    }
}

int main()
{
    DWORD ProcessId;
    HWND hWnd = FindWindowA(NULL, "Counter-Strike: Global Offensive"); /* No longer working, CSGO now includes some extra shit in the title (Direct3D 9, etc) */
    BaseAddress = GetModuleBaseAddress("client.dll");
    GetWindowThreadProcessId(hWnd, &ProcessId);
  
    while(1)
    {
        unsigned int* GlowManager = FindPattern("?? ?? ?? ?? ?? ?? ??", &BaseAddress); // Find offset GlowMgr
        int LocalTeam = // I stopped coding here
    }
  
    return 1;
}
