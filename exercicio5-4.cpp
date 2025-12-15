#include <iostream>

double calcularMedia (double nota[], int tamanho){

  double soma = {0};

  for (int i = 0; i < tamanho; i++) {
    soma += nota[i]; //Soma todas as notas
  }

  return soma/tamanho; //Retorna a média

}

int main() {

  int tamanho;

  std::cout << "==========calcularMedia==========" << '\n';

  while (true) {
    std::cout << "Digite quantas notas você quer calcular a média: ";
    std::cin >> tamanho;

    if (!std::cin.fail()) {
      break; // entrada válida. Vai sair do while
    }
    //Executa se a entrada for incorreta:
    std::cin.clear(); //Limpa a entrada
    std::cin.ignore(10000, '\n'); //Limpa o buffer
    std::cout << "Entrada inválida. Tente novamente.\n";
  }

  double nota[tamanho]; //cria a quantidade de notas solicitadas

  for (int i = 0; i < tamanho; i++) {
    while (true) {
      std::cout << "Digite a nota " << i + 1 << " : ";
      std::cin >> nota[i];

      if (!std::cin.fail()) {
        break; // entrada válida. Vai sair do while
      }
      //Executa se a entrada for incorreta:
      std::cin.clear(); //Limpa a entrada
      std::cin.ignore(10000, '\n'); //Limpa o buffer
      std::cout << "Entrada inválida. Tente novamente.\n";
    }
  }

  double resultado = calcularMedia (nota, tamanho);

  std::cout << "A média final é: " << resultado << '\n';

  return 0;
}
