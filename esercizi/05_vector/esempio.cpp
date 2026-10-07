#include <iostream>
#include <vector>
int main() {
    std::vector<int> numeri{2, 4};
    numeri.push_back(6); // La sequenza ora contiene tre elementi.
    for (int valore : numeri) std::cout << valore << '\n';
}
