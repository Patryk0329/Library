#include <iostream>
#include "Vector.h"

int main() {
    // Inicjalizacja wektorów
    Iwektor3D v1(2, 2, 2);
    Iwektor3D v2(1, 1, 1);

    // Wypisanie wyników operacji
    std::cout << "v1 + v2 = " << v1 + v2 << std::endl;
    std::cout << "v1 - v2 = " << v1 - v2 << std::endl;
    std::cout << "v1 * 2 = " << v1 * 2 << std::endl;
    std::cout << "2 * v1 = " << 2 * v1 << std::endl;
    std::cout << "v1 * v2 = " << (v1 * v2) << std::endl;
    std::cout << "v1[0] == (v2[0] = 2 * v2[0]) : " << (v1[0] == (v2[0] = 2 * v2[0])) << std::endl;
    std::cout << "v1[0] != (v2[0] = 2 * v2[0]) : " << (v1[0] != (v2[0] = 2 * v2[0])) << std::endl;
    std::cout << "-v2 = " << -v2 << std::endl;

    return 0;
}
