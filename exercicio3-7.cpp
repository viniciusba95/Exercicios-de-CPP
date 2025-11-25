#include <iostream>

int main() {

  int valor;
  char aste = '*';

  std::cout << "========== Piramide ==========" << '\n';

  std::cout << "Digite a altura desejada da piramide: ";
  std::cin >> valor;

  if (std::cin.fail()) {
      // Se der falha, limpa o erro e o buffer
      std::cin.clear(); // Limpa o estado de erro
      std::cin.ignore(10000, '\n'); // Ignora o resto da linha

      std::cout << "Entrada inválida. Tente novamente." << '\n';
  }

  for (int i = 1; i <= valor; i++){

      for (int n = 1; n <= i; n++){
        std::cout << aste;
      }

      std::cout << '\n';
    }

  return 0;
}
