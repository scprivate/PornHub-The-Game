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

void intro()
{
    cout<<endl<<endl<<"DramaMaker Studio przedstawia";
       getch();
       system("cls");
}

void menu()
{
    cout << PL("Kim chcesz zagra�?")<< endl;
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
    cout<< endl<<PL("Wybierz posta�: ");

}
void wyborpostaci()
{
       int wyborpost;
              while(int oo=0);
              {
                     for(;;)
                     {
                     cin>>wyborpost;
                     system("cls");
                     if ((wyborpost<=12)&&(wyborpost>=0))
                     {
                      goto x;
                     }
                     if (!(wyborpost))
                     {
                            goto x;
                     }
                                          cout<<endl<<PL("Wpisano b��dny znak lub za du�� liczb�.")<<endl<<endl;
                     }
              }
              x:
              switch(wyborpost)
              {

              case 1: //Gorzki
                     {
                     system("cls");
                     cout<<endl<<"Grasz ekonomem.";
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

