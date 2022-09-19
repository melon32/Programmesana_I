#include <iostream>

using namespace std;

int main()
{
   char op;
   float num1, num2;

   cout << "Ievadi savu ciparu: ";
   cin >> num1;
   cout << "Ievadi savu operatoru: ";

   //Dod iespeju ievadit operatorus
   cin >> op;
    cout << "Ievadi savu otru ciparu: ";
    cin >> num2;

   //Paldies w3skola
   switch (op) {

        //Ja ieliek +
    case '+':
        cout << num1 + num2;
        break;

    //Ja ieliek -
    case '-':
        cout << num1 - num2;
        break;

    //Ja ieliek *
    case '*':
        cout << num1 * num2;
        break;

    //Ja ieliek /
    case '/':
        cout << num1 / num2;
        break;


    //Ja operators nav no dotajiem tad :<
    default:
        cout << "Nav pareiz operators!!!!";
        break;

   }

}
