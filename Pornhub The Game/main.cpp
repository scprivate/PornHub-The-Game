#include <iostream>
#include <windows.h>
#include <stdlib.h>
#include <cstdlib>
#include <time.h>
#include <stdio.h>
#include <conio.h>
#include <mmsystem.h>

using namespace std;
//-----------z
std::string PL( const char * text )
{
    std::string result;
    for(; * text; text++ )
    switch( * text )
    {
    case '�': result += static_cast < char >( 0xa5 ); break;
    case '�': result += static_cast < char >( 0x86 ); break;
    case '�': result += static_cast < char >( 0xa9 ); break;
    case '�': result += static_cast < char >( 0x88 ); break;
    case '�': result += static_cast < char >( 0xe4 ); break;
    case '�': result += static_cast < char >( 0xa2 ); break;
    case '�': result += static_cast < char >( 0x98 ); break;
    case '�': result += static_cast < char >( 0xbe ); break;
    case '�': result += static_cast < char >( 0xab ); break;
    case '�': result += static_cast < char >( 0xa4 ); break;
    case '�': result += static_cast < char >( 0x8f ); break;
    case '�': result += static_cast < char >( 0xa8 ); break;
    case '�': result += static_cast < char >( 0x9d ); break;
    case '�': result += static_cast < char >( 0xe3 ); break;
    case '�': result += static_cast < char >( 0xe0 ); break;
    case '�': result += static_cast < char >( 0x97 ); break;
    case '�': result += static_cast < char >( 0xbd ); break;
    case '�': result += static_cast < char >( 0x8d ); break;
        default: result += * text; break;
    }
    return result;
}
int wyborgorzki3;

