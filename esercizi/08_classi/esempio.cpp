#include <iostream>
class Contatore {
    int valore_ = 0; // Stato privato: si modifica solo tramite i metodi.
public:
    void incrementa() { ++valore_; }
    int valore() const { return valore_; }
};
int main() {
    Contatore contatore;
    contatore.incrementa();
    std::cout << contatore.valore() << '\n';
}
