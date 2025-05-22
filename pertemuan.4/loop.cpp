#include <iostream>
using namespace std;

int main() {
    // goto label,yaitu operator yang bisa mengatur perpindahan output
    // helo world, fasilkom TI, ilmu komputer,IKLC
    // -> hello world, IKLC, ilmu komputer,fasilkom - ti

    // a:
    //     cout << "hello world" << endl;
    //     goto d;
    // b:
    //     cout << "fasilkom - TI" << endl;
    //     return 0;
    // c:
    //     cout << "ilmu komputer" << endl;
    //     goto b;
    // d:
    //     cout << "IKLC" << endl;
    //     goto c;

    // menampilkan bilangan genap 10 -> 2 dengan goto
    // int i = 10;
    // genap:
    // if (i % 2 == 0) {
    //     cout << i << " ";
    // } i--;

    // if (i >= 2) {
    //     goto genap;
    // } 

    // statement while,yaitu operator yang Menjalankan blok kode selama kondisi true.

    // int i = 1;
    // while (i <= 10){
    //     if (i % 2 == 0){
    //         cout << i << " ";
    //     } i++;
    // }

    // statement DO-while,yaitu operator yang Menjalankan blok kode setidaknya sekali, kemudian memeriksa kondisi.
    // int i = 1;
    // do{
    //     cout << i << endl;
    // } while(i <= 0);

    // statement for, yaitu operator yang Menjalankan blok kode sejumlah iterasi yang telah ditentukan
    // for (inisialisasi, kondisi, increase)

    // for (int i = 1; 1 <= 5; i+= 2){
    //     cout << "hello world" << endl;
    // }

    // // nested for,yaitu operator yang Menggunakan for di dalam for loop lainnya untuk iterasi multidimensi.
    // for (int i = 1; i <= 5; i++){
    //     for (int j = 1; j <= 5; j++){
    //         cout << " ";
    //     }
    //     cout << endl;
    // }

    // segitiga siku-siku
    // for (int i = 1; i <= 5; i++){
    //     for (int j = 1; j <= i; j++){
    //         cout << "**";
    //     }
    //     cout << endl;
    // }
}
