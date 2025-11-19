#include <iostream>

int main (){

  double entrada = {1};
  double soma = {0};

  std::cout << "==========Soma de Números==========" << '\n';

  std::cout << "Para sair digite o numero 0" << '\n';

  do {

    std::cout << "Digite o número a ser somado: " << '\n';
    std::cin >> entrada;
    if (std::cin.fail()) { //Verifica tipo de entrada
      std::cout << "ERRO! Você digitou um número inválido" << '\n';
      std::cin.clear();  // Limpa o erro
      std::cin.ignore(10000, '\n');  // Limpa o buffer
    }

    soma += entrada; //Soma a entrada mas a soma amarzenada anteriormente

    std::cout << "Valor somado: " << soma << '\n';


  }while (entrada != 0); //Saí do loop dps que o usuário digite 0

  return 0;

}
