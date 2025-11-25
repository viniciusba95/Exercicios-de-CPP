#include <iostream>

int main() {

  int a = {0};
  int b = {1};
  int proximo = {0};

  std::cout << "========== Sequência Fibonacci ==========" << '\n';

  std::cout << a << '\n' << b << '\n';

  for (int i = 1; i <= 8; i++){
    proximo = a + b;
    a = b;
    b = proximo;
    std::cout << proximo << '\n';

    }

  return 0;
}
