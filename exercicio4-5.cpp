#include <iostream>

int main () {

  std::string entrada;
  int soma = {0}; //Calcula a quantidade de vogais


  std::cout << "==========Quantidade de vogais==========" << '\n';

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

  for (int i = 0; i < entrada.size(); i++) { //ele vai executar conforme a quantidade de letras na string

    char verificacao = entrada[i];
    if (verificacao == 'a' || verificacao == 'e' || verificacao == 'i' || verificacao == 'o' || verificacao == 'u' || verificacao == 'A' || verificacao == 'E' || verificacao == 'I' || verificacao == 'O' || verificacao == 'U')
    {
      soma++;
    }
  }

  std::cout << "A palavara tem a quantidade de " << soma << " vogais." << '\n';

  return 0;

}
