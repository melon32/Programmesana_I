//Doti divi naturali skaitli, atrast visus abu skaitlu kopigos dalitajus.
//jabut iespejai izpildit atkartoti, neizejot no programmas.

#include <iostream>

using namespace std;

int main()
{
    while(true){
        int n1, n2, i;
        cout << endl;
        cout << "------------------------" << endl;
        cout << "First number: ";
        cin >> n1;
        cout << "Second number: ";
        cin >> n2;

        for(i=1; i <= n1 && i <= n2; i++){

        if(n1%i == 0 && n2%i == 0){
            cout << i << " ";


        }

    }
    char rez;
    cout << endl;
    cout << "Do you want to continue?" << endl;
    cout << "y/n: " << endl;
    cin >> rez;

    if(rez == 'n'){
        cout << "Have a nice day!" << endl;
        break;
    }
    if(rez == 'y'){
        continue;
    }
}


}
