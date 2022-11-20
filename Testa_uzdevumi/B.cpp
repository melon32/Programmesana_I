#include <iostream>

using namespace std;

int main()
{
    int a, b ,c , d;

    cout << "Ieraksti ciparu: " << endl;
    cin >> d;

    for(a = 1; a <= d; a++){
        for(b = 1; b <= d; b++){
            for(c = 1; c <= d; c++){
                if((a*a) + (b*b) == (c*c)){
                    if(a <= b && b <= c && c <= d){
                        cout << a << " " << b << " " << c << endl;
                    }
                }
            }
        }
    }
}
