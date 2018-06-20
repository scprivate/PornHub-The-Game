#include <iostream>
#include <windows.h>
#include <stdlib.h>
#include <cstdlib>
#include <time.h>
#include <stdio.h>
#include <conio.h>


using namespace std;

int wybor;

int ksiazka, ram, monsterek;
       int gold=200;
void eq()
{
ksiazka=0;
ram=0;
monsterek=0;
}
void sklep()
{
       int wybor;
       l:
       cout<<endl<<"      sklep"<<endl;
       cout<<"----------------"<<endl;
       cout<<"1.kup ksiazka    cena: 50zl"<<endl;
       cout<<"2.kup ram     cena: 60zl"<<endl;
       cout<<"3.kup monsterek     cena: 5zl"<<endl;
       cout<<"4.cofnij do menu";
       cout<<endl<<endl<<endl;
       cout<<"Gold: "<<gold<<endl;
       wybor=getch();
       system("cls");
       if(wybor=='1')
       {
              if((gold-50)<0)
              {
                     cout<<endl<<"Nie posiadasz wystarczajaca pieniedzy"<<endl;
                     getch();
                     system("cls");
                     goto l;
              }
              gold=gold-50;
              ksiazka=ksiazka+1;
              goto l;
       }
       if(wybor=='2')
       {
              if((gold-60)<0)
              {
                     cout<<endl<<"Nie posiadasz wystarczajaca pieniedzy"<<endl;
                     getch();
                     system("cls");
                     goto l;
              }
              gold=gold-60;
              ram=ram+1;
              goto l;
       }
       if(wybor=='3')
       {
              if((gold-5)<0)
              {
                     cout<<endl<<"Nie posiadasz wystarczajaca pieniedzy"<<endl;
                     getch();
                     system("cls");
                     goto l;
              }
              gold=gold-5;
              monsterek=monsterek+1;
              goto l;
       }
       if(wybor=='4')
       {
       }

}
int main()
{
       int wybor2;
       eq();
       x:
              cout<<endl<<"    Menu"<<endl;
              cout<<"----------------"<<endl;
       cout<<"1.ekwipunek"<<endl;
       cout<<"2.sklep"<<endl;
       cout<<"3.Sprzedaj cos"<<endl<<endl<<endl;
       cout<<"Gold: "<<gold<<endl;
       wybor2=getch();
       system("cls");
       if (wybor2=='1')
       {
              if((ksiazka==0)&&(ram==0)&&(monsterek==0))
              {
                     cout<<endl<<"Ekwipunek"<<endl;
                     cout<<"-----------------"<<endl<<endl;
                     cout<<"NIE POSIADASZ NIC"<<endl;
                     cout<<endl<<endl<<"wcisnij dowolny przycisk aby powrocic";
                     getch();
                     system("cls");
                     goto x;
              }
              cout<<endl<<"Ekwipunek"<<endl<<endl;
              if(ksiazka>0)
              {
                     cout<<"Posiadasz ksiazka: "<<ksiazka<<endl;
              }
              if(ram>0)
              {
                     cout<<"posiadasz ram: "<<ram<<endl;
              }
              if(monsterek>0)
              {
                     cout<<"posiadasz monsterek: "<<monsterek<<endl;
              }
              cout<<endl<<endl<<"wcisnij dowolny przycisk aby powrocic";
              getch();
              system("cls");
              goto x;
       }
       else if(wybor2=='2')
       {
              sklep();
              goto x;
       }
       else if(wybor2=='3')
       {
              p:
       cout<<endl<<"Sprzedaj: "<<endl;
       cout<<"----------------"<<endl;
       cout<<"1. ksiazka       |   Posiadasz: "<<ksiazka<<endl;
       cout<<"2. ram           |   Posiadasz: "<<ram<<endl;
       cout<<"3. monsterek     |   Posiadasz: "<<monsterek<<endl;
       cout<<"4. wroc do menu"<<endl<<endl;
       cout<<"Gold: "<<gold<<endl;
       int wybor3;
       wybor3=getch();
       system("cls");
              if(wybor3=='1')
       {
              if(ksiazka==0)
              {
                     system("cls");
                     cout<<endl<<"Nie posiadasz tego przedmiotu"<<endl;
                     cout<<endl<<endl<<"wcisnij dowolny przycisk aby powrocic";
                     getch();
                     system("cls");
                     goto p;
              }
              else
              ksiazka=ksiazka-1;
              gold=gold+25;
              goto p;
       }
              if(wybor3=='2')
       {
              if(ram==0)
              {
                     system("cls");
                     cout<<endl<<"Nie posiadasz tego przedmiotu"<<endl;
                     cout<<endl<<endl<<"wcisnij dowolny przycisk aby powrocic";
                     getch();
                     system("cls");
                     goto p;
              }
              else
              ram=ram-1;
              gold=gold+30;
              goto p;
       }
              if(wybor3=='3')
       {
              if(monsterek==0)
              {
                     system("cls");
                     cout<<endl<<"Nie posiadasz tego przedmiotu"<<endl;
                     cout<<endl<<endl<<"wcisnij dowolny przycisk aby powrocic";
                     getch();
                     system("cls");
                     goto p;
              }
              else
              monsterek=monsterek-1;
              gold=gold+3;
              goto p;
       }
              if(wybor3=='4')
       {
              goto x;
       }

       }

}
