#include <iostream>
void perValore(int x) {
    x = 20; // Modifica solo la copia locale.
    std::cout << "Copia dentro la funzione: " << x << '\n';
}
void perRiferimento(int& x) { x = 30; } // Modifica l originale.
int main() {
    int numero = 10;
    perValore(numero);
    std::cout << numero << '\n'; // 10
    perRiferimento(numero);
    std::cout << numero << '\n'; // 30
}
