#include <iostream>

int main () {

int ano;
bool sairTotal = false;
char opcao;
bool sairOpcao = false;

do {

  std::cout << "==========Verificação de ano bissexto==========" << '\n';

  std::cout << "Informe o ano que deseja verificar se é bissexto: ";
  std::cin >> ano;
  if (std::cin.fail()) { //Verifica tipo de entrada
    std::cout << "ERRO! Você digitou um ano inválido" << '\n';
    std::cin.clear();  // Limpa o erro
    std::cin.ignore(10000, '\n');  // Limpa o buffer
    continue; //Volta para o começo do loop while
  }

  if ((ano % 400 == 0) || (ano % 4 == 0 && ano % 100 != 0)) {
      sairOpcao = false; // Limpa a flag
      std::cout << "Esse ano é bissexto: " << ano << '\n';
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
  else {
      std::cout << "Esse ano NÃO é bissexto: " << ano << '\n';
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
}
