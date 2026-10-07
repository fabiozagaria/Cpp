#include <iostream>
#include <string>
int main() {
    std::string nome;
    std::getline(std::cin, nome); // Accetta anche spazi nel nome.
    std::cout << "Ciao, " << nome << "!\n";
}
