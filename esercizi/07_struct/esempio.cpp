#include <iostream>
struct Punto { double x; double y; };
int main() {
    Punto punto{2.0, 3.0}; // I valori seguono l ordine dei campi.
    std::cout << punto.x << ' ' << punto.y << '\n';
}
