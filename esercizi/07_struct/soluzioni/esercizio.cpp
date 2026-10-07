// Soluzione di riferimento: confrontala soltanto dopo il tuo tentativo.
#include <iostream>
#include <string>
#include <vector>
struct Studente { std::string nome; int voto; };
int main() {
    int n = 0;
    if (!(std::cin >> n) || n < 1 || n > 100) return 1;
    std::vector<Studente> studenti;
    for (int i = 0; i < n; ++i) {
        Studente studente{"", 0};
        if (!(std::cin >> studente.nome >> studente.voto) || studente.voto < 0 || studente.voto > 30) return 1;
        studenti.push_back(studente);
    }
    Studente migliore = studenti[0];
    for (const Studente& studente : studenti) {
        // > conserva il primo studente in caso di parità.
        if (studente.voto > migliore.voto) migliore = studente;
    }
    std::cout << migliore.nome << ' ' << migliore.voto << '\n';
}
