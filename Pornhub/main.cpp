#include <iostream>
#include <cstdlib>
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
//-------
void menu()
{
    cout <<endl<< "Witaj w grze Pornhub The Game" << endl<<endl;
    cout << PL("Kim chcesz zagraÊ?")<< endl;
    cout << "----------------"<<endl;
    cout << "1. Gorzki"<<endl;
    cout << "2. Martyna"<<endl;
    cout << "3. Filip"<<endl;
    cout << "4. Marta"<<endl;
    cout << "5. Michal"<<endl;
    cout << "6. Puma" <<endl;
    cout << "7. Patryk"<< endl;
    cout << "8. Ala"<<endl;
    cout << "9. Laura"<<endl;
    cout << "10. Buba"<<endl;
    cout << "11. Ryba"<<endl;
    cout << "12. Krzysiek"<<endl;
    cout << "----------------";
    cout<< endl<<"Wybierz postac: ";
}
void wyborpostaci()
{
              int wyborpost;
              cin >> wyborpost;
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
                     cout<<endl<<PL("Grasz Martynπ.");
                     break;
                     }


              case 3://mendzioch
                     {
                     system("cls");
                     cout<<endl<<"Grasz Mendom.";
                     break;
                     }


              case 4://martaska
                     {
                     system("cls");
                     cout<<endl<<"Grasz Martom.";
                     break;
                     }
              case 5://Michal
                {
                    system("cls");
                    cout<<endl<<PL("Grasz Miha≥kiem.");
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
                case 8;
                {
                    system("cls");
                    cout<<endl<<"Grasz";
                    break;
                }

       }
}

int main()
{
              menu();//menu
              wyborpostaci();//nwm czm to tak nazwalem

    return 0;
}
