#include <iostream>
#include <windows.h>
#include <stdlib.h>
#include <cstdlib>
#include <time.h>
#include <stdio.h>
#include <conio.h>

using namespace std;
//-----------
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
       cout<<"PORNHUB THE GAME";
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
                                          system("cls");

    cout <<endl<<PL("Kim chcesz zagraÊ?")<< endl;
    cout << "----------------"<<endl;
    cout << "1. Gorzki"<<endl;
    cout << "2. Martyna"<<endl;
    cout << "3. Filip"<<endl;
    cout << "4. Marta"<<endl;
    cout << PL("5. Micha≥")<<endl;
    cout << "6. Puma" <<endl;
    cout << "7. Patryk"<< endl;
    cout << "8. Ala"<<endl;
    cout << "9. Laura"<<endl;
    cout << "10. Buba"<<endl;
    cout << "11. Ryba"<<endl;
    cout << "12. Krzysiek"<<endl;
    cout << "----------------";
    cout<< endl<<PL("B≥πd, sprÛbÛj ponownie: ");


                     }
                     y:
              switch(wyborpost)
              {

              case 1: //Gorzki
                     {
                     system("cls");
                     cout<<endl<<"Grasz ekonomem.";
                     cout<<endl<<"Charyzma: ";
                     SetConsoleTextAttribute(kolor, 12);
                     cout<<"30/60";
                     SetConsoleTextAttribute(kolor, 8);
                     cout<<endl<<"Ekwipunek: ";
                     SetConsoleTextAttribute(kolor, 11);
                     cout<<"Okulary,";
                     SetConsoleTextAttribute(kolor, 8);
                      break;
                     }


              case 2://martyna
                     {
                     system("cls");
                     cout<<endl<<PL("Grasz Warkπ.");
                     break;
                     }


              case 3://mendzioch
                     {
                     system("cls");
                     cout<<endl<<PL("Grasz hipokrytπ.");
                     break;
                     }


              case 4://martaska
                     {
                     system("cls");
                     cout<<endl<<PL("Grasz amatorkπ.");
                     break;
                     }
              case 5://Michal
                {
                    system("cls");
                    cout<<endl<<PL("Grasz programistπ.");
                    break;
                }
             case 6://Puma
                 {
                     system("cls");
                     cout<<endl<<PL("Grasz markπ plecakÛw.");
                     break;
                 }
             case 7://Patryk
                {
                    system("cls");
                    cout<<endl<<"Grasz informatykiem.";
                    break;
                }
            case 8://Ala
                {
                    system("cls");
                    cout<<endl<<PL("Grasz paniπ silnπ i niezaleønπ.");
                    break;
                }
            case 9://Laura
                    {
                        system("cls");
                        cout<<endl<<PL("Grasz øonπ Admina.");
                        break;
                    }
            case 10://Buba
                {
                    system("cls");
                    cout<<endl<<"Grasz ukraincem.";
                    break;
                }
            case 11://Ryba
                {
                    system("cls");
                    cout<<endl<<"Grasz kibolem.";
                    break;
                }
            case 12://Krzysiek
                {
                    system("cls");
                    cout<<endl<<"Grasz Villagerem";
                    break;
                }
              }



}

int main()
{
       HideCursor();
              intro();
              introtest();
              menu();//menu
              wyborpostaci();//nwm czm to tak nazwalem
              ekwipunek();
    return 0;
}

