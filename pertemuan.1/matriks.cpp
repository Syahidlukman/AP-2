#include <iostream>
using namespace std;

int main() {
    int m1[2][2];
    int m2[2][2];
    int hasilTambah[2][2];
    int hasilKali[2][2];

//     cout << "Masukkan elemen matriks 1 (2x2):\n";
//     for(int i=0; i<2; i++) {
//         for(int j=0; j<2; j++) {
//             cout << "Elemen [" << i+1 << "][" << j+1 << "]: ";
//             cin >> m1[i][j];
//         }
//     }

//     cout << "Masukkan elemen matriks 2 (2x2):\n";
//     for(int i=0; i<2; i++) {
//         for(int j=0; j<2; j++) {
//             cout << "Elemen [" << i+1 << "][" << j+1 << "]: ";
//             cin >> m2[i][j];
//         }
//     }

//     // Penjumlahan matriks
//     for(int i=0; i<2; i++) {
//         for(int j=0; j<2; j++) {
//             hasilTambah[i][j] = m1[i][j] + m2[i][j];
//         }
//     }

//     // Perkalian matriks
//     for(int i=0; i<2; i++) {
//         for(int j=0; j<2; j++) {
//             hasilKali[i][j] = 0;
//             for(int k=0; k<2; k++) {
//                 hasilKali[i][j] = hasilKali[i][j] + m1[i][k] * m2[k][j];
//             }
//         }
//     }

//     cout << "\nHasil penjumlahan matriks:\n";
//     for(int i=0; i<2; i++) {
//         for(int j=0; j<2; j++) {
//             cout << hasilTambah[i][j] << " ";
//         }
//         cout << endl;
//     }

//     cout << "\nHasil perkalian matriks:\n";
//     for(int i=0; i<2; i++) {
//         for(int j=0; j<2; j++) {
//             cout << hasilKali[i][j] << " ";
//         }
//         cout << endl;
//     }

//     return 0;
// }