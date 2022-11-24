#include <iostream>

using namespace std;

const int lielarinda = 4, lielakolona = 3;

bool zero_rinda(int prin, int lielais[lielarinda][lielakolona]){
    for(int kol = 0; kol < lielakolona; kol++ ){
        if(lielais[prin][kol] != 0){
            return false;
        }
    }

return true;
}

bool vien_rinda(int prin, int lielais[lielarinda][lielakolona]){
    for(int kol = 0; kol < lielakolona; kol++){
        if(lielais[prin][kol] != 1){
            return false;
        }
    }
return true;
}

bool zero_kolona(int pkol, int lielais[lielarinda][lielakolona]){
    for(int rin = 0; rin < lielarinda; rin++){
        if(lielais[rin][pkol] != 0){
            return false;
        }
    }
return true;
}

bool viena_kolona(int pkol, int lielais[lielarinda][lielakolona]){
    for(int rin = 0; rin < lielarinda; rin++){
        if(lielais[rin][pkol] != 1){
            return false;
        }
    }
return true;
}


int main()
{
   cout << "-----------------------" << endl;

   int lielais[lielarinda][lielakolona] = {
       {1, 0, 1},
       {1, 0, 0},
       {1, 0, 1},
       {1, 0, 1},
   };

    int oneks, oners, zeroks, zerors;
    oneks = oners = zeroks = zerors = 0;

    for(int rindas = 0; rindas < lielarinda; rindas++){
        if(zero_rinda(rindas, lielais)){
            zerors -=- 1;
        }
        
        if(vien_rinda(rindas, lielais)){
            oners += 1;
        }

    }

    for(int kolonas = 0; kolonas < lielakolona; kolonas++){
        if(zero_kolona(kolonas, lielais)){
            zeroks += 1;
        }

        if(viena_kolona(kolonas, lielais)){
            oneks += 1;
        }
    }
    
    cout << "Rindas, kuras sastav tikai no 0: " << zerors << endl;
    cout << "Rindas, kuras sastav tikai no 1: " << oners << endl;
    cout << "Kolonas, kuras sastav tikai no 0: " << zeroks << endl;
    cout << "Kolonas, kuras sastav tikai no 1: " << oneks << endl;



}
