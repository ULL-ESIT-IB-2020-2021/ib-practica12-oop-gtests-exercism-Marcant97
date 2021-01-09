#include <iostream>
#include "complejo.h"

double real1;
double imag1;
double real2;
double imag2;
int opcion;

int main(){
  std::cout<<"Este programa imprime en pantalla numeros complejos, los suma y los resta"<<std::endl;
  std::cout<<"Elige '1' para sumar o '2' para restar"<<std::endl;
  std::cin>>opcion;
  if (opcion == 1){
    std::cout<<"Introduce la parte real del primer número complejo"<<std::endl;
    std::cin>>real1;
    std::cout<<"Introduce la parte imaginaria del primer número complejo"<<std::endl;
    std::cin>>imag1;
    std::cout<<"Introduce la parte real del segundo número complejo"<<std::endl;
    std::cin>>real2;
    std::cout<<"Introduce la parte imaginaria del segundo número complejo"<<std::endl;
    std::cin>>imag2;

    complejo complejo1(real1, imag1);
    complejo complejo2(real2, imag2);
    complejo resultado(0,0);

    complejo1.print();
    complejo2.print();
    resultado.suma(real1, imag1, real2, imag2);
    resultado.print();
  }


  if (opcion == 2){
    std::cout<<"Introduce la parte real del primer número complejo"<<std::endl;
    std::cin>>real1;
    std::cout<<"Introduce la parte imaginaria del primer número complejo"<<std::endl;
    std::cin>>imag1;
    std::cout<<"Introduce la parte real del segundo número complejo"<<std::endl;
    std::cin>>real2;
    std::cout<<"Introduce la parte imaginaria del segundo número complejo"<<std::endl;
    std::cin>>imag1;

    complejo complejo1(real1, imag1);
    complejo complejo2(real2, imag2);
    complejo resultado(0,0);

    complejo1.print();
    complejo2.print();
    resultado.resta(real1, imag1, real2, imag2);
    resultado.print();
  }
}