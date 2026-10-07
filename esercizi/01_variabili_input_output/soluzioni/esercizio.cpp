// Soluzione di riferimento: confrontala soltanto dopo il tuo tentativo.
#include <iostream>
int main() {
    double base = 0.0, altezza = 0.0;
    // Prima controlliamo la lettura, poi il dominio dei valori.
    if (!(std::cin >> base >> altezza) || base <= 0 || altezza <= 0) {
        std::cerr << "Dati non validi\n"; return 1;
    }
    std::cout << "Area: " << base * altezza << "\nPerimetro: " << 2 * (base + altezza) << '\n';
}
