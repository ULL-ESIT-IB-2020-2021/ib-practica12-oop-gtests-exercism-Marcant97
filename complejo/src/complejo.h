#pragma once
class complejo{
private:
  double parte_real;
  double parte_imaginaria;
public:
  complejo(double real, double imaginario); //Constructor por defecto
  void print();  //Función print complejo
  double suma(complejo &complejo1,complejo &complejo2); //Función suma de 2 complejos
  double resta(complejo &complejo1,complejo &complejo2); //Función resta de 2 complejos

};