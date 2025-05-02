#include <stdio.h>
#include <math.h>

int main() {
    int n;
    int a = 5; // Suku pertama
    int r = 3; // Rasio
    int sum = 0;
    
    // Meminta input jumlah suku dari pengguna
    printf("Masukkan jumlah suku deret: ");
    scanf("%d", &n);
    
    // Menghitung jumlah deret
    for (int i = 0; i < n; i++) {
        sum += a * pow(r, i);
    }
    
    // Menampilkan hasil
    printf("Jumlah deret hingga %d suku adalah: %d\n", n, sum);
    
    return 0;
}