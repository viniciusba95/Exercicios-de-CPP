#include <iostream>

int main () {

  double num[10];

  std::cout << "==========Calcular Média==========" << '\n';

  for (int i = 0; i < 10; i++) { //Vai perguntar 10 vezes sobre os números

    int numeroVisual = i + 1;

    while (true) {
      std::cout << "Digite o número " << numeroVisual << ": \n";
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

  double soma = {0};

  for (int s = 0; s < 10; s++) {

    soma += num[s]; //Calcula a soma dos 10 números

  }

  double media = soma / 10.0; //Calcula a média corretamente

  std::cout << "O valor total da soma é: " << soma
            << "\nA média é: " << media << '\n'; //Já imprime a soma e calcula a média

  return 0;

}
