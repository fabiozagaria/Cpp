// Soluzione di riferimento: confrontala soltanto dopo il tuo tentativo.
#include <iostream>
class Salvadanaio {
    int saldo_ = 0;
public:
    bool deposita(int importo) {
        // Controlliamo il limite prima di sommare: nessun overflow.
        if (importo <= 0 || importo > 100000 || saldo_ > 100000 - importo) return false;
        saldo_ += importo; return true;
    }
    bool preleva(int importo) {
        if (importo <= 0 || importo > saldo_) return false;
        saldo_ -= importo; return true;
    }
    int saldo() const { return saldo_; }
};
int main() {
    Salvadanaio salvadanaio;
    std::cout << "Deposito: " << salvadanaio.deposita(1000) << '\n';
    std::cout << "Prelievo 300: " << salvadanaio.preleva(300) << '\n';
    std::cout << "Prelievo 800: " << salvadanaio.preleva(800) << '\n';
    std::cout << "Saldo: " << salvadanaio.saldo() << '\n';
}
