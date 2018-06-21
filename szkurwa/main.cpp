#include <iostream>
#include <windows.h>
#include <stdlib.h>
#include <cstdlib>
#include <time.h>
#include <stdio.h>
#include <conio.h>


using namespace std;

void start()
{
       for(;;)
       {
              cout<<"                   Wcisnij S aby kontynuowac"<<endl<<endl<<endl<<endl;
              Sleep(100);
                      if( kbhit() )
             if( getch()=='s' )
             {
                     goto x;
             }
       }
       x:;
}

void slp()
{
       Sleep(10);
}
int main()
{
       start();
       start:
              system("cls");
cout<<endl<<"Pytanie : Ile to 4*4/2?"<<endl;
cout << "                =        =" << endl;
cout << "                =        =" << endl;
cout << "            1   =    2   =   3" << endl;
cout << "                =        =" << endl;
cout << "        = = = = = = = = = = = = = " << endl;
cout << "                = =    = =" << endl;
cout << "                =   ==   =" << endl;
cout << "            4   =   ==   =   6" << endl;
cout << "                = =    = =" << endl;
cout << "        = = = = = = = = = = = = =" << endl;
cout << "                =        =" << endl;
cout << "            7   =    8   =   9" << endl;
cout << "                =        =" << endl;
cout << "                =        =" << endl;
int x=1, y=1;
for(;;)
{
int wybor;
pcztk:
wybor=getch();
if(wybor=='8')//gora
{
       if(y>=2)
       {
              goto pcztk;
       }
       y=y+1;

}
if(wybor=='2')//dol
{
       if(y<=0)
       {
              goto pcztk;
       }
       y=y-1;
}
if(wybor=='6')//prwao
{
       if(x>=2)
       {
              goto pcztk;
       }
       x=x+1;
}
if(wybor=='4')//lewo
{
       if(x<=0)
       {
              goto pcztk;
       }
       x=x-1;
}
if(wybor=='5')//lewo
{
       if((x==1)&&(y==0))
       {
              goto wygrana;
       }
       else
       {
              goto przegrana;
       }
}
system("cls");
       if((x==0)&&(y==0))
       {
              cout<<endl<<"Pytanie : Ile to 4*4/2?"<<endl;
cout << "                =        =" << endl;
cout << "                =        =" << endl;
cout << "            1   =    2   =   3" << endl;
cout << "                =        =" << endl;
cout << "        = = = = = = = = = = = = = " << endl;
cout << "                =        =" << endl;
cout << "                =        =" << endl;
cout << "            4   =    5   =   6" << endl;
cout << "                =        =" << endl;
cout << "        = = = = = = = = = = = = =" << endl;
cout << "         =    = =        =" << endl;
cout << "           ==   =    8   =   9" << endl;
cout << "           ==   =        =" << endl;
cout << "         =    = =        =" << endl;
       }
       if((x==0)&&(y==1))
       {
              cout<<endl<<"Pytanie : Ile to 4*4/2?"<<endl;
cout << "                =        =" << endl;
cout << "                =        =" << endl;
cout << "            1   =    2   =   3" << endl;
cout << "                =        =" << endl;
cout << "        = = = = = = = = = = = = =" << endl;
cout << "         =    = =        =" << endl;
cout << "           ==   =        =" << endl;
cout << "           ==   =    5   =   6" << endl;
cout << "         =    = =        =" << endl;
cout << "        = = = = = = = = = = = = =" << endl;
cout << "                =        =" << endl;
cout << "            7   =    8   =   9" << endl;
cout << "                =        =" << endl;
cout << "                =        =" << endl;
       }
              if((x==0)&&(y==2))
       {
              cout<<endl<<"Pytanie : Ile to 4*4/2?"<<endl;
       cout << "         =    = =        =" << endl;
cout << "           ==   =        =" << endl;
cout << "           ==   =    2   =   3" << endl;
cout << "         =    = =        =" << endl;
cout << "        = = = = = = = = = = = = =" << endl;
cout << "                =        =" << endl;
cout << "                =        =" << endl;
cout << "            4   =    5   =   6" << endl;
cout << "                =        =" << endl;
cout << "        = = = = = = = = = = = = =" << endl;
cout << "                =        =" << endl;
cout << "            7   =    8   =   9" << endl;
cout << "                =        =" << endl;
cout << "                =        =" << endl;
       }
                     if((x==1)&&(y==0))
       {
              cout<<endl<<"Pytanie : Ile to 4*4/2?"<<endl;
cout << "                =        =" << endl;
cout << "                =        =" << endl;
cout << "            1   =    2   =   3" << endl;
cout << "                =        =" << endl;
cout << "        = = = = = = = = = = = = = " << endl;
cout << "                =        =" << endl;
cout << "                =        =" << endl;
cout << "            4   =    5   =   6" << endl;
cout << "                =        =" << endl;
cout << "        = = = = = = = = = = = = =" << endl;
cout << "                = =    = =" << endl;
cout << "            7   =   ==   =   9" << endl;
cout << "                =   ==   =" << endl;
cout << "                = =    = =" << endl;
       }

                            if((x==2)&&(y==0))
       {
              cout<<endl<<"Pytanie : Ile to 4*4/2?"<<endl;
cout << "                =        =" << endl;
cout << "                =        =" << endl;
cout << "            1   =    2   =   3" << endl;
cout << "                =        =" << endl;
cout << "        = = = = = = = = = = = = = " << endl;
cout << "                =        =" << endl;
cout << "                =        =" << endl;
cout << "            4   =    5   =   6" << endl;
cout << "                =        =" << endl;
cout << "        = = = = = = = = = = = = =" << endl;
cout << "                =        = =    =" << endl;
cout << "            7   =    8   =   ==" << endl;
cout << "                =        =   ==" << endl;
cout << "                =        = =    =" << endl;
       }
                                   if((x==1)&&(y==1))
       {
              cout<<endl<<"Pytanie : Ile to 4*4/2?"<<endl;
cout << "                =        =" << endl;
cout << "                =        =" << endl;
cout << "            1   =    2   =   3" << endl;
cout << "                =        =" << endl;
cout << "        = = = = = = = = = = = = = " << endl;
cout << "                = =    = =" << endl;
cout << "                =   ==   =" << endl;
cout << "            4   =   ==   =   6" << endl;
cout << "                = =    = =" << endl;
cout << "        = = = = = = = = = = = = =" << endl;
cout << "                =        =" << endl;
cout << "            7   =    8   =   9" << endl;
cout << "                =        =" << endl;
cout << "                =        =" << endl;
       }
                                          if((x==2)&&(y==2))
       {
              cout<<endl<<"Pytanie : Ile to 4*4/2?"<<endl;
       cout << "                =        = =    =" << endl;
cout << "                =        =   ==" << endl;
cout << "            1   =    2   =   ==" << endl;
cout << "                =        = =    =" << endl;
cout << "        = = = = = = = = = = = = = " << endl;
cout << "                =        =" << endl;
cout << "                =        =" << endl;
cout << "            4   =    5   =   6" << endl;
cout << "                =        =" << endl;
cout << "        = = = = = = = = = = = = =" << endl;
cout << "                =        =" << endl;
cout << "            7   =    8   =   9" << endl;
cout << "                =        =" << endl;
cout << "                =        =" << endl;
       }
                                                 if((x==1)&&(y==2))
       {
              cout<<endl<<"Pytanie : Ile to 4*4/2?"<<endl;
       cout << "                = =    = =" << endl;
cout << "                =   ==   =" << endl;
cout << "            1   =   ==   =   3" << endl;
cout << "                = =    = =" << endl;
cout << "        = = = = = = = = = = = = = " << endl;
cout << "                =        =" << endl;
cout << "                =        =" << endl;
cout << "            4   =    5   =   6" << endl;
cout << "                =        =" << endl;
cout << "        = = = = = = = = = = = = =" << endl;
cout << "                =        =" << endl;
cout << "            7   =    8   =   9" << endl;
cout << "                =        =" << endl;
cout << "                =        =" << endl;
       }
                                                        if((x==2)&&(y==1))
       {
              cout<<endl<<"Pytanie : Ile to 4*4/2?"<<endl;
cout << "                =        =" << endl;
cout << "                =        =" << endl;
cout << "            1   =    2   =   3" << endl;
cout << "                =        =" << endl;
cout << "        = = = = = = = = = = = = = " << endl;
cout << "                =        = =    =" << endl;
cout << "                =        =   ==" << endl;
cout << "            4   =    5   =   ==" << endl;
cout << "                =        = =    =" << endl;
cout << "        = = = = = = = = = = = = =" << endl;
cout << "                =        =" << endl;
cout << "            7   =    8   =   9" << endl;
cout << "                =        =" << endl;
cout << "                =        =" << endl;
       }

}
       wygrana:
              cout<<endl<<endl;
                     for(int u=1;u<=80;u++)
                     {
                            cout<<"-";
                            Sleep(10);
                     }
                     cout<<endl;
                     cout<<"                                  G";slp();cout<<"R";slp();cout<<"A";slp();cout<<"T";slp();cout<<"U";slp();cout<<"L";slp();cout<<"A";slp();cout<<"C";slp();cout<<"J";slp();cout<<"E"<<endl;
                     cout<<"                                   W";slp();cout<<"Y";slp();cout<<"G";slp();cout<<"R";slp();cout<<"A";slp();cout<<"L";slp();cout<<"E";slp();cout<<"S"<<endl<<endl;
                     cout<<"                       Wcisnij przycisk aby zagrac ponownie."<<endl;

                     getch();
                     goto start;
       przegrana:
                                   for(int u=1;u<=80;u++)
                     {
                            cout<<"-";
                            Sleep(10);
                     }
                     cout<<endl;
                     cout <<"                                  G";slp();cout<<"R";slp();cout<<"A";slp();cout<<"T";slp();cout<<"U";slp();cout<<"L";slp();cout<<"A";slp();cout<<"C";slp();cout<<"J";slp();cout<<"E"<<endl;
                     cout <<"                                  P";slp();cout<<"R";slp();cout<<"Z";slp();cout<<"E";slp();cout<<"G";slp();cout<<"R";slp();cout<<"A";slp();cout<<"L";slp();cout<<"E";slp();cout<<"S"<<endl<<endl;
                     cout<<"                       Wcisnij przycisk aby zagrac ponownie."<<endl;
                     getch();
                     goto start;

    return 0;
}
