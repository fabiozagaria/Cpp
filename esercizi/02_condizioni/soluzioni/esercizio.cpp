// Soluzione di riferimento: confrontala soltanto dopo il tuo tentativo.
#include <iostream>
int main() {
    int voto = 0;
    if (!(std::cin >> voto) || voto < 0 || voto > 30) {
        std::cerr << "Voto non valido\n"; return 1;
    }
    // L ordine dei controlli permette di evitare condizioni ripetute.
    if (voto < 18) std::cout << "Insufficiente\n";
    else if (voto < 24) std::cout << "Sufficiente\n";
    else if (voto < 28) std::cout << "Buono\n";
    else std::cout << "Ottimo\n";
}
