#include <iostream>

int main() {
    double r, volume;
    const double PI = 3.14;

    std::cout << "Masukkan jari-jari: ";
    std::cin >> r;

    volume = ((float)4.0 / 3.0) * PI * (r * r * r);

    std::cout << "Volume bola: " << volume << std::endl;

    return 0;
}