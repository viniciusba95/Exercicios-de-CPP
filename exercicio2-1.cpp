#include <iostream>

int main() {

  float n1 = {0};
  float n2 = {0};
  float n3 = {0};

  std::cout << "Verificação de qual número é maior! \n" << "Favor digite o primeiro número: ";
  std::cin >> n1;

  if (std::cin.fail()) {
    std::cout << "Erro! Você não digitou um número válido.\n";
    return 1; // Encerra o programa
  }

  std::cout << "Favor digite o segundo número: ";
  std::cin >> n2;

  if (std::cin.fail()) {
    std::cout << "Erro! Você não digitou um número válido.\n";
    return 1;
  }

  std::cout << "Favor digite o terceiro número: ";
  std::cin >> n3;

  if (std::cin.fail()) {
    std::cout << "Erro! Você não digitou um número válido.\n";
    return 1; // Encerra o programa
  }

  if (n1 == n2 && n1 == n3) {
    std::cout << "Todos os números são iguais: " << n1 << '\n';
  } else if (n1 >= n2 && n1 >= n3) {
    std::cout << "O maior número é: " << n1 << '\n';
  } else if (n2 >= n3) {
    std::cout << "O maior número é: " << n2 << '\n';
  } else {
    std::cout << "O maior número é: " << n3 << '\n';
  }

  return 0;
}
