#include <iostream>
#include <cmath
using namespace std;
int main(){
    double r, volume, luas, luas_permukaan;
    cout << "masukkan jari jari bola: ";
    cin >> r;

    volume = (4.0 / 3.0)* M_PI * pow(r, 3);
    luas_permukaan = 4* M_PI * pow(r, 2);

    cout<<"volume bola: "<<volume<<endl;
    cout<<"luas permukaan bola: "<< luas_permukaan << endl;

    return 0;
}