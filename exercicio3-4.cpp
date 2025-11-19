#include <iostream>

int main (){

  double fatorial = {0};
  double calcular = {0};
  double loop = {0};
  double total = {1};

  std::cout << "Insira o número que deseja calcular o fatorial: " << '\n';
  std::cin >> fatorial;
  if (std::cin.fail()) { //Verifica tipo de entrada
    std::cout << "ERRO! Você digitou um número inválido" << '\n';
    std::cin.clear();  // Limpa o erro
    std::cin.ignore(10000, '\n');  // Limpa o buffer
    return 0;
  }

  loop = fatorial - 1;

  for (int i = loop; i >= 1; i--){

    calcular = fatorial * i;

    std::cout << fatorial << " x " << i << " = " << calcular << '\n';

    total *= fatorial; // Armazena o valor anterior e multiplica com o valor atual do fatorial.

    std::cout << "Valor total atual: " << total << '\n';

    fatorial--; //Fatorial começa com o número inserido e cada loop diminui 1 diferente do i que é sempre 1 a menos;

  }

  std::cout << "Valor final do fatorial: " << total << '\n';

  return 0;

}
