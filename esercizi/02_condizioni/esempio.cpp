#include <iostream>
int main() {
    const int numero = 7;
    if (numero % 2 == 0) { // Il resto zero indica un numero pari.
        std::cout << "Pari\n";
    } else {
        std::cout << "Dispari\n";
    }
}
