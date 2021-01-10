#include <iostream> 
#include <fstream>
#include <vector>
#include <algorithm>
#include <sstream>
#include <cstring>
#include "fecha.h"

int main(int argc, char* argv[]){
  Usage(argc, argv);
  std::string date {argv[1]};     //Dia,mes y año
  std::vector<int>fecha_separada=SepararFecha(date);
  int dia1= fecha_separada[0];
  int mes1=fecha_separada[1];
  int anyo1=fecha_separada[2];

  ClaseFecha hoy(0,0,0);
  hoy.establecerFecha(dia1, mes1, anyo1);
  hoy.print();
  std::cout<<" "<<std::endl;
  hoy.esBisiesto();

  std::string fichero_entrada=argv[2];
  std::string fichero_salida=argv[3];

  std::vector<std::string> vecMostrar= ObtenerFechas(fichero_entrada);
  std::vector<int> fechas2= SepararFecha1(vecMostrar);
  fechasOrdenadas1(fechas2, fichero_salida);
}