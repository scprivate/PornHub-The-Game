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
    case 'π': result += static_cast < char >( 0xa5 ); break;
    case 'Ê': result += static_cast < char >( 0x86 ); break;
    case 'Í': result += static_cast < char >( 0xa9 ); break;
    case '≥': result += static_cast < char >( 0x88 ); break;
    case 'Ò': result += static_cast < char >( 0xe4 ); break;
    case 'Û': result += static_cast < char >( 0xa2 ); break;
    case 'ú': result += static_cast < char >( 0x98 ); break;
    case 'ø': result += static_cast < char >( 0xbe ); break;
    case 'ü': result += static_cast < char >( 0xab ); break;
    case '•': result += static_cast < char >( 0xa4 ); break;
    case '∆': result += static_cast < char >( 0x8f ); break;
    case ' ': result += static_cast < char >( 0xa8 ); break;
    case '£': result += static_cast < char >( 0x9d ); break;
    case '—': result += static_cast < char >( 0xe3 ); break;
    case '”': result += static_cast < char >( 0xe0 ); break;
    case 'å': result += static_cast < char >( 0x97 ); break;
    case 'Ø': result += static_cast < char >( 0xbd ); break;
    case 'è': result += static_cast < char >( 0x8d ); break;
        default: result += * text; break;
    }
    return result;
}
void ekwipunek ()
{

}

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
    cout<<endl<<endl<<endl<<PL("Wciúnij dowolny klawisz");
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
    cout<<endl<<endl<<endl<<PL("Wciúnij dowolny klawisz");
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
    cout<<endl<<endl<<endl<<PL("Wciúnij dowolny klawisz");
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
    cout<<endl<<endl<<endl<<PL("Wciúnij dowolny klawisz");
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
    cout<<endl<<endl<<endl<<PL("Wciúnij dowolny klawisz");
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
    cout<<endl<<endl<<endl<<PL("Wciúnij dowolny klawisz");
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
    cout<<endl<<endl<<endl<<PL("Wciúnij dowolny klawisz");
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
    cout<<endl<<endl<<endl<<PL("Wciúnij dowolny klawisz");
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
    cout<<endl<<endl<<endl<<PL("Wciúnij dowolny klawisz");
    Sleep(100);
    system("cls");

        SetConsoleTextAttribute(kolor, 8);
    cout.width(59);
    cout<<"---------------------------------";
    cout.width(54);
    SetConsoleTextAttribute(kolor, 8);
    cout<<endl<<endl<<endl<<PL("Wciúnij dowolny klawisz");
    Sleep(100);
    system("cls");

        cout.width(54);
    SetConsoleTextAttribute(kolor, 8);
    cout<<endl<<endl<<endl<<PL("Wciúnij dowolny klawisz");
    Sleep(100);
    system("cls");

        cout.width(54);
    SetConsoleTextAttribute(kolor, 8);
    cout<<endl<<endl<<PL("Wciúnij dowolny klawisz");
    Sleep(100);
    system("cls");

        cout.width(54);
    SetConsoleTextAttribute(kolor, 8);
    cout<<endl<<PL("Wciúnij dowolny klawisz");
    Sleep(100);
    system("cls");

        cout.width(54);
    SetConsoleTextAttribute(kolor, 8);
    cout<<PL("Wciúnij dowolny klawisz");
    Sleep(100);
    system("cls");

    cout<<"";
    Sleep(1000);
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
    cout<<endl<<endl<<endl<<PL("Wciúnij dowolny klawisz");
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
    cout <<endl<<PL("Kim chcesz zagraÊ?")<< endl;
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
    cout << PL("5. Micha≥")<<endl;
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
    cout<<endl<<PL("Kaøda z postaci ma wyznaczony ekwipunek oraz charyzmÍ ktÛra wp≥ywa na ≥atwoúÊ,");
    cout<<endl<<PL("lub trudnoúÊ prowadzenia dialogÛw.");
    Sleep(50);
    SetConsoleTextAttribute(kolor, 8);
    cout<< endl<<endl<<PL("Wybierz postaÊ: ");


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
    cout <<endl<<PL("Kim chcesz zagraÊ?")<< endl;
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
    cout << PL("5. Micha≥")<<endl;
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
    cout<<endl<<PL("Kaøda z postaci ma wyznaczony ekwipunek oraz charyzmÍ ktÛra wp≥ywa na ≥atwoúÊ,");
    cout<<endl<<PL("lub trudnoúÊ prowadzenia dialogÛw.");
    Sleep(50);
    SetConsoleTextAttribute(kolor, 8);
    cout<< endl<<endl<<PL("B≥πd, sprÛbÛj ponownie: ");


                     }
                     y:
              switch(wyborpost)
              {

              case 1: //Gorzki
                     {
                     system("cls");
                     cout<<endl<<"Wybra≥eú ekonoma.";czk();

                     cout<<endl<<"Charyzma: ";czk();
                     SetConsoleTextAttribute(kolor, 12);
                     cout<<"30/60";czk();
                     SetConsoleTextAttribute(kolor, 8);
                     cout<<endl<<"Ekwipunek: ";czk();
                     SetConsoleTextAttribute(kolor, 11);
                     cout<<"Okulary,"<<endl;czk();//dokoÒczyÊ
                     SetConsoleTextAttribute(kolor, 8);
                     system("PAUSE");
                     int napwn;
                            system("cls");
                            czk();
                            SetConsoleTextAttribute(kolor, 12);
                            cout.width(45);
                            cout<<endl<<endl<<PL("Jesteú pewny?")<<endl;czk();
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


              case 2://martyna
                     {
                     system("cls");
                     cout<<endl<<PL("Wybra≥eú WarkÍ.");
                     cout<<endl<<"Charyzma: ";czk();
                     SetConsoleTextAttribute(kolor, 12);
                     cout<<"25/60";czk();
                     SetConsoleTextAttribute(kolor, 8);
                     cout<<endl<<"Ekwipunek: ";czk();
                     SetConsoleTextAttribute(kolor, 11);
                     cout<<"Manga, Okulary,"<<endl;
                     SetConsoleTextAttribute(kolor, 8);
                     system("PAUSE");
                     int napwn;
                            system("cls");
                            czk();
                            SetConsoleTextAttribute(kolor, 12);
                            cout<<endl<<endl<<PL("Jesteú pewny?")<<endl;czk();
                            SetConsoleTextAttribute(kolor, 8);
                            cout<<"-------------------"<<endl;czk();
                            cout<<"1. Nie."<<endl;czk();
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
                     cout<<endl<<PL("Wybra≥eú hipokrytÍ.");
                     system("PAUSE");
                     int napwn;
                            system("cls");
                            czk();
                            SetConsoleTextAttribute(kolor, 12);
                            cout.width(45);
                            cout<<endl<<endl<<PL("Jesteú pewny?")<<endl;czk();
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
                     cout<<endl<<PL("Wybra≥eú amatorkÍ.");
                     system("PAUSE");
                     int napwn;
                            system("cls");
                            czk();
                            SetConsoleTextAttribute(kolor, 12);
                            cout.width(45);
                            cout<<endl<<endl<<PL("Jesteú pewny?")<<endl;czk();
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
                    cout<<endl<<PL("Wybra≥eú p≥og≥amiste.");
                    system("PAUSE");
                    int napwn;
                            system("cls");
                            czk();
                            SetConsoleTextAttribute(kolor, 12);
                            cout.width(45);
                            cout<<endl<<endl<<PL("Jesteú pewny?")<<endl;czk();
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
                     cout<<endl<<PL("Wybra≥eú markÍ plecakÛw.");
                     system("PAUSE");
                     int napwn;
                            system("cls");
                            czk();
                            SetConsoleTextAttribute(kolor, 12);
                            cout.width(45);
                            cout<<endl<<endl<<PL("Jesteú pewny?")<<endl;czk();
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
                    cout<<endl<<"Wybra≥eú informatyka.";
                    system("PAUSE");
                    int napwn;
                            system("cls");
                            czk();
                            SetConsoleTextAttribute(kolor, 12);
                            cout.width(45);
                            cout<<endl<<endl<<PL("Jesteú pewny?")<<endl;czk();
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
                    cout<<endl<<PL("Wybra≥eú paniπ silnπ i niezaleønπ.");
                    system("PAUSE");
                    int napwn;
                            system("cls");
                            czk();
                            SetConsoleTextAttribute(kolor, 12);
                            cout.width(45);
                            cout<<endl<<endl<<PL("Jesteú pewny?")<<endl;czk();
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
                        cout<<endl<<PL("Wybra≥eú øonÍ Admina.");
                        system("PAUSE");
                        int napwn;
                            system("cls");
                            czk();
                            SetConsoleTextAttribute(kolor, 12);
                            cout.width(45);
                            cout<<endl<<endl<<PL("Jesteú pewny?")<<endl;czk();
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
                    cout<<endl<<"Wybra≥eú ukraiÒca.";
                    system("PAUSE");
                    int napwn;
                            system("cls");
                            czk();
                            SetConsoleTextAttribute(kolor, 12);
                            cout.width(45);
                            cout<<endl<<endl<<PL("Jesteú pewny?")<<endl;czk();
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
                    cout<<endl<<"Wybra≥eú kibola.";
                    system("PAUSE");
                    int napwn;
                            system("cls");
                            czk();
                            SetConsoleTextAttribute(kolor, 12);
                            cout.width(45);
                            cout<<endl<<endl<<PL("Jesteú pewny?")<<endl;czk();
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
                    cout<<endl<<"Wybra≥eú Villagera";
                    system("PAUSE");
                    int napwn;
                            system("cls");
                            czk();
                            SetConsoleTextAttribute(kolor, 12);
                            cout.width(45);
                            cout<<endl<<endl<<PL("Jesteú pewny?")<<endl;czk();
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
       //PlaySound(TEXT("dzwiek.wav"), NULL, SND_ASYNC);
       HideCursor();
              intro();
              introtest();
              menu();//menu
              wyborpostaci();//nwm czm to tak nazwalem
              ekwipunek();
    return 0;
}

