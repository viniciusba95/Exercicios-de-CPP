#include <iostream>

double soma (double, double);
double subtracao (double, double);
double multiplicacao (double, double);
double divisao (double, double);
int resto (int, int);

int main() {

  double x,y;

  std::cout << "Digite o primeiro número: " << '\n';
  std::cin >> x;

  std::cout << "Digite o segundo número: " << '\n';
  std::cin >> y;

  std::cout << "O resultado da soma é: " << soma(x,y) << '\n';
  std::cout << "O resultado da subtração é: " << subtracao(x,y) << '\n';
  std::cout << "O resultado da multiplicação é: " << multiplicacao(x,y) << '\n';
  std::cout << "O resultado da divisão é: " << divisao(x,y) << '\n';
  std::cout << "O resto da divisão é: " << resto(x,y) << '\n';

  return 0;
}

double soma(double x, double y){
  return x + y;
}

double divisao(double x, double y){
  return x / y;
}

double multiplicacao(double x, double y){
  return x * y;
}

double subtracao(double x, double y){
  return x - y;
}

int resto(int x, int y){
  return x % y;
}
