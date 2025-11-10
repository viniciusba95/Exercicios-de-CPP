#include <iostream>

int main (){

  double valor = {0};
  char opcao;
  bool sairOpcao = false;
  bool sairTotal = false;
  double desconto = {0};
  double valorFinal = {0};

  do { //Inicia o While de opções

  std::cout << "==========Caixa==========" << '\n';

  std::cout << "Insire o valor da compra: ";
  std::cin >> valor;
  if (std::cin.fail()) { //Verifica tipo de entrada
    std::cout << "ERRO! Você digitou um número inválido" << '\n';
    std::cin.clear();  // Limpa o erro
    std::cin.ignore(10000, '\n');  // Limpa o buffer
    continue; //Volta para o começo do loop while
  }

  if (valor <= 100) {
    sairOpcao == false; //Reseta a flag
    std::cout << "Total da compra: $" << valor << '\n'; // Valor sem desconto
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
  }
  else if (valor >= 101 && valor <= 500) {
    sairOpcao == false; //Reseta a flag

    desconto = valor * 0.10;
    valorFinal = valor - desconto;

    std::cout << "Valor original: $" << valor << '\n' << "Desconto de 10%: $"  << desconto << '\n' << "Total da compra: $" << valorFinal << '\n';

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
  }
  else { //compras maiores que 500
      sairOpcao == false; //Reseta a flag

      desconto = valor * 0.20;
      valorFinal = valor - desconto;

      std::cout << "Valor original: $" << valor << '\n' << "Desconto de 20%: $"  << desconto << '\n' << "Total da compra: $" << valorFinal << '\n';

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
  }


  } while(!sairTotal);
  return 0;
}
