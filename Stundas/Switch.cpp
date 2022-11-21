#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int a, b ,c, d;
    float x1, x2;

    cout << "IEVADI SAVU KVADRATVIENADOJUMU!" << endl;
    cin >> a >> b >> c;

    d = (b*b) - 4*a*c;
    x1 = (-b + sqrt(d))/(2*a);
    x2 = (-b - sqrt(d))/(2*a);

    if(d > 0){
        d = 1;
    }else if(d < 0){
        d = 2;
    }

    switch(d){
    case 0:
        cout << x1 << x2 << endl;
        break;
    case 1:
        cout << "Saknes: " << " " << x1 << " " << x2 << endl;
        break;
    case 2:
        cout << "Saknu nav!" << endl;
        break;
    }
}
