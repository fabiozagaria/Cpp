// Soluzione di riferimento: confrontala soltanto dopo il tuo tentativo.
#include <iostream>
#include <vector>
int main() {
    int n = 0;
    if (!(std::cin >> n) || n < 1 || n > 100) return 1;
    std::vector<int> numeri;
    for (int i = 0; i < n; ++i) {
        int valore = 0;
        if (!(std::cin >> valore) || valore < -1000 || valore > 1000) return 1;
        numeri.push_back(valore);
    }
    int minimo = numeri[0], massimo = numeri[0], somma = 0;
    for (int valore : numeri) {
        if (valore < minimo) minimo = valore;
        if (valore > massimo) massimo = valore;
        somma += valore;
    }
    // La conversione prima della divisione conserva la parte decimale.
    std::cout << "Minimo: " << minimo << "\nMassimo: " << massimo
              << "\nMedia: " << static_cast<double>(somma) / n << '\n';
}
