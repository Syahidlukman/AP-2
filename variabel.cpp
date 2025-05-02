#include <iostream>
using namespace std;

string namaglobal = "ilmu";

void namavariabel(){
    string namalokal = "komputer";

    // coba akses
    cout << namalokal << endl;

    
    // coba akses
    cout << namaglobal << endl;


}

int main(){
    namavariabel();

    // coba akses
    cout << namaglobal << endl;

    // coba akses
     cout << namalokal << endl;

}