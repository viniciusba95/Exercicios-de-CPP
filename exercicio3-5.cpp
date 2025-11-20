#include <iostream>

bool primo (int entrada){
  if (entrada < 2) { // 0 e 1 não são!
    return false;
  }
  if (entrada == 2) { //2 é o único número primo que é par
    return true;
  }
  if (entrada % 2 == 0){
    return false;
  }

  for (int i = 3; i * i <= entrada; i += 2){ //Só testa impares
    if (entrada % i == 0){
      return false;
    }
  }
  return true;
}

int main(){

  int entrada = {0};
  char sair;

  do {


    std::cout << "Digite o número que deseja verificar se é primo: " << '\n';
    std::cin >> entrada;
    if (std::cin.fail()) { //Verifica se a entrada é valida
      std::cout << "Entrada invalida" << '\n';
      std::cin.clear();  // Limpa o erro
      std::cin.ignore(10000, '\n');  // Limpa o buffer
      continue;
    }

    if (primo (entrada)){ //verifica se é primo
      std::cout << "O número " << entrada <<  " é primo!" << '\n';
    }
    else {
      std::cout << "O número " << entrada << " não é primo!" << '\n';
    }

    do {
      std::cout << "Deseja sair do programa? s/n: ";
      std::cin >> sair;
      if (sair == 's' || sair == 'S' || sair == 'n' || sair == 'N') {
      break;  // Sai do loop se resposta válida
      }
      std::cout << "Opção inválida, digite novamente" << '\n';
    } while(true);

  } while(sair == 'n' || sair == 'N'); //Verifica se usuário quer sair do programa

  std::cout << "Saindo do programa..." << '\n';

  return 0;

}
