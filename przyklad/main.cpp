#include <iostream>
#include <windows.h>
#include <stdlib.h>
#include <cstdlib>
#include <time.h>
#include <stdio.h>
#include <conio.h>

using namespace std;
void HideCursor()
{
    ::HANDLE hConsoleOut =::GetStdHandle( STD_OUTPUT_HANDLE );
    ::CONSOLE_CURSOR_INFO hCCI;
    ::GetConsoleCursorInfo( hConsoleOut, & hCCI );
    hCCI.bVisible = FALSE;
    ::SetConsoleCursorInfo( hConsoleOut, & hCCI );
}


int main()
{
       HideCursor();
       int lamiglowka;

       cout<<"Kurwa pulapka wylosuj ponad 50, a przejdziesz dalej."<<endl;
       cout<<"Wcisnij T..."<<endl;
    for(unsigned lamiglowka=0;lamiglowka<99;lamiglowka++)
    {
       cout<<"\rliczba: "<<lamiglowka;
       Sleep(4);
       if (lamiglowka==98)
       {
              lamiglowka=0;
       }
        if( kbhit() )
             if( getch() == 't' )
             {
              if(lamiglowka<=50)
              {
                            goto t;
              }
              else if(lamiglowka>=51)
              {
                    goto x;
              }
             }

    }
    x:
           cout<<endl<<"Udalo ci sie kurwo przeszedles dalej"<<endl;
           system("PAUSE");
           goto l;
       t:
       cout<<endl<<"przejebales"<<endl;
       l:



    return 0;
}
