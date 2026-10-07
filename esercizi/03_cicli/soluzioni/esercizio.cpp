// Soluzione di riferimento: confrontala soltanto dopo il tuo tentativo.
#include <iostream>
int main() {
    int n = 0;
    if (!(std::cin >> n) || n < 1 || n > 1000) {
        std::cerr << "Limite non valido\n"; return 1;
    }
    int somma = 0; // Il massimo 500500 rientra nel tipo int.
    for (int i = 1; i <= n; ++i) somma += i;
    std::cout << "Somma: " << somma << '\n';
}
