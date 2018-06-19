#include <iostream>
#include <windows.h>
#include <stdlib.h>
#include <cstdlib>
#include <time.h>
#include <stdio.h>
#include <conio.h>

using namespace std;
char wybor;
int main()
{
    int iloraz;
    do
    {

    system("cls");
    cout << "" << endl;
    cout<< "     Menu" << endl;    //MENU
    cout<<"===============" << endl;
    cout<< '1' << ".Pole trapezu." << endl;
        cout<< '2' << ".Pole trojkata." << endl;
            cout << '3' << ".Pole kwadratu." << endl;
                cout << '4' << ".Wyjscie." << endl;
    float a, b, h;
        wybor = getch();
        switch(wybor)
        {
        case '1':
            {
                system("cls");
                cout << "      b      " << endl;
                cout << "      |    " << endl;
                cout << "    ========" << endl;
                cout << "    =       =" << endl;
                cout << " h--=        =" << endl;
                cout << "    =         =" << endl;
                cout << "    ============" << endl;
                cout << "       | " << endl;
                cout << "       a" << endl;
                cout << endl << endl;
                cout << "   Podaj dlugosc podstawy (a): ";
                cin >> a;
                system("cls");
                cout << "      b      " << endl;
                cout << "      |    " << endl;
                cout << "    ========" << endl;
                cout << "    =       =" << endl;
                cout << " h--=        =" << endl;
                cout << "    =         =" << endl;
                cout << "    ============" << endl;
                cout << "       | " << endl;
                cout << "       a" << endl;
                cout << endl << endl;
                cout << "       a = " << a << endl;
                cout << "   Podaj dlugosc podstawy (b): ";
                cin >> b;
                system("cls");
                cout << "      b      " << endl;
                cout << "      |    " << endl;
                cout << "    ========" << endl;
                cout << "    =       =" << endl;
                cout << " h--=        =" << endl;
                cout << "    =         =" << endl;
                cout << "    ============" << endl;
                cout << "       | " << endl;
                cout << "       a" << endl;
                cout << endl << endl;
                cout << "       a = " << a << endl;
                cout << "       b = " << b << endl;
                cout << "   Podaj wysokosc (h): ";
                cin >> h;
                system("cls");
                cout << "      b      " << endl;
                cout << "      |    " << endl;
                cout << "    ========" << endl;
                cout << "    =       =" << endl;
                cout << " h--=        =" << endl;
                cout << "    =         =" << endl;
                cout << "    ============" << endl;
                cout << "       | " << endl;
                cout << "       a" << endl;
                cout << endl << endl;
                cout << "       a = " << a << endl;
                cout << "       b = " << b << endl;
                cout << "       h = " << h<< endl;
                cout << endl;
                cout << "       Wzor = (a+b)*h/2" << endl;
                cout << "       Pole = " << "(" << a<< "+" << b << ")" << "*" << h << "/" << "2" << endl;
                cout << "       Pole = " << a+b*h/2 << "j2";
                                                                        cout << endl;
                                                                        cout << endl;
    cout << "Wcisnij dowolny klawisz."; getch();
                                                                if (b == -2)

                {
                    system("cls");
                    cout << endl;
                    cout << endl;
                    cout << "Dozwolone sa tylko cyfry dodatnie.";
                }

                break;
            }

        case '2':
            {
                system("cls");
                cout << "     " << endl;
                cout << "     =" << endl;
                cout << "     ==" << endl;
                cout << "     = =" << endl;
                cout << "  h--=  =" << endl;
                cout << "     =   =" << endl;
                cout << "     ======" << endl;
                cout << "       |" << endl;
                cout << "       a" << endl;
                cout << "     " << endl;
                cout << "     " << endl;
                cout << "   Podaj dlugosc podstawy (a): ";
                cin >> a;
                system("cls");
                cout << "     " << endl;
                cout << "     =" << endl;
                cout << "     ==" << endl;
                cout << "     = =" << endl;
                cout << "  h--=  =" << endl;
                cout << "     =   =" << endl;
                cout << "     ======" << endl;
                cout << "       |" << endl;
                cout << "       a" << endl;
                cout << "     " << endl;
                cout << "     " << endl;
                cout << "       a = " << a << endl;
                cout << "   Podaj wysokosc (h): ";
                cin >> h;
                system("cls");
                cout << "     " << endl;
                cout << "     =" << endl;
                cout << "     ==" << endl;
                cout << "     = =" << endl;
                cout << "  h--=  =" << endl;
                cout << "     =   =" << endl;
                cout << "     ======" << endl;
                cout << "       |" << endl;
                cout << "       a" << endl;
                cout << "     " << endl;
                cout << "     " << endl;
                cout << "       a = " << a << endl;
                cout << "       h = " << h << endl;
                cout << endl;
                cout << "       Wzor = a*h/2" << endl;
                cout << "       Pole = " << a << "*" << h << "/2" << endl;
                cout << "       Pole = " << a*h/2 << "j2" << endl;
                        cout << endl;
    cout << "Wcisnij dowolny klawisz."; getch();

                break;
            }

        case '3':
            {
                system("cls");
                cout << "  " << endl;
                cout << "  " << endl;
                cout << "     =======" << endl;
                cout << "     =     =" << endl;
                cout << "  h--=     =" << endl;
                cout << "     =     =" << endl;
                cout << "     =======" << endl;
                cout << "        |" << endl;
                cout << "        a" << endl;
                cout << "     " << endl;
                cout << "     " << endl;
                cout << "Podaj dlugosc podstawy (a): ";
                cin >> a;
                system("cls");
                cout << "  " << endl;
                cout << "  " << endl;
                cout << "     =======" << endl;
                cout << "     =     =" << endl;
                cout << "  h--=     =" << endl;
                cout << "     =     =" << endl;
                cout << "     =======" << endl;
                cout << "        |" << endl;
                cout << "        a" << endl;
                cout << "     " << endl;
                cout << "     " << endl;
                cout << "       a = " << a << endl;
                cout << "Podaj wysokosc (h): ";
                cin >> h;
                system("cls");
                cout << "  " << endl;
                cout << "  " << endl;
                cout << "     =======" << endl;
                cout << "     =     =" << endl;
                cout << "  h--=     =" << endl;
                cout << "     =     =" << endl;
                cout << "     =======" << endl;
                cout << "        |" << endl;
                cout << "        a" << endl;
                cout << "     " << endl;
                cout << "     " << endl;
                cout << "       a = " << a << endl;
                cout << "       h = " << h << endl;
                cout << "" << endl;
                cout << "       Wzor = a*h" << endl;
                cout << "       Pole = " << a << "*" << h << endl;
                cout << "       Pole = " << a*h << "j2" << endl;
                        cout << endl;
    cout << "Wcisnij dowolny klawisz."; getch();
                break;
            }
            case '4':
            {
                system("cls");
                cout << endl;
                cout << "Zakonczenie za: 3" << endl;
                Sleep(1000);
                system("cls");
                cout << endl;
                cout << "Zakonczenie za: 2" << endl;
                Sleep(1000);
                system("cls");
                cout << endl;
                cout << "Zakonczenie za: 1" << endl;
                Sleep(1000);
                exit(1);
            }
            iloraz++;
        }
        }while(iloraz>=1000);
    return 0;
}
