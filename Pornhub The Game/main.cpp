#include <iostream>
#include <windows.h>
#include <stdlib.h>
#include <cstdlib>
#include <time.h>
#include <stdio.h>
#include <conio.h>
#include <windows.h>

using namespace std;
//-----------
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
zzz

void losowanie()
{
       srand(time(NULL));
}


void intro()
{
   HANDLE kolor;
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
    cout <<endl<<PL("Kim chcesz zagra�?")<< endl;
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
    cout<< endl<<PL("Wybierz posta�: ");

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

    cout <<endl<<PL("Kim chcesz zagra�?")<< endl;
    cout << "----------------"<<endl;
    cout << "1. Gorzki"<<endl;
    cout << "2. Martyna"<<endl;
    cout << "3. Filip"<<endl;
    cout << "4. Marta"<<endl;
    cout << PL("5. Micha�")<<endl;
    cout << "6. Puma" <<endl;
    cout << "7. Patryk"<< endl;
    cout << "8. Ala"<<endl;
    cout << "9. Laura"<<endl;
    cout << "10. Buba"<<endl;
    cout << "11. Ryba"<<endl;
    cout << "12. Krzysiek"<<endl;
    cout << "----------------";
    cout<< endl<<PL("B��d, spr�b�j ponownie: ");


                     }
                     y:
              switch(wyborpost)
              {

              case 1: //Gorzki
                     {
                     system("cls");
                     cout<<endl<<"Grasz ekonomem.";
                     losowanie();
                      break;
                     }


              case 2://martyna
                     {
                     system("cls");
                     cout<<endl<<PL("Grasz Wark�.");
                     break;
                     }


              case 3://mendzioch
                     {
                     system("cls");
                     cout<<endl<<PL("Grasz hipokryt�.");
                     break;
                     }


              case 4://martaska
                     {
                     system("cls");
                     cout<<endl<<PL("Grasz amatork�.");
                     break;
                     }
              case 5://Michal
                {
                    system("cls");
                    cout<<endl<<PL("Grasz programist�.");
                    break;
                }
             case 6://Puma
                 {
                     system("cls");
                     cout<<endl<<PL("Grasz mark� plecak�w.");
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
                    cout<<endl<<PL("Grasz pani� siln� i niezale�n�.");
                    break;
                }
            case 9://Laura
                    {
                        system("cls");
                        cout<<endl<<PL("Grasz �on� Admina.");
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
              intro();
              menu();//menu
              wyborpostaci();//nwm czm to tak nazwalem
    return 0;
}

