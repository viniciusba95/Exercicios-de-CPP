#include <iostream>

int main() {

  double c;

  std::cout << "Digite a temperatura em Celsius: " << '\n';
  std::cin >> c;

  std::cout << "A temperatura convertida em Fahrenheit é: " << (c * 9/5) + 32 << '\n'; //já imprime e realiza a formula direto

  return 0;
}
