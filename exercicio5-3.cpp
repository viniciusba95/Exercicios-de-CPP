#include <iostream>

double converterCelsius(double temperatura){

    return (temperatura - 32.0) * 5.0 / 9.0;

}

double converterFahrenheit(double temperatura){

  return (temperatura * 9.0 / 5.0) + 32.0;

}

int main() {

  std::cout << "==========Conversor de temperatura==========" << '\n';

  double temperatura;
  char tipo;

  while (true) {
    std::cout << "Digite a temperatura: ";
    std::cin >> temperatura;

    if (!std::cin.fail()) {
      break; // entrada válida. Vai sair do while
    }
    //Executa se a entrada for incorreta:
    std::cin.clear(); //Limpa a entrada
    std::cin.ignore(10000, '\n'); //Limpa o buffer
    std::cout << "Entrada inválida. Tente novamente.\n";
  }

  while (true) {
    std::cout << "Digite a opção desejada:\n C para converter a Celsius\n F para converter a Fahrenheit\n ";
    std::cin >> tipo;

    if (!std::cin.fail()) {
      break; // entrada válida. Vai sair do while
    }
    //Executa se a entrada for incorreta:
    std::cin.clear(); //Limpa a entrada
    std::cin.ignore(10000, '\n'); //Limpa o buffer
    std::cout << "Entrada inválida. Tente novamente.\n";
  }

  if (tipo == 'c' || tipo == 'C') {
    double resultado = converterCelsius(temperatura);

    std::cout << "A temperatura convertida de Fahrenheit para Celsius é: " << resultado << '\n';
  }
  else if (tipo == 'f' || tipo == 'F') {
    double resultado = converterFahrenheit(temperatura);

    std::cout << "A temperatura convertida de Celsius para Fahrenheit é: " << resultado << '\n';
  }
  else {

    std::cout << "Entrada inválida." << '\n';
  }



  return 0;
}
