#include <iostream>



void modificaRiferimentoA(int& x) {
  x = 20;
}
void modificaRiferimentoB(int x) {
  x = 50;
}

int main() {

  int num = 10;

  modificaRiferimentoA(num);
  std::cout << num << std::endl; 

  modificaRiferimentoB(num);
  std::cout << num << std::endl; 

  return 0;
};