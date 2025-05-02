#include <iostream> // header untuk c++
#include <conio.h>
using namespace std;

int main() {
	string nama;
	char kom; jeniskelamin;
	int nim;
	float ip;
	/*ini untuk komen
	beberapa baris*/

    cout<<"hello world"<< endl;

    cout<<"masukkan nama anda: "<<endl;
    getline(cin, nama);
    cout<<"masukkan kom: "<<endl;
    cin>>kom;
    cout<<"masukkan nim"<<endl;
    cin>>nim;
    cout<<"masukkan ip"<<endl;
    cin>>ip;
    
    cout<<"masukkan jenis kelamin(L/P): ";
    jeniskelamin = getche(); //agar karakter langsung tampil tanpa enter
// untuk ouput
    cout<<nama<<endl;
    cout<<nim<<endl;
    cout<<ip<<endl;
    putchar(jeniskelamin);

}