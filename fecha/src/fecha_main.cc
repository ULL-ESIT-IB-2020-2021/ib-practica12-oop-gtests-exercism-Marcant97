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
  std::vector<int>fecha_separada=ParseString(date);
  int dia1= fecha_separada[0];
  int mes1=fecha_separada[1];
  int anyo1=fecha_separada[2];

  const int kNum = atoi(argv[2]);      //numero fechas
  
  const std::string kNombre{argv[3]};  //nombre archivo

  ClaseFecha hoy(0,0,0);
  hoy.establecerFecha(dia1, mes1, anyo1);
  hoy.print();
  std::cout<<" "<<std::endl;
  hoy.esBisiesto();
  hoy.fechasPosteriores(kNum,kNombre);
  std::cout<<"Ya puedes encontrar las "<<kNum <<" fechas posteriores, en el documento "<<kNombre<< " que se ha generado."<<std::endl;
  return 0;
}