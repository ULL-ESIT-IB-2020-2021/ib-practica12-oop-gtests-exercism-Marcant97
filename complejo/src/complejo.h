#pragma once
class complejo{
private:
  double parte_real;
  double parte_imaginaria;
public:
  complejo(double real, double imaginario); //Constructor por defecto
  void print();  //Función print complejo
  double suma(double real, double imaginario, double real1, double imaginario1); //Función suma de 2 complejos
  double resta(double real, double imaginario, double real1, double imaginario1); //Función resta de 2 complejos

};