void losowanie()
{
       srand(time(NULL));
}
void HideCursor()
{
    ::HANDLE hConsoleOut =::GetStdHandle( STD_OUTPUT_HANDLE );
    ::CONSOLE_CURSOR_INFO hCCI;
    ::GetConsoleCursorInfo( hConsoleOut, & hCCI );
    hCCI.bVisible = FALSE;
    ::SetConsoleCursorInfo( hConsoleOut, & hCCI );
}

    HANDLE kolor;

    void introtest()
    {
           cout<<endl<<endl<<endl<<endl<<endl;
                  kolor=GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(kolor, 8);
    cout.width(59);
    cout<<"---------------------------------";
    SetConsoleTextAttribute(kolor, 9);
    cout.width(57);
    cout<<endl<<"DramaMaker Studio przedstawia";
    cout.width(50);
    SetConsoleTextAttribute(kolor, 12);
    cout<<endl<<"PornHub The Game"<<endl;
    SetConsoleTextAttribute(kolor, 8);
    cout.width(59);
    cout<<"---------------------------------";
    cout.width(54);
    SetConsoleTextAttribute(kolor, 8);
    cout<<endl<<endl<<endl<<PL("Wci�nij dowolny klawisz");
           Sleep(100);
           system("cls");
           cout<<endl<<endl<<endl<<endl;
                  kolor=GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(kolor, 8);
    cout.width(59);
    cout<<"---------------------------------";
    SetConsoleTextAttribute(kolor, 9);
    cout.width(57);
    cout<<endl<<"DramaMaker Studio przedstawia";
    cout.width(50);
    SetConsoleTextAttribute(kolor, 12);
    cout<<endl<<"PornHub The Game"<<endl;
    SetConsoleTextAttribute(kolor, 8);
    cout.width(59);
    cout<<"---------------------------------";
    cout.width(54);
    SetConsoleTextAttribute(kolor, 8);
    cout<<endl<<endl<<endl<<PL("Wci�nij dowolny klawisz");
           Sleep(100);
           system("cls");
           cout<<endl<<endl<<endl;
                  kolor=GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(kolor, 8);
    cout.width(59);
    cout<<"---------------------------------";
    SetConsoleTextAttribute(kolor, 9);
    cout.width(57);
    cout<<endl<<"DramaMaker Studio przedstawia";
    cout.width(50);
    SetConsoleTextAttribute(kolor, 12);
    cout<<endl<<"PornHub The Game"<<endl;
    SetConsoleTextAttribute(kolor, 8);
    cout.width(59);
    cout<<"---------------------------------";
    cout.width(54);
    SetConsoleTextAttribute(kolor, 8);
    cout<<endl<<endl<<endl<<PL("Wci�nij dowolny klawisz");
           Sleep(100);
           system("cls");
           cout<<endl<<endl;
                  kolor=GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(kolor, 8);
    cout.width(59);
    cout<<"---------------------------------";
    SetConsoleTextAttribute(kolor, 9);
    cout.width(57);
    cout<<endl<<"DramaMaker Studio przedstawia";
    cout.width(50);
    SetConsoleTextAttribute(kolor, 12);
    cout<<endl<<"PornHub The Game"<<endl;
    SetConsoleTextAttribute(kolor, 8);
    cout.width(59);
    cout<<"---------------------------------";
    cout.width(54);
    SetConsoleTextAttribute(kolor, 8);
    cout<<endl<<endl<<endl<<PL("Wci�nij dowolny klawisz");
           Sleep(100);
           system("cls");
           cout<<endl;
                  kolor=GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(kolor, 8);
    cout.width(59);
    cout<<"---------------------------------";
    SetConsoleTextAttribute(kolor, 9);
    cout.width(57);
    cout<<endl<<"DramaMaker Studio przedstawia";
    cout.width(50);
    SetConsoleTextAttribute(kolor, 12);
    cout<<endl<<"PornHub The Game"<<endl;
    SetConsoleTextAttribute(kolor, 8);
    cout.width(59);
    cout<<"---------------------------------";
    cout.width(54);
    SetConsoleTextAttribute(kolor, 8);
    cout<<endl<<endl<<endl<<PL("Wci�nij dowolny klawisz");
           Sleep(100);
           system("cls");
       kolor=GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(kolor, 8);
    cout.width(59);
    cout<<"---------------------------------";
    SetConsoleTextAttribute(kolor, 9);
    cout.width(57);
    cout<<endl<<"DramaMaker Studio przedstawia";
    cout.width(50);
    SetConsoleTextAttribute(kolor, 12);
    cout<<endl<<"PornHub The Game"<<endl;
    SetConsoleTextAttribute(kolor, 8);
    cout.width(59);
    cout<<"---------------------------------";
    cout.width(54);
    SetConsoleTextAttribute(kolor, 8);
    cout<<endl<<endl<<endl<<PL("Wci�nij dowolny klawisz");
    Sleep(100);
    system("cls");


    SetConsoleTextAttribute(kolor, 9);
    cout.width(57);
    cout<<endl<<"DramaMaker Studio przedstawia";
    cout.width(50);
    SetConsoleTextAttribute(kolor, 12);
    cout<<endl<<"PornHub The Game"<<endl;
    SetConsoleTextAttribute(kolor, 8);
    cout.width(59);
    cout<<"---------------------------------";
    cout.width(54);
    SetConsoleTextAttribute(kolor, 8);
    cout<<endl<<endl<<endl<<PL("Wci�nij dowolny klawisz");
    Sleep(100);
    system("cls");


    SetConsoleTextAttribute(kolor, 9);
    cout.width(57);
    cout<<"DramaMaker Studio przedstawia";
    cout.width(50);
    SetConsoleTextAttribute(kolor, 12);
    cout<<endl<<"PornHub The Game"<<endl;
    SetConsoleTextAttribute(kolor, 8);
    cout.width(59);
    cout<<"---------------------------------";
    cout.width(54);
    SetConsoleTextAttribute(kolor, 8);
    cout<<endl<<endl<<endl<<PL("Wci�nij dowolny klawisz");
    Sleep(100);
    system("cls");


        cout.width(50);
    SetConsoleTextAttribute(kolor, 12);
    cout<<"PornHub The Game"<<endl;
    SetConsoleTextAttribute(kolor, 8);
    cout.width(59);
    cout<<"---------------------------------";
    cout.width(54);
    SetConsoleTextAttribute(kolor, 8);
    cout<<endl<<endl<<endl<<PL("Wci�nij dowolny klawisz");
    Sleep(100);
    system("cls");

        SetConsoleTextAttribute(kolor, 8);
    cout.width(59);
    cout<<"---------------------------------";
    cout.width(54);
    SetConsoleTextAttribute(kolor, 8);
    cout<<endl<<endl<<endl<<PL("Wci�nij dowolny klawisz");
    Sleep(100);
    system("cls");

        cout.width(54);
    SetConsoleTextAttribute(kolor, 8);
    cout<<endl<<endl<<endl<<PL("Wci�nij dowolny klawisz");
    Sleep(100);
    system("cls");

        cout.width(54);
    SetConsoleTextAttribute(kolor, 8);
    cout<<endl<<endl<<PL("Wci�nij dowolny klawisz");
    Sleep(100);
    system("cls");

        cout.width(54);
    SetConsoleTextAttribute(kolor, 8);
    cout<<endl<<PL("Wci�nij dowolny klawisz");
    Sleep(100);
    system("cls");

        cout.width(54);
    SetConsoleTextAttribute(kolor, 8);
    cout<<PL("Wci�nij dowolny klawisz");
    Sleep(100);
    system("cls");

    cout<<"";
    Sleep(1000);
    }
    void powrotdrzwi()
                                        {
                                        system("cls");
                                cout.width(32);
                                cout<<"Mijesce: ";
                                SetConsoleTextAttribute(kolor, 10);
                                cout<<"Klatka schodowa w bloku Ali";
                                SetConsoleTextAttribute(kolor, 8);
                                cout.width(32);
                                cout<<endl<<"Godzina: ";
                                SetConsoleTextAttribute(kolor, 4);
                                cout<<PL("oko�o 17")<<endl<<endl<<endl;
                                SetConsoleTextAttribute(kolor, 8);
                                cout<<"--------------------------------------------------------------------------------";
                                cout<<endl<<PL("Stoisz przed drzwiami do domu Ali razem z Micha�em.");
                                cout<<endl<<PL("Po prawej widzisz schody na wy�sze pi�tro, ");
                                cout<<endl<<PL("za tob� znajduj� si� drzwi do innego mieszkania.")<<endl<<endl;
                                SetConsoleTextAttribute(kolor, 8);
                                cout<<"--------------------------------------------------------------------------------";
                                SetConsoleTextAttribute(kolor, 11);
                                cout<<endl<<endl<<PL("Co robisz?");
                                SetConsoleTextAttribute(kolor, 12);
                                cout<<endl<<PL("1. ");
                                SetConsoleTextAttribute(kolor, 8);
                                cout<<PL("Wchodzisz do domu Ali.");
                                SetConsoleTextAttribute(kolor, 12);
                                cout<<endl<<PL("2. ");
                                SetConsoleTextAttribute(kolor, 8);
                                cout<<PL("Rozpoczynasz dialog z Micha�em.");
                                SetConsoleTextAttribute(kolor, 12);
                                cout<<endl<<PL("3. ");
                                SetConsoleTextAttribute(kolor, 8);
                                cout<<PL("Kierujesz si� do drzwi za tob�.");

                                        }
void intro()
{
       cout<<endl<<endl<<endl<<endl<<endl;
    kolor=GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(kolor, 8);
    cout.width(59);
    cout<<"---------------------------------";
    SetConsoleTextAttribute(kolor, 9);
    cout.width(57);
    cout<<endl<<"DramaMaker Studio przedstawia";
    cout.width(50);
    SetConsoleTextAttribute(kolor, 12);
    cout<<endl<<"PornHub The Game"<<endl;
    SetConsoleTextAttribute(kolor, 8);
    cout.width(59);
    cout<<"---------------------------------";
    cout.width(54);
    SetConsoleTextAttribute(kolor, 8);
    cout<<endl<<endl<<endl<<PL("Wci�nij dowolny klawisz");
    getch();
    system("cls");
}

