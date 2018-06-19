#include <iostream>
#include <cstdlib>
#include <conio.h>

using namespace std;

void menu()
{
       cout <<endl<< "Witaj w grze Pornhub The Game" << endl<<endl;
    cout << "Kim chcesz zagrac?"<< endl;
    cout << "----------------"<<endl;
    cout << "1. Gorzki"<<endl;
    cout << "2. Martyna"<<endl;
    cout << "3. Filip"<<endl;
    cout << "4. Marta"<<endl;
    cout << "----------------";
}
void wyborpostaci()
{
              int wyborpost;
              wyborpost = getch();
              switch(wyborpost)
              {
              case'1': //Gorzki
                     {
                     system("cls");
                     cout<<endl<<"Grasz Gorzkim.";
                      break;
                     }


              case'2'://martyna
                     {
                     system("cls");
                     cout<<endl<<"Grasz Martyna.";
                     break;
                     }


              case'3'://mendzioch
                     {
                     system("cls");
                     cout<<endl<<"Grasz Mendom.";
                     break;
                     }


              case'4'://martaœka
                     {
                     system("cls");
                     cout<<endl<<"Grasz Martom.";
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
