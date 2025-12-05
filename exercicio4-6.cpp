#include <iostream>

int main () {

  std::string entrada;
  int contagem = 0;
  std::string invertida = "";

  std::cout << "==========Inverter string==========" << '\n';

    while (true) {
      std::cout << "Digite uma palavra: ";
      std::cin >> entrada;
      if (!std::cin.fail()) {
        break; // entrada válida. Vai sair do while
      }
      //Executa se a entrada for incorreta:
      std::cin.clear(); //Limpa a entrada
      std::cin.ignore(10000, '\n'); //Limpa o buffer
      std::cout << "Entrada inválida. Tente novamente.\n";
    }



  for (int i = entrada.size() - 1; i >= 0; i--) {
    invertida += entrada[i];
  }

  std::cout << "A palavra original é: " << entrada << '\n'
  << "A palavra invertida é: " << invertida << '\n';

  return 0;

}