void menu()
{
       int i=1;
       int b=1;
       while(i<=32)
       {
       cout<<"-";
       Sleep(10);
       i++;
       }
       SetConsoleTextAttribute(kolor, 12);
       cout<<"P";Sleep(10);cout<<"O";Sleep(10);cout<<"R";Sleep(10);cout<<"N";Sleep(10);cout<<"H";Sleep(10);cout<<"U";Sleep(10);cout<<"B";Sleep(10);cout<<" ";Sleep(10);cout<<"T";Sleep(10);
       cout<<"H";Sleep(10);cout<<"E";Sleep(10);cout<<" ";Sleep(10);cout<<"G";Sleep(10);cout<<"A";Sleep(10);cout<<"M";Sleep(10);cout<<"E";
       SetConsoleTextAttribute(kolor, 8);
       while(b<=32)
       {
       cout<<"-";
       Sleep(20);
       b++;
       }
       SetConsoleTextAttribute(kolor, 11);
    cout <<endl<<PL("Kim chcesz zagra�?")<< endl;
    SetConsoleTextAttribute(kolor, 8);
    Sleep(50);
    cout << "----------------"<<endl;
    Sleep(50);
    cout << "1. Gorzki"<<endl;
    Sleep(50);
    cout << "2. Martyna"<<endl;
    Sleep(50);
    cout << "3. Filip"<<endl;
    Sleep(50);
    cout << "4. Marta"<<endl;
    Sleep(50);
    cout << PL("5. Micha�")<<endl;
    Sleep(50);
    cout << "6. Puma" <<endl;
    Sleep(50);
    cout << "7. Patryk"<< endl;
    Sleep(50);
    cout << "8. Ala"<<endl;
    Sleep(50);
    cout << "9. Laura"<<endl;
    Sleep(50);
    cout << "10. Buba"<<endl;
    Sleep(50);
    cout << "11. Ryba"<<endl;
    Sleep(50);
    cout << "12. Krzysiek"<<endl;
    Sleep(50);
    cout << "----------------";
    Sleep(50);
    SetConsoleTextAttribute(kolor, 12);
    cout<<endl<<PL("Ka�da z postaci ma wyznaczony ekwipunek oraz charyzm� kt�ra wp�ywa na �atwo��,");
    cout<<endl<<PL("lub trudno�� prowadzenia dialog�w.");
    Sleep(50);
    SetConsoleTextAttribute(kolor, 8);
    cout<< endl<<endl<<PL("Wybierz posta�: ");
}
void czk()
{
       Sleep(50);
}
void wyborpostaci()
{
       int wyborpost;
                     for(;;)
                     {
                     cin>>wyborpost;
                     if (!(wyborpost))
                     {
                     wyborpost = 0;
                     cin.clear();
                      goto x;
                     }
                     if ((wyborpost<=12)&&(wyborpost>=1))
                     {
                            goto y;
                     }
                                          x:
                                                 wyborpost = 0;
                                                 cin.ignore();
                                                 cin.clear();
                                                 powrotdowyboru:
                                          system("cls");
int i=1;
       int b=1;
       while(i<=32)
       {
       cout<<"-";
       Sleep(10);
       i++;
       }
       SetConsoleTextAttribute(kolor, 12);
       cout<<"P";Sleep(10);cout<<"O";Sleep(10);cout<<"R";Sleep(10);cout<<"N";Sleep(10);cout<<"H";Sleep(10);cout<<"U";Sleep(10);cout<<"B";Sleep(10);cout<<" ";Sleep(10);cout<<"T";Sleep(10);
       cout<<"H";Sleep(10);cout<<"E";Sleep(10);cout<<" ";Sleep(10);cout<<"G";Sleep(10);cout<<"A";Sleep(10);cout<<"M";Sleep(10);cout<<"E";
       SetConsoleTextAttribute(kolor, 8);
       while(b<=32)
       {
       cout<<"-";
       Sleep(20);
       b++;
       }
       SetConsoleTextAttribute(kolor, 11);
    cout <<endl<<PL("Kim chcesz zagra�?")<< endl;
    SetConsoleTextAttribute(kolor, 8);
    Sleep(50);
    cout << "----------------"<<endl;
    Sleep(50);
    cout << "1. Gorzki"<<endl;
    Sleep(50);
    cout << "2. Martyna"<<endl;
    Sleep(50);
    cout << "3. Filip"<<endl;
    Sleep(50);
    cout << "4. Marta"<<endl;
    Sleep(50);
    cout << PL("5. Micha�")<<endl;
    Sleep(50);
    cout << "6. Puma" <<endl;
    Sleep(50);
    cout << "7. Patryk"<< endl;
    Sleep(50);
    cout << "8. Ala"<<endl;
    Sleep(50);
    cout << "9. Laura"<<endl;
    Sleep(50);
    cout << "10. Buba"<<endl;
    Sleep(50);
    cout << "11. Ryba"<<endl;
    Sleep(50);
    cout << "12. Krzysiek"<<endl;
    Sleep(50);
    cout << "----------------";
    Sleep(50);
    SetConsoleTextAttribute(kolor, 12);
    cout<<endl<<PL("Ka�da z postaci ma wyznaczony ekwipunek oraz charyzm� kt�ra wp�ywa na �atwo��,");
    cout<<endl<<PL("lub trudno�� prowadzenia dialog�w.");
    Sleep(50);
    SetConsoleTextAttribute(kolor, 8);
    cout<< endl<<endl<<PL("B��d, spr�b�j ponownie: ");


                     }
                     y:
              switch(wyborpost)
              {

              case 1: //Gorzki
                     {
                     system("cls");
                     PlaySound(TEXT("gorzki.wav"), NULL, SND_ASYNC);
                     cout<<endl<<PL("Wybra�e� ekonoma.");czk();
                     cout<<endl<<"Charyzma: ";czk();
                     SetConsoleTextAttribute(kolor, 12);
                     cout<<"25/60";czk();
                     SetConsoleTextAttribute(kolor, 8);
                     cout<<endl<<"Ekwipunek: ";czk();
                     SetConsoleTextAttribute(kolor, 11);
                     cout<<"Okulary, Fidget Spinner"<<endl;czk();//doko�czy�
                     SetConsoleTextAttribute(kolor, 8);
                     system("PAUSE");
                     int napwn;
                            system("cls");
                            czk();
                            SetConsoleTextAttribute(kolor, 12);
                            cout.width(45);
                            cout<<endl<<endl<<PL("Jeste� pewny?")<<endl;czk();
                            SetConsoleTextAttribute(kolor, 8);
                            cout.width(48);
                            cout<<"-------------------"<<endl;czk();
                            cout.width(36);
                            cout<<"1. Nie."<<endl;czk();
                            cout.width(36);
                            cout<<"2. Tak."<<endl;
                            napwn=getch();
                            if(napwn=='1')
                            {
                             goto powrotdowyboru;
                            }
                            if(napwn=='2')
                            {
                                   int wyborgorzky;
                                system("cls");
                                cout.width(32);
                                cout<<"Mijesce: ";
                                SetConsoleTextAttribute(kolor, 10);
                                cout<<"Klatka schodowa w bloku Ali";
                                SetConsoleTextAttribute(kolor, 8);
                                cout.width(32);
                                cout<<endl<<"Godzina: ";
                                SetConsoleTextAttribute(kolor, 4);
                                cout<<PL("oko�o 17")<<endl<<endl;
                                SetConsoleTextAttribute(kolor, 8);
                                cout<<"--------------------------------------------------------------------------------";
                                cout<<endl<<PL("Stoisz przed drzwiami do domu Ali razem z Micha�em.");
                                cout<<endl<<PL("Po prawej widzisz schody na wy�sze pi�tro, ");
                                cout<<endl<<PL("za tob� znajduj� si� drzwi do innego mieszkania.")<<endl<<endl;
                                SetConsoleTextAttribute(kolor, 8);
                                cout<<"--------------------------------------------------------------------------------";
                                SetConsoleTextAttribute(kolor, 11);
                                cout<<endl<<PL("Co robisz?")<<endl;
                                SetConsoleTextAttribute(kolor, 12);
                                cout<<endl<<PL("1. ");
                                SetConsoleTextAttribute(kolor, 8);
                                cout<<PL("Wchodzisz do domu Ali.");
                                SetConsoleTextAttribute(kolor, 12);
                                cout<<endl<<PL("2. ");
                                SetConsoleTextAttribute(kolor, 8);
                                cout<<PL("Wchodzisz po schodach.");
                                SetConsoleTextAttribute(kolor, 12);
                                cout<<endl<<PL("3. ");
                                SetConsoleTextAttribute(kolor, 8);
                                cout<<PL("Rozpoczynasz dialog z Micha�em.");
                                SetConsoleTextAttribute(kolor, 12);
                                cout<<endl<<PL("4. ");
                                SetConsoleTextAttribute(kolor, 8);
                                cout<<PL("Kierujesz si� do drzwi za tob�.");
                                przeddrzwi:
                                wyborgorzky=getch();
                                switch(wyborgorzky)
                                   {
                                   case '1':
                                          {
                                   system("cls");
                                cout.width(32);
                                cout<<"Mijesce: ";
                                SetConsoleTextAttribute(kolor, 10);
                                cout<<"Dom Ali";
                                SetConsoleTextAttribute(kolor, 8);
                                cout.width(32);
                                cout<<endl<<"Godzina: ";
                                SetConsoleTextAttribute(kolor, 4);
                                cout<<PL("oko�o 17");
                                SetConsoleTextAttribute(kolor, 4);
                                cout.width(50);
                                cout<<endl<<endl<<endl<<PL("Wszed�e� do domu Ali.")<<endl;
                                SetConsoleTextAttribute(kolor, 8);
                                cout<<"--------------------------------------------------------------------------------";
                                SetConsoleTextAttribute(kolor, 8);
                                cout<<endl<<PL("Jeste� w �rodku. Zdejmujesz buty, przychodzi Ala i chc� si� przywita�.")<<endl<<endl;
                                SetConsoleTextAttribute(kolor, 8);
                                cout<<"--------------------------------------------------------------------------------";
                                SetConsoleTextAttribute(kolor, 11);
                                cout<<endl<<"Co robisz?"<<endl;
                                SetConsoleTextAttribute(kolor, 12);
                                cout<<"1. ";
                                SetConsoleTextAttribute(kolor, 8);
                                cout<<PL("Witasz si� i rozpoczynasz dialog.")<<endl;
                                SetConsoleTextAttribute(kolor, 12);
                                cout<<"2. ";
                                SetConsoleTextAttribute(kolor, 8);
                                cout<<PL("Witasz si� ale nie odzywasz.")<<endl;
                                SetConsoleTextAttribute(kolor, 12);
                                cout<<"3. ";
                                SetConsoleTextAttribute(kolor, 8);
                                cout<<PL("Ignorujesz.")<<endl;


                                          break;
                                          }
                                   case '2':
                                          {
                                              int wyborgorzky2;
                                system("cls");
                                cout.width(32);
                                cout<<"Mijesce: ";
                                SetConsoleTextAttribute(kolor, 10);
                                cout<<"Klatka schodowa w bloku Ali.";
                                SetConsoleTextAttribute(kolor, 8);
                                cout.width(32);
                                cout<<endl<<"Godzina: ";
                                SetConsoleTextAttribute(kolor, 4);
                                cout<<PL("oko�o 17");
                                SetConsoleTextAttribute(kolor, 4);
                                cout.width(50);
                                cout<<endl<<endl<<PL("Wchodzisz po schodach.")<<endl;
                                SetConsoleTextAttribute(kolor, 8);
                                cout<<"--------------------------------------------------------------------------------";
                                SetConsoleTextAttribute(kolor, 8);
                                cout<<endl<<PL("Wolnym krokiem pokonujesz stopie� po stopniu.");
                                cout<<endl<<PL("Gdy nagle u�wiadamiasz sobie �e tam nic nie ma.");
                                SetConsoleTextAttribute(kolor, 2);
                                cout<<endl<<PL("Narrator: ");
                                SetConsoleTextAttribute(kolor, 8);
                                cout<<PL("Kurwa, powiedzcie mi kto pisze taki g�upi scenariusz?");
                                SetConsoleTextAttribute(kolor, 3);
                                cout<<endl<<PL("Scenarzysta: ");
                                SetConsoleTextAttribute(kolor, 8);
                                cout<<PL("Przecie� sam to wprowadzi�e� bez naszej zgody.");
                                SetConsoleTextAttribute(kolor, 2);
                                cout<<endl<<PL("Narrator: ");
                                SetConsoleTextAttribute(kolor, 8);
                                cout<<PL("Emm...no tak, wracajmy do historii.")<<endl<<endl;
                                cout<<"--------------------------------------------------------------------------------";
                                SetConsoleTextAttribute(kolor, 12);
                                cout<<endl<<PL("Gorzki: ");
                                SetConsoleTextAttribute(kolor, 8);
                                cout<<PL("Gdzie ja kurwa id�?")<<endl<<endl;
                                SetConsoleTextAttribute(kolor, 8);
                                cout<<"--------------------------------------------------------------------------------"<<endl;
                                SetConsoleTextAttribute(kolor, 11);
                                cout<<"Co robisz?"<<endl;
                                SetConsoleTextAttribute(kolor, 12);
                                cout<<endl<<PL("1. ");
                                SetConsoleTextAttribute(kolor, 8);
                                cout<<PL("Wracasz przed drzwi mieszkania.");
                                SetConsoleTextAttribute(kolor, 12);
                                cout<<endl<<PL("2. ");
                                SetConsoleTextAttribute(kolor, 8);
                                cout<<PL("Tak wiesz �e musisz tam wr�ci�.");
                                wyborgorzky2=getch();
                                switch(wyborgorzky2)
                                {
                                case '1':
                                    {
                                          powrotdrzwi();
                                          goto przeddrzwi;
                                    }

                                 case '2':
                                 {
                                          powrotdrzwi();
                                          goto przeddrzwi;

                                 }
                                }

                                    {


                                    }

                                          break;
                                          }
                                   case '3':
                                          {
                                              int wyborgorzky3;
                                               system("cls");
                                cout.width(32);
                                cout<<"Mijesce: ";
                                SetConsoleTextAttribute(kolor, 10);
                                cout<<"Klatka schodowa w bloku Ali.";
                                SetConsoleTextAttribute(kolor, 8);
                                cout.width(32);
                                cout<<endl<<"Godzina: ";
                                SetConsoleTextAttribute(kolor, 4);
                                cout<<PL("oko�o 17");
                                SetConsoleTextAttribute(kolor, 4);
                                cout.width(55);
                                cout<<endl<<endl<<endl<<PL("Rozpoczynasz dialog z Micha�em.")<<endl;
                                SetConsoleTextAttribute(kolor, 8);
                                cout<<"--------------------------------------------------------------------------------";
                                SetConsoleTextAttribute(kolor, 11);
                                cout<<endl<<PL("Micha�: ");
                                SetConsoleTextAttribute(kolor, 8);
                                cout<<PL("To co, ile b�dziesz pi�?")<<endl<<endl;
                                SetConsoleTextAttribute(kolor, 8);
                                cout<<"--------------------------------------------------------------------------------"<<endl;
                                SetConsoleTextAttribute(kolor, 12);
                                cout<<"1. ";
                                SetConsoleTextAttribute(kolor, 8);
                                cout<<PL("Ma�o.")<<endl;
                                SetConsoleTextAttribute(kolor, 12);
                                cout<<"2. ";
                                SetConsoleTextAttribute(kolor, 8);
                                cout<<PL("Nie wiem.")<<endl;
                                SetConsoleTextAttribute(kolor, 12);
                                cout<<"3. ";
                                SetConsoleTextAttribute(kolor, 8);
                                cout<<PL("Stary najebie sie w chuj.")<<endl;
                                wyborgorzky3=getch();
                                switch(wyborgorzky3)
                                {
                                case '1':
                                    {
                                        int wyborgorzky4;
                                        system("cls");
                                        cout.width(32);
                                cout<<"Mijesce: ";
                                SetConsoleTextAttribute(kolor, 10);
                                cout<<"Klatka schodowa w bloku Ali.";
                                SetConsoleTextAttribute(kolor, 8);
                                cout.width(32);
                                cout<<endl<<"Godzina: ";
                                SetConsoleTextAttribute(kolor, 4);
                                cout<<PL("oko�o 17")<<endl<<endl<<endl;
                                SetConsoleTextAttribute(kolor, 8);
                                cout<<"--------------------------------------------------------------------------------";
                                SetConsoleTextAttribute(kolor, 4);
                                cout<<endl<<PL("Gorzki: ");
                                SetConsoleTextAttribute(kolor, 8);
                                cout<<PL("Ma�o.");
                                SetConsoleTextAttribute(kolor, 8);
                                SetConsoleTextAttribute(kolor, 11);
                                cout<<endl<<PL("Micha�: ");
                                SetConsoleTextAttribute(kolor, 8);
                                cout<<PL("Ma�o? Czemu?")<<endl<<endl;
                                SetConsoleTextAttribute(kolor, 8);
                                cout<<"--------------------------------------------------------------------------------"<<endl;
                                SetConsoleTextAttribute(kolor, 12);
                                cout<<"1. ";
                                SetConsoleTextAttribute(kolor, 8);
                                cout<<PL("A co ci� to?")<<endl;
                                SetConsoleTextAttribute(kolor, 12);
                                cout<<"2. ";
                                SetConsoleTextAttribute(kolor, 8);
                                cout<<PL("MORDA.")<<endl;
                                SetConsoleTextAttribute(kolor, 12);
                                cout<<"3. ";
                                SetConsoleTextAttribute(kolor, 8);
                                cout<<PL("Jako� tak wysz�o, a ty ile pijesz?")<<endl;
                                wyborgorzky4=getch();
                                switch(wyborgorzky4)
                                {
                                    case '1':
                                    {
                                        int wyborgorzky5;
                                        system("cls");
                                        cout.width(32);
                                cout<<"Mijesce: ";
                                SetConsoleTextAttribute(kolor, 10);
                                cout<<"Klatka schodowa w bloku Ali.";
                                SetConsoleTextAttribute(kolor, 8);
                                cout.width(32);
                                cout<<endl<<"Godzina: ";
                                SetConsoleTextAttribute(kolor, 4);
                                cout<<PL("oko�o 17")<<endl<<endl<<endl;
                                SetConsoleTextAttribute(kolor, 8);
                                cout<<"--------------------------------------------------------------------------------";
                                SetConsoleTextAttribute(kolor, 4);
                                cout<<endl<<PL("Gorzki: ");
                                SetConsoleTextAttribute(kolor, 8);
                                cout<<PL("A co ci� to?")<<endl;
                                SetConsoleTextAttribute(kolor, 11);
                                cout<<PL("Micha�: ");
                                SetConsoleTextAttribute(kolor, 8);
                                cout<<PL("Dobra ja ju� nic nie m�wi�")<<endl;
                                cout.width(80);
                                SetConsoleTextAttribute(kolor, 7);
                                cout<<endl<<PL("Micha� zapami�ta to!")<<endl;
                                SetConsoleTextAttribute(kolor, 8);
                                cout<<"--------------------------------------------------------------------------------"<<endl;
                                SetConsoleTextAttribute(kolor, 11);
                                cout<<"Co robisz?"<<endl<<endl;
                                SetConsoleTextAttribute(kolor, 12);
                                cout<<"1. ";
                                SetConsoleTextAttribute(kolor, 8);
                                cout<<PL("Wchodzisz po schodach.")<<endl;
                                SetConsoleTextAttribute(kolor, 12);
                                cout<<"2. ";
                                SetConsoleTextAttribute(kolor, 8);
                                cout<<PL("Wchodzisz do domu Ali.")<<endl;
                                SetConsoleTextAttribute(kolor, 12);
                                cout<<"3. ";
                                SetConsoleTextAttribute(kolor, 8);
                                cout<<PL("Kierujesz si� do drzwi za tob�.")<<endl;
                                    }
                                }

                                    }
                                }

                                          break;
                                          }
                                   case'4':
                                          {


                                          break;
                                          }

                                   }
                            }
                      break;
                     }


              case 2://martyna
                     {
                     system("cls");
                     PlaySound(TEXT("martyna.wav"), NULL, SND_ASYNC);
                     cout<<endl<<PL("Wybra�e� Wark�.");
                     cout<<endl<<"Charyzma: ";czk();
                     SetConsoleTextAttribute(kolor, 12);
                     cout<<"30/60";czk();
                     SetConsoleTextAttribute(kolor, 8);
                     cout<<endl<<"Ekwipunek: ";czk();
                     SetConsoleTextAttribute(kolor, 11);
                     cout<<"Manga, Okulary"<<endl;
                     SetConsoleTextAttribute(kolor, 8);
                     system("PAUSE");
                     int napwn;
                            system("cls");
                            czk();
                            SetConsoleTextAttribute(kolor, 12);
                            cout.width(45);
                            cout<<endl<<endl<<PL("Jeste� pewny?")<<endl;czk();
                            SetConsoleTextAttribute(kolor, 8);
                            cout.width(48);
                            cout<<"-------------------"<<endl;czk();
                            cout.width(36);
                            cout<<"1. Nie."<<endl;czk();
                            cout.width(36);
                            cout<<"2. Tak."<<endl;
                            napwn=getch();
                            if(napwn=='1')
                            {
                             goto powrotdowyboru;
                            }
                     break;
                     }


              case 3://mendzioch
                     {
                     system("cls");
                     PlaySound(TEXT("filip.wav"), NULL, SND_ASYNC);
                     cout<<endl<<PL("Wybra�e� hipokryt�.");
                     cout<<endl<<"Charyzma: ";czk();
                     SetConsoleTextAttribute(kolor, 12);
                     cout<<"50/60";czk();
                     SetConsoleTextAttribute(kolor, 8);
                     cout<<endl<<"Ekwipunek: ";czk();
                     SetConsoleTextAttribute(kolor, 11);
                     cout<<PL("VapeRura, Paczka szloog�w, Zapalniczka")<<endl;czk();//doko�czy�
                     SetConsoleTextAttribute(kolor, 8);
                     system("PAUSE");
                     int napwn;
                            system("cls");
                            czk();
                            SetConsoleTextAttribute(kolor, 12);
                            cout.width(45);
                            cout<<endl<<endl<<PL("Jeste� pewny?")<<endl;czk();
                            SetConsoleTextAttribute(kolor, 8);
                            cout.width(48);
                            cout<<"-------------------"<<endl;czk();
                            cout.width(36);
                            cout<<"1. Nie."<<endl;czk();
                            cout.width(36);
                            cout<<"2. Tak."<<endl;
                            napwn=getch();
                            if(napwn=='1')
                            {
                             goto powrotdowyboru;
                            }
                     break;
                     }


              case 4://martaska
                     {
                     system("cls");
                     PlaySound(TEXT("marta.wav"), NULL, SND_ASYNC);
                     cout<<endl<<PL("Wybra�e� amatork�.");
                     cout<<endl<<"Charyzma: ";czk();
                     SetConsoleTextAttribute(kolor, 12);
                     cout<<"45/60";czk();
                     SetConsoleTextAttribute(kolor, 8);
                     cout<<endl<<"Ekwipunek: ";czk();
                     SetConsoleTextAttribute(kolor, 11);
                     cout<<PL("Papug Hodor, Czapka z Monstera, P�yta Sabatonu ")<<endl;czk();
                     SetConsoleTextAttribute(kolor, 8);
                     system("PAUSE");
                     int napwn;
                            system("cls");
                            czk();
                            SetConsoleTextAttribute(kolor, 12);
                            cout.width(45);
                            cout<<endl<<endl<<PL("Jeste� pewny?")<<endl;czk();
                            SetConsoleTextAttribute(kolor, 8);
                            cout.width(48);
                            cout<<"-------------------"<<endl;czk();
                            cout.width(36);
                            cout<<"1. Nie."<<endl;czk();
                            cout.width(36);
                            cout<<"2. Tak."<<endl;
                            napwn=getch();
                            if(napwn=='1')
                            {
                             goto powrotdowyboru;
                            }
                     break;
                     }
              case 5://Michal
                {
                    system("cls");
                    PlaySound(TEXT("michal.wav"), NULL, SND_ASYNC);
                    cout<<endl<<PL("Wybra�e� programiste.");
                    cout<<endl<<"Charyzma: ";czk();
                    SetConsoleTextAttribute(kolor, 12);
                    cout<<"25/60";czk();
                    SetConsoleTextAttribute(kolor, 8);
                    cout<<endl<<"Ekwipunek: ";czk();
                    SetConsoleTextAttribute(kolor, 11);
                    cout<<PL("P�ytka Gothica z crackiem, n�")<<endl;czk();
                     SetConsoleTextAttribute(kolor, 8);
                    system("PAUSE");
                    int napwn;
                            system("cls");
                            czk();
                            SetConsoleTextAttribute(kolor, 12);
                            cout.width(45);
                            cout<<endl<<endl<<PL("Jeste� pewny?")<<endl;czk();
                            SetConsoleTextAttribute(kolor, 8);
                            cout.width(48);
                            cout<<"-------------------"<<endl;czk();
                            cout.width(36);
                            cout<<"1. Nie."<<endl;czk();
                            cout.width(36);
                            cout<<"2. Tak."<<endl;
                            napwn=getch();
                            if(napwn=='1')
                            {
                             goto powrotdowyboru;
                            }
                    break;
                }
             case 6://Puma
                 {
                     system("cls");
                     PlaySound(TEXT("puma.wav"), NULL, SND_ASYNC);
                     cout<<endl<<PL("Wybra�e� mark� plecak�w.");
                     cout<<endl<<"Charyzma: ";czk();
                     SetConsoleTextAttribute(kolor, 12);
                     cout<<"50/60";czk();
                     SetConsoleTextAttribute(kolor, 8);
                     cout<<endl<<"Ekwipunek: ";czk();
                     SetConsoleTextAttribute(kolor, 11);
                     cout<<PL("Dowodzik, Stary Epapieros, Sprawne Korki")<<endl;czk();
                     SetConsoleTextAttribute(kolor, 8);
                     system("PAUSE");
                     int napwn;
                            system("cls");
                            czk();
                            SetConsoleTextAttribute(kolor, 12);
                            cout.width(45);
                            cout<<endl<<endl<<PL("Jeste� pewny?")<<endl;czk();
                            SetConsoleTextAttribute(kolor, 8);
                            cout.width(48);
                            cout<<"-------------------"<<endl;czk();
                            cout.width(36);
                            cout<<"1. Nie."<<endl;czk();
                            cout.width(36);
                            cout<<"2. Tak."<<endl;
                            napwn=getch();
                            if(napwn=='1')
                            {
                             goto powrotdowyboru;
                            }
                     break;
                 }
             case 7://Patryk
                {
                    system("cls");
                    PlaySound(TEXT("patryk.wav"), NULL, SND_ASYNC);
                    cout<<endl<<"Wybra�e� informatyka.";
                    cout<<endl<<"Charyzma: ";czk();
                    SetConsoleTextAttribute(kolor, 12);
                    cout<<"30/60";czk();
                    SetConsoleTextAttribute(kolor, 8);
                    cout<<endl<<"Ekwipunek: ";czk();
                    SetConsoleTextAttribute(kolor, 11);
                    cout<<PL("Klucze do domu, Dowodzik")<<endl;czk();
                    SetConsoleTextAttribute(kolor, 8);
                    system("PAUSE");
                    int napwn;
                            system("cls");
                            czk();
                            SetConsoleTextAttribute(kolor, 12);
                            cout.width(45);
                            cout<<endl<<endl<<PL("Jeste� pewny?")<<endl;czk();
                            SetConsoleTextAttribute(kolor, 8);
                            cout.width(48);
                            cout<<"-------------------"<<endl;czk();
                            cout.width(36);
                            cout<<"1. Nie."<<endl;czk();
                            cout.width(36);
                            cout<<"2. Tak."<<endl;
                            napwn=getch();
                            if(napwn=='1')
                            {
                             goto powrotdowyboru;
                            }
                    break;
                }
            case 8://Ala
                {
                    system("cls");
                    PlaySound(TEXT("ala.wav"), NULL, SND_ASYNC);
                    cout<<endl<<PL("Wybra�e� pani� siln� i niezale�n�.");
                    cout<<endl<<"Charyzma: ";czk();
                    SetConsoleTextAttribute(kolor, 12);
                    cout<<"25/60";czk();
                    SetConsoleTextAttribute(kolor, 8);
                    cout<<endl<<"Ekwipunek: ";czk();
                    SetConsoleTextAttribute(kolor, 11);
                    cout<<PL("Torebka, Kalkulator, Klucze do domu, Okulary")<<endl;czk();
                    SetConsoleTextAttribute(kolor, 8);
                    system("PAUSE");
                    int napwn;
                            system("cls");
                            czk();
                            SetConsoleTextAttribute(kolor, 12);
                            cout.width(45);
                            cout<<endl<<endl<<PL("Jeste� pewny?")<<endl;czk();
                            SetConsoleTextAttribute(kolor, 8);
                            cout.width(48);
                            cout<<"-------------------"<<endl;czk();
                            cout.width(36);
                            cout<<"1. Nie."<<endl;czk();
                            cout.width(36);
                            cout<<"2. Tak."<<endl;
                            napwn=getch();
                            if(napwn=='1')
                            {
                             goto powrotdowyboru;
                            }
                    break;
                }
            case 9://Laura
                    {
                        system("cls");
                        PlaySound(TEXT("laura.wav"), NULL, SND_ASYNC);
                        cout<<endl<<PL("Wybra�e� �on� Admina.");
                        cout<<endl<<"Charyzma: ";czk();
                        SetConsoleTextAttribute(kolor, 12);
                        cout<<"35/60";czk();
                        SetConsoleTextAttribute(kolor, 8);
                        cout<<endl<<"Ekwipunek: ";czk();
                        SetConsoleTextAttribute(kolor, 11);
                        cout<<PL("Torebka, szminka")<<endl;czk();
                        SetConsoleTextAttribute(kolor, 8);
                        system("PAUSE");
                        int napwn;
                            system("cls");
                            czk();
                            SetConsoleTextAttribute(kolor, 12);
                            cout.width(45);
                            cout<<endl<<endl<<PL("Jeste� pewny?")<<endl;czk();
                            SetConsoleTextAttribute(kolor, 8);
                            cout.width(48);
                            cout<<"-------------------"<<endl;czk();
                            cout.width(36);
                            cout<<"1. Nie."<<endl;czk();
                            cout.width(36);
                            cout<<"2. Tak."<<endl;
                            napwn=getch();
                            if(napwn=='1')
                            {
                             goto powrotdowyboru;
                            }
                        break;
                    }
            case 10://Buba
                {
                    system("cls");
                    PlaySound(TEXT("buba.wav"), NULL, SND_ASYNC);
                    cout<<endl<<PL("Wyb�a�e� uk�ai�ca.");
                    cout<<endl<<"Charyzma: ";czk();
                    SetConsoleTextAttribute(kolor, 12);
                    cout<<"60/60";czk();//odj�� p�niej w dialogach 40 za seplenienie i 10 za bycie ukraincem
                    SetConsoleTextAttribute(kolor, 8);
                    cout<<endl<<"Ekwipunek: ";czk();
                    SetConsoleTextAttribute(kolor, 11);
                    cout<<PL("Miecz za 300z�, Bumae�ang, Medalion Wiedzmi�ski")<<endl;czk();
                    SetConsoleTextAttribute(kolor, 8);
                    system("PAUSE");
                    int napwn;
                            system("cls");
                            czk();
                            SetConsoleTextAttribute(kolor, 12);
                            cout.width(45);
                            cout<<endl<<endl<<PL("Jeste� pewny?")<<endl;czk();
                            SetConsoleTextAttribute(kolor, 8);
                            cout.width(48);
                            cout<<"-------------------"<<endl;czk();
                            cout.width(36);
                            cout<<"1. Nie."<<endl;czk();
                            cout.width(36);
                            cout<<"2. Tak."<<endl;
                            napwn=getch();
                            if(napwn=='1')
                            {
                             goto powrotdowyboru;
                            }
                    break;
                }
            case 11://Ryba
                {
                    system("cls");
                    PlaySound(TEXT("ryba.wav"), NULL, SND_ASYNC);
                    cout<<endl<<PL("Wybra�e� kibola.");
                    cout<<endl<<"Charyzma: ";czk();
                    SetConsoleTextAttribute(kolor, 12);
                    cout<<"35/60";czk();
                    SetConsoleTextAttribute(kolor, 8);
                    cout<<endl<<"Ekwipunek: ";czk();
                    SetConsoleTextAttribute(kolor, 11);
                    cout<<PL("Okulary, Wlepy Jezioraka")<<endl;czk();
                    SetConsoleTextAttribute(kolor, 8);
                    system("PAUSE");
                    int napwn;
                            system("cls");
                            czk();
                            SetConsoleTextAttribute(kolor, 12);
                            cout.width(45);
                            cout<<endl<<endl<<PL("Jeste� pewny?")<<endl;czk();
                            SetConsoleTextAttribute(kolor, 8);
                            cout.width(48);
                            cout<<"-------------------"<<endl;czk();
                            cout.width(36);
                            cout<<"1. Nie."<<endl;czk();
                            cout.width(36);
                            cout<<"2. Tak."<<endl;
                            napwn=getch();
                            if(napwn=='1')
                            {
                             goto powrotdowyboru;
                            }
                    break;
                }
            case 12://Krzysiek
                {
                    system("cls");
                    PlaySound(TEXT("krzysiek.wav"), NULL, SND_ASYNC);
                    cout<<endl<<PL("Wybra�e� Villagera");
                    cout<<endl<<"Charyzma: ";czk();
                    SetConsoleTextAttribute(kolor, 12);
                    cout<<"25/60";czk();
                    SetConsoleTextAttribute(kolor, 8);
                    cout<<endl<<"Ekwipunek: ";czk();
                    SetConsoleTextAttribute(kolor, 11);
                    cout<<PL("Okulary, Rower z komunii, Zasilacz")<<endl;czk();
                    SetConsoleTextAttribute(kolor, 8);
                    system("PAUSE");
                    int napwn;
                            system("cls");
                            czk();
                            SetConsoleTextAttribute(kolor, 12);
                            cout.width(45);
                            cout<<endl<<endl<<PL("Jeste� pewny?")<<endl;czk();
                            SetConsoleTextAttribute(kolor, 8);
                            cout.width(48);
                            cout<<"-------------------"<<endl;czk();
                            cout.width(36);
                            cout<<"1. Nie."<<endl;czk();
                            cout.width(36);
                            cout<<"2. Tak."<<endl;
                            napwn=getch();
                            if(napwn=='1')
                            {
                             goto powrotdowyboru;
                            }
                    break;
                }
              }
}

int main()
{
       PlaySound(TEXT("muz.wav"), NULL, SND_ASYNC);
       HideCursor();
              intro();
              introtest();
              menu();//menu
              wyborpostaci();//nwm czm to tak nazwalem
    return 0;
}

