#include <iostream>

int main() {

  float numero;
  bool sairTotal = false;
  char opcao;
  bool sairOpcao = false;

  do {

    std::cout << "========================================TABUADA========================================" << '\n';

    std::cout << "Insire o número desejado: ";
    std::cin >> numero;
    if (std::cin.fail()) { //Verifica tipo de entrada
      std::cout << "ERRO! Você digitou um ano inválido" << '\n';
      std::cin.clear();  // Limpa o erro
      std::cin.ignore(10000, '\n');  // Limpa o buffer
      continue; //Volta para o começo do loop while
    }

    for (int i = 0; i < 11; i++) {

      std::cout << numero << " x " << i << " = " << numero * i << '\n';

    }
    do {
      std::cout << "Você gostaria de sair do programa? s/n" << '\n';
      std::cin >> opcao;

      if (opcao == 's' || opcao == 'S') {
        sairTotal = true; //Termina o programa
        sairOpcao = true; //Sai do loop de pergunta
      }

      else if (opcao == 'n' || opcao == 'N'){
        sairOpcao = true; //Recomeça o programa
      }

      else {
        std::cout << "Opção incorreta" << '\n'; //Pergunta novamente
        continue; //Volta para o começo do loop while
      }
    } while (!sairOpcao);
    sairOpcao = false; // Reseta a flag

  } while (!sairTotal);

  return 0;
}
