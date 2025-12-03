#include <iostream>

int main () {

  int num[5];
  bool entrada = true;

  std::cout << "==========Calcular o maior e menor número==========" << '\n';

  do {

  entrada = true;

  std::cout << "Digite o primeiro número: ";
  std::cin >> num[0];
  if (std::cin.fail()) {
    // Se der falha, limpa o erro e o buffer
    std::cin.clear(); // Limpa o estado de erro
    std::cin.ignore(10000, '\n'); // Ignora o resto da linha

    std::cout << "Entrada inválida. Tente novamente." << '\n';
    entrada = false;
    continue;
  }

  std::cout << "Digite o segundo número: ";
  std::cin >> num[1];
  if (std::cin.fail()) {
    // Se der falha, limpa o erro e o buffer
    std::cin.clear(); // Limpa o estado de erro
    std::cin.ignore(10000, '\n'); // Ignora o resto da linha

    std::cout << "Entrada inválida. Tente novamente." << '\n';
    entrada = false;
    continue;
  }


  std::cout << "Digite o terceiro número: ";
  std::cin >> num[2];
  if (std::cin.fail()) {
    // Se der falha, limpa o erro e o buffer
    std::cin.clear(); // Limpa o estado de erro
    std::cin.ignore(10000, '\n'); // Ignora o resto da linha

    std::cout << "Entrada inválida. Tente novamente." << '\n';
    entrada = false;
    continue;
  }


  std::cout << "Digite o quarto número: ";
  std::cin >> num[3];
  if (std::cin.fail()) {
    // Se der falha, limpa o erro e o buffer
    std::cin.clear(); // Limpa o estado de erro
    std::cin.ignore(10000, '\n'); // Ignora o resto da linha

    std::cout << "Entrada inválida. Tente novamente." << '\n';
    entrada = false;
    continue;
  }


  std::cout << "Digite o quinto número: ";
  std::cin >> num[4];
  if (std::cin.fail()) {
    // Se der falha, limpa o erro e o buffer
    std::cin.clear(); // Limpa o estado de erro
    std::cin.ignore(10000, '\n'); // Ignora o resto da linha

    std::cout << "Entrada inválida. Tente novamente." << '\n';
    entrada = false;
    continue;
  }
  } while (!entrada);


  int max = num[0];
  int min = num[0];

  std::cout << "Os números digitados foram: " << '\n';

  for (int i = 0; i < 5; i++) {
    std::cout << num[i] << '\n';
    if (max < num [i]) {
      max = num [i];
    }
    if (min > num [i]) {
      min = num [i];
    }
  }

  std::cout << "O maior número é: " << max << '\n';
  std::cout << "O menor número é: " << min << '\n';

  return 0;

}
