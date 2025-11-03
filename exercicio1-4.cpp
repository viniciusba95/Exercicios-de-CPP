#include <iostream>

int main() {

  int number {};

  std::cout << "Digite o seu número para descobrir se é ímpar ou par: ";

  std::cin >> number;

  std::cout << number <<( number % 2 == 0 ? " é par" :  " é ímpar") << '\n';

  return 0;
}
