#include <iostream>

double somar (double numero1, double numero2) {
  return numero1+numero2;
}
double subtrair (double numero1, double numero2) {
  return numero1-numero2;
}
double dividir (double numero1, double numero2) {
  return numero1/numero2;
}
double multiplicar (double numero1, double numero2) {
  return numero1*numero2;
}



int main() {

  double numero1 = {0};
  double numero2 = {0};
  int opcao = {0};
  double resultado = {0};
  bool sair = false;
  char sairOpcao;

  std::cout << "==========Calculadora==========" << '\n';

  do {


    while (true) {
      std::cout << "Digite o primeiro número: ";
      std::cin >> numero1;

      if (!std::cin.fail()) {
        break; // entrada válida. Vai sair do while
      }
      //Executa se a entrada for incorreta:
      std::cin.clear(); //Limpa a entrada
      std::cin.ignore(10000, '\n'); //Limpa o buffer
      std::cout << "Entrada inválida. Tente novamente.\n";
    }

    while (true) {
      std::cout << "Digite o segundo número: ";
      std::cin >> numero2;

      if (!std::cin.fail()) {
        break; // entrada válida. Vai sair do while
      }
      //Executa se a entrada for incorreta:
      std::cin.clear(); //Limpa a entrada
      std::cin.ignore(10000, '\n'); //Limpa o buffer
      std::cout << "Entrada inválida. Tente novamente.\n";
    }

    while (true) {
      std::cout << "Digite a opção desejada:\nSomar: 1\nSubtrair: 2\nDividir: 3\nMultiplicar: 4\n: ";
      std::cin >> opcao;

      if (!std::cin.fail()) {
        break; // entrada válida. Vai sair do while
      }
      //Executa se a entrada for incorreta:
      std::cin.clear(); //Limpa a entrada
      std::cin.ignore(10000, '\n'); //Limpa o buffer
      std::cout << "Entrada inválida. Tente novamente.\n";
    }

    switch (opcao) {
      case 1:
      resultado = somar(numero1, numero2);
      break;
      case 2:
      resultado = subtrair(numero1, numero2);
      break;
      case 3:
      resultado = dividir(numero1, numero2);
      break;
      case 4:
      resultado = multiplicar(numero1, numero2);
      break;
      default:
      std::cout << "Opção incorreta" << '\n';
      continue;
    }

    std::cout << "O resultado é: " << resultado << '\n';

    while (true) {
      std::cout << "Deseja continuar utilizando a calculadora? (S/N): ";
      std::cin >> sairOpcao;

      if (!std::cin.fail()) break;

      std::cin.clear();
      std::cin.ignore(10000, '\n');
      std::cout << "Entrada inválida. Tente novamente.\n";
    }


    if (sairOpcao == 'N' || sairOpcao == 'n') {
      std::cout << "Saindo...\n";
      sair = true;
    }

  }while (!sair);


  return 0;
}
