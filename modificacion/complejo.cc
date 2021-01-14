#include <iostream>
#include "complejo.h"

  complejo::complejo(double real, double imaginario){ //Constructor por defecto
    parte_real = real;
    parte_imaginaria = imaginario;
  }
  

  //Modificación: Sobrecarga operador * (número real * complejo)
  int complejo::getReal(){ return parte_real;}   //Declaro 2 getters para obtener las partes de mi complejo
  int complejo::getImag(){ return parte_imaginaria;}
  complejo operator*(complejo& comp2, complejo& comp1){
    int a={0};
    int b{0};
    int c= comp1.getReal();
    int d= comp1.getImag();
    int e=comp2.getReal();
    a=((e*c));
    b=(e*d);
    complejo resultado(a,b);
    return resultado;
  }
  
  
  void complejo::print(){  //Función print complejo
    std::cout<<"Su número complejo es: "<<parte_real<<"+"<<parte_imaginaria<<"i"<<std::endl;
  }
  double complejo::suma(complejo &complejo1,complejo &complejo2){ //Función suma de 2 complejos
    complejo resultado(0,0);
    resultado.parte_real = (complejo1.parte_real+complejo2.parte_real);
    resultado.parte_imaginaria = (complejo1.parte_imaginaria+complejo2.parte_imaginaria);
    std::cout<<"La suma de sus 2 números complejos es: "<<resultado.parte_real<<"+"<<resultado.parte_imaginaria<<"i"<<std::endl;
    return resultado.parte_real+resultado.parte_imaginaria;  //devuelve esta cantidad para los tests
  }
  double complejo::resta(complejo &complejo1,complejo &complejo2){ //Función suma de 2 complejos
    complejo resultado(0,0);
    resultado.parte_real = (complejo1.parte_real-complejo2.parte_real);
    resultado.parte_imaginaria = (complejo1.parte_imaginaria-complejo2.parte_imaginaria);
    if (resultado.parte_imaginaria >= 0){
      std::cout<<"La resta de sus 2 números complejos es: "<<resultado.parte_real<<"+"<<resultado.parte_imaginaria<<"i"<<std::endl;
    } 
    if (resultado.parte_imaginaria < 0){
    std::cout<<"La resta de sus 2 números complejos es: "<<resultado.parte_real<<resultado.parte_imaginaria<<"i"<<std::endl;
    } 
    return resultado.parte_real-resultado.parte_imaginaria; //devuelve esta cantidad para los tests
  }
  // double complejo::suma(double real, double imaginario, double real1, double imaginario1){ //Función suma de 2 complejos
  //   parte_real = (real+real1);
  //   parte_imaginaria = (imaginario+imaginario1);
  //   std::cout<<"La suma de sus 2 números complejos es: "<<parte_real<<"+"<<parte_imaginaria<<"i"<<std::endl;
  // }
  

  // double complejo::resta(double real, double imaginario, double real1, double imaginario1){ //Función resta de 2 complejos
  //   parte_real = (real-real1);
  //   parte_imaginaria = (imaginario-imaginario1);
  //   if (parte_imaginaria >= 0){
  //     std::cout<<"La resta de sus 2 números complejos es: "<<parte_real<<"+"<<parte_imaginaria<<"i"<<std::endl;
  //   } 
  //   if (parte_imaginaria < 0){
  //     std::cout<<"La resta de sus 2 números complejos es: "<<parte_real<<"+("<<parte_imaginaria<<")i"<<std::endl;
  //   } 
  // }
