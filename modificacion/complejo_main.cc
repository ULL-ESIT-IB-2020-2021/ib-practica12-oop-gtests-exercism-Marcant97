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
  std::cout<<"Elige '3'para multipliacr complejo por un real'"<<std::endl;
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
    resultado.suma(complejo1, complejo2);
    
  }


  if (opcion == 2){
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
    resultado.resta(complejo1, complejo2);
  }
  if (opcion == 3){
    int entero{};
    std::cout<<"Introduce la parte real del  número complejo"<<std::endl;
    std::cin>>real1;
    std::cout<<"Introduce la parte imaginaria del  número complejo"<<std::endl;
    std::cin>>imag1;
    std::cout<<"Introduce el numero entero"<<std::endl;
    std::cin>>entero;
    complejo complejo1(entero,0);
    complejo complejo2(real1, imag1);
    complejo complejo3(0,0);
    complejo3=(complejo1*complejo2);
    std::cout<<"El resultado de la multiplicacion es: ";
    complejo3.print();
  }

}
