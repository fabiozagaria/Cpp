// Soluzione di riferimento: confrontala soltanto dopo il tuo tentativo.
#include <iostream>
void scambia(int& a, int& b) {
    const int temporaneo = a; // Salviamo a prima di sovrascriverlo.
    a = b;
    b = temporaneo;
}
int main() {
    int a = 0, b = 0;
    if (!(std::cin >> a >> b)) { std::cerr << "Input non valido\n"; return 1; }
    scambia(a, b);
    std::cout << a << ' ' << b << '\n';
}
