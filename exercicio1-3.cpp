#include <iostream>

int main() {

  double n1, n2, n3, n4;

  std::cout << "Digite a primeira nota do aluno: " << '\n';
  std::cin >> n1;

  std::cout << "Digite a segunda nota do aluno: " << '\n';
  std::cin >> n2;

  std::cout << "Digite a terceira nota do aluno: " << '\n';
  std::cin >> n3;

  std::cout << "Digite a quarta nota do aluno: " << '\n';
  std::cin >> n4;

  double nf = (n1 + n2 + n3+ n4) / 4;

  std::cout << "A nota final do aluno é : " << nf; //já imprime e realiza a formula direto

  if (nf >= 7) {
    std::cout << " Aprovado! :) " << '\n';
  }
  else {
    std::cout << " Reprovado! :(" << '\n';
  }

  return 0;
}
