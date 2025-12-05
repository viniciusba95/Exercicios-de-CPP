#include <iostream>

int main () {

  double num[5];
  double valor = {0};
  bool valorEncontrado = false;

  std::cout << "==========Buscar Valor==========" << '\n';

  for (int i = 0; i < 5; i++) { //Vai perguntar 10 vezes sobre os números

    int numeroVisual = i + 1;

    while (true) {
      std::cout << "Digite o número " << numeroVisual << ": ";
      std::cin >> num[i];
      if (!std::cin.fail()) {
        break; // entrada válida. Vai sair do while
      }
      //Executa se a entrada for incorreta:
      std::cin.clear(); //Limpa a entrada
      std::cin.ignore(10000, '\n'); //Limpa o buffer
      std::cout << "Entrada inválida. Tente novamente.\n";
    }

  }

  while (true) {
    std::cout << "Digite o número que deseja encontrar: ";
    std::cin >> valor;
    if (!std::cin.fail()) {
      break; // entrada válida. Vai sair do while
    }
    //Executa se a entrada for incorreta:
    std::cin.clear(); //Limpa a entrada
    std::cin.ignore(10000, '\n'); //Limpa o buffer
    std::cout << "Entrada inválida. Tente novamente.\n";
  }

  for (int s = 0; s < 5; s++) {

    if (num[s] == valor) {
      valorEncontrado = true;
    }

  }

  if (valorEncontrado != false) {
    std::cout << "O valor foi encontrado no array." << '\n';
  }
  else {
    std::cout << "Valor não foi encontrado no array" << '\n';
  }


  return 0;

}
