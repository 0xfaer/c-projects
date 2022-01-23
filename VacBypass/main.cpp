// This was supposed to be able to be used with CSGO already open
// Pretty cool right?

#include <windows.h>

BOOL WINAPI write_fsecvac(BYTE* shell_code, size_t zsize, BOOL debugVAC)
{
   /*
      Did not finish this part, pretty simple though.
   */
  
   BYTE* patch = FindPattern("vsteamui.dll", "");
}

int main(int argc, char* argv[]){
  
  
  /*
      Basic shellcode, check it out.
  */
  BYTE shell_code[] = { 0x68, 0x00, 0xFE, 0x7F, 0x49, 0x31, 0xC0, 0x39, 0xE0, 0x5C, 0xC3, 0x33, 0x64, 0x24, 0x07 };
  write_fsecvac(&shell_code,sizeof(shellcode), 1);
  
  return 1;
}
