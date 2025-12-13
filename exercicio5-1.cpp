#include <iostream>

int potencia(int base, int expoente) {
  int resultado = {1}; //Inicia o resultado

  for (int i = 0; i < expoente; i++) { //repete a mutiplicação o número de vezes do expoente
    resultado *= base;
  }

  return resultado; //retorna o resultado para o código principal
}

int main() {

  int base;
  int expoente;

  std::cout << "==========Calcular Potencia==========" << '\n';

  while (true) {
    std::cout << "Insira a base: ";
    std::cin >> base;
    if (!std::cin.fail()) {
      break; // entrada válida. Vai sair do while
    }
    //Executa se a entrada for incorreta:
    std::cin.clear(); //Limpa a entrada
    std::cin.ignore(10000, '\n'); //Limpa o buffer
    std::cout << "Entrada inválida. Tente novamente.\n";
  }
  while (true) {
    std::cout << "Insira o expoente: ";
    std::cin >> expoente;
    if (!std::cin.fail()) {
      break; // entrada válida. Vai sair do while
    }
    //Executa se a entrada for incorreta:
    std::cin.clear(); //Limpa a entrada
    std::cin.ignore(10000, '\n'); //Limpa o buffer
    std::cout << "Entrada inválida. Tente novamente.\n";
  }

  if (base == 0 && expoente < 0) {
    std::cout << "resultado indefinido\n";
  }
  else if (expoente < 0) {
    std::cout << "resultado indefinido para int\n";
  }
  else { //Chama a função e executa o calculo
    int resultado = potencia(base, expoente); //Declara o resultado no Main e pega o resultado da função jogando o valor da base e do expoente pra ele.
    std::cout << "resultado é igual a: " << resultado << '\n';
  }



  return 0;
}
