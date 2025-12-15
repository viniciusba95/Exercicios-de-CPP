#include <iostream>

bool ehPar (int numero) {
  bool par;

  numero %= 2;

  if (numero == 0) {
    par = true;
  }
  else {
    par = false;
  }

  return par; //Retorna se é false ou true

}


int main() {

  int numero = {0};

  std::cout << "==========Função Par/Ímpar==========" << '\n';

  while (true) {
    std::cout << "Digite o número que deseje verificar: ";
    std::cin >> numero;

    if (!std::cin.fail()) {
      break; // entrada válida. Vai sair do while
    }
    //Executa se a entrada for incorreta:
    std::cin.clear(); //Limpa a entrada
    std::cin.ignore(10000, '\n'); //Limpa o buffer
    std::cout << "Entrada inválida. Tente novamente.\n";
  }

  bool resultado = ehPar (numero);

  std::cout <<( resultado == true ? "É par" :  "É ímpar") << '\n';

  return 0;
}
