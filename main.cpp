#include <iostream>
#include <cmath>
#include <windows.h>
#include <stdio.h>
using namespace std;



int main()
{

  repeatme:
      char restart;
       float a;
       float p;
       float r;
       int percent;
       enterPercent:
       cout <<"Enter percent: ";cin >> percent; cout << endl;
       r = percent * .01;
       enterAmountofmoney:
       cout << "Enter amount of money: "; cin >> p; cout << endl;



       char dmy;
       cout << "Enter 'd' for day, 'm' for month and 'y' for year "; cin >> dmy; cout << endl;
      switch(dmy){
      case 'd':

          int dayAmount;
          cout << "Enter amount of days: "; cin >> dayAmount; cout << endl;


          for(int day = 1; day <= dayAmount;day++){a = p * pow(1+r, day);
          cout << "Day: " << day  << " ----------- "<< "Amount of money: " ;
           printf("%.2lf", a); cout << endl;
          }



       break;
      case 'm':
          month:
        int monthAmount;
          cout << "Enter amount of months: "; cin >> monthAmount; cout << endl;

          for( int month = 1; month <= monthAmount;month++){
          a = p * pow(1+r, month);
          cout << "Month:  " << month  << " ----------- "<< "Amount of money: ";
           printf("%.2lf", a); cout << endl;
      }

       break;
      case 'y':
          year:
        int yearAmount;
          cout << "Enter amount of years: "; cin >> yearAmount; cout << endl;

          for(int year = 1; year <= yearAmount;year++){
          a = p * pow(1+r, year);
          cout << "Year " << year  << " ----------- " << "Amount of money: ";
           printf("%.2lf", a);
           cout << endl;
      }

       break;
      default:
        cout << "You didn't enter d,m,y" << endl;

       cout << "Enter 'r' to recalculate: ";
       cin >> restart; cout << endl;
       switch (restart){
   case 'r':
       system("cls");
      goto repeatme;
    break;
   default:
    system("cls");
       }

}}

