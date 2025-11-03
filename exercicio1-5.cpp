#include <iostream>

int main() {

  float peso {};
  float altura {};

  std::cout << "Insira o peso com ponto (exemplo: 79.5): ";
  std::cin >> peso;

  std::cout << "Insira a altura com ponto (exemplo: 1.78): ";
  std::cin >> altura;

  float imc = peso / (altura * altura); //Calculo do IMC

  std::cout << "O seu IMC é: " << imc << '\n';

//Verificação de classificação de peso:
  if (imc <= 18.5) {
    std::cout << "Seu IMC é classificado como Magreza, menor que 18,5" << '\n';
  }
  else if (imc >= 18.6 && imc <= 24.9 ){
    std::cout << "Seu IMC é classificado como Normal, Entre 18,5 e 24,9" << '\n';
  }
  else if (imc >= 25.0 && imc <= 29.9) {
    std::cout << "Seu IMC é classificado como Sobrepeso, Entre 25,0 e 29,9" << '\n';
  }
  else if (imc >= 30.0 && imc <= 39.9) {
    std::cout << "Seu IMC é classificado como Obesidade, Entre 30,0 e 39,9" << '\n';
  }
  else {
    std::cout << "Seu IMC é classificado como Obesidade grave, Maior que 40,0" << '\n';
  }

  return 0;
}
