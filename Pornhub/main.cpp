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
    cout << "5. Michal"<<endl;
    cout << "6. Puma" <<endl;
    cout << "7. Patryk"<< endl;
    cout << "8. Ala"<<endl;
    cout << "9. Laura"<<endl;
    cout << "10. Buba"<<endl;
    cout << "11. Ryba"<<endl;
    cout << "12. Krzysiek"<<endl;
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


              case'4'://martaska
                     {
                     system("cls");
                     cout<<endl<<"Grasz Martom.";
                     break;
                     }
              case
       }
}

int main()
{
              menu();//menu
              wyborpostaci();//nwm czm to tak nazwalem

    return 0;
}
