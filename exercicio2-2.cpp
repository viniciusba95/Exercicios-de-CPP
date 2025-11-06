#include <iostream>

int main() {

  int selecao = {0};
  double numero1, numero2 = {0};

    do {

      std::cout << "\nDigite a opção desejada: \n" <<
      "1. Somar dois números \n" <<
      "2. Subtrair dois números \n" <<
      "3. Multiplicar dois números \n" <<
      "4. Sair \n" <<
      "Escolha: ";
      std::cin >> selecao;

      if ( selecao < 1 || selecao > 4  ) {
        std::cout << "Opção invalida" << '\n';
        continue; //Volta para o começo do loop while
      }

      if ( selecao == 4 ) {
        std::cout << "Opção sair selecionada, até mais!" << '\n';
        break; //Saí do loop while
      }

      std::cout << "\nDigite o primeiro número: " << '\n';
      std::cin >> numero1;
      if (std::cin.fail()) {
        std::cout << "ERRO! você digitou um número invalido" << '\n';
        std::cin.clear();  // Limpa o erro
        std::cin.ignore(10000, '\n');  // Limpa o buffer
        continue; //Volta para o começo do loop while
      }

      std::cout << "\nDigite o segundo número: " << '\n';
      std::cin >> numero2;
      if (std::cin.fail()) {
        std::cout << "ERRO! você digitou um número invalido" << '\n';
        std::cin.clear();
        std::cin.ignore(10000, '\n');
        continue;
      }

      switch (selecao) {
        case 1:
          std::cout << "O resultado da soma é: " << numero1 << " + " << numero2 << " = "  << numero1+numero2;
          break;
        case 2:
          std::cout << "O resultado da subtração é: " << numero1 << " - " << numero2 << " = " << numero1-numero2;
          break;
        case 3:
          std::cout << "O resultado da multiplicação é: " << numero1 << " * " << numero2 << " = " << numero1*numero2;
      }


    } while (selecao != 4); //Codigo continua no loop até selecionar o 4

  return 0;
}
