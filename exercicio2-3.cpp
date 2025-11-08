#include <iostream>

int main() {

  int idade = {0};
  char opcao;
  bool sairOpcao = false;
  bool sairTotal = false;

  do {
    std::cout << "===========Classificação de Idade===========" << '\n';
    std::cout << "Qual é a idade? " << '\n';

    std::cin >> idade;
    if (std::cin.fail()) { //Verifica tipo de entrada
      std::cout << "ERRO! Você digitou um número inválido" << '\n';
      std::cin.clear();  // Limpa o erro
      std::cin.ignore(10000, '\n');  // Limpa o buffer
      continue; //Volta para o começo do loop while
    }

    if (idade < 0) {
      std::cout << "Idade inválida" << '\n';
      sairOpcao = false; // Reseta a flag
      do{
        std::cout << "Deseja sair? s/n: " << '\n';
        std::cin >> opcao;
        if (opcao == 's') {
          sairTotal = true; //Termina o programa
          sairOpcao = true; //Sai do loop de pergunta
        }
        else if (opcao == 'n'){
          sairOpcao = true; //Sai do loop de pergunta e recomeça o programa
        }
        else {
          std::cout << "Opção incorreta" << '\n';
        }
      } while(!sairOpcao); // Continua enquanto NÃO quiser sair
    }
    else if (idade >= 0 && idade <= 12) {
      std::cout << "0-12: Criança" << '\n';
      sairOpcao = false; // Reseta a flag
      do{
        std::cout << "Deseja sair? s/n: " << '\n';
        std::cin >> opcao;
        if (opcao == 's') {
          sairTotal = true; //Termina o programa
          sairOpcao = true; //Sai do loop de pergunta
        }
        else if (opcao == 'n'){
          sairOpcao = true; //Sai do loop de pergunta
        }
        else {
          std::cout << "Opção incorreta" << '\n';
        }
      } while(!sairOpcao);
    }
    else if (idade >= 13 && idade <= 17){
      std::cout << "13-17: Adolescente" << '\n';
      sairOpcao = false; // Reseta a flag
      do{
        std::cout << "Deseja sair? s/n: " << '\n';
        std::cin >> opcao;
        if (opcao == 's') {
          sairTotal = true; //Termina o programa
          sairOpcao = true; //Sai do loop de pergunta
        }
        else if (opcao == 'n'){
          sairOpcao = true; //Sai do loop de pergunta
        }
        else {
          std::cout << "Opção incorreta" << '\n';
        }
      } while(!sairOpcao);
    }
    else if(idade >= 18 && idade <= 59){
      std::cout << "18-59: Adulto" << '\n';
      sairOpcao = false; // Reseta a flag
      do{
        std::cout << "Deseja sair? s/n: " << '\n';
        std::cin >> opcao;
        if (opcao == 's') {
          sairTotal = true; //Termina o programa
          sairOpcao = true; //Sai do loop de pergunta
        }
        else if (opcao == 'n'){
          sairOpcao = true; //Sai do loop de pergunta
        }
        else {
          std::cout << "Opção incorreta" << '\n';
        }
      } while(!sairOpcao);
    }
    else if(idade >= 60 && idade <= 120){
      std::cout << "60-120: Idoso" << '\n';
      sairOpcao = false; // Reseta a flag
      do{
        std::cout << "Deseja sair? s/n: " << '\n';
        std::cin >> opcao;
        if (opcao == 's') {
          sairTotal = true; //Termina o programa
          sairOpcao = true; //Sai do loop de pergunta
        }
        else if (opcao == 'n'){
          sairOpcao = true; //Sai do loop de pergunta
        }
        else {
          std::cout << "Opção incorreta" << '\n';
        }
      } while(!sairOpcao);
    }
    else { // idade > 120
      std::cout << "120+: Imortal" << '\n';
      sairOpcao = false; // Reseta a flag
      do{
        std::cout << "Deseja sair? s/n: " << '\n';
        std::cin >> opcao;
        if (opcao == 's') {
          sairTotal = true; //Termina o programa
          sairOpcao = true; //Sai do loop de pergunta
        }
        else if (opcao == 'n'){
          sairOpcao = true; //Sai do loop de pergunta
        }
        else {
          std::cout << "Opção incorreta" << '\n';
        }
      } while(!sairOpcao);
    }

  } while(!sairTotal); // Continua enquanto NÃO quiser sair totalmente
  return 0;
}
