// Soluzione di riferimento: confrontala soltanto dopo il tuo tentativo.
#include <iostream>
#include <string>
int main() {
    std::string riga;
    if (!std::getline(std::cin, riga)) return 1;
    const std::string vocali = "aeiouAEIOU";
    int totale = 0;
    for (char carattere : riga) {
        // npos indica che il carattere non è stato trovato.
        if (vocali.find(carattere) != std::string::npos) ++totale;
    }
    std::cout << "Vocali: " << totale << '\n';
}
