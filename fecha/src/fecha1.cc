#include <iostream> 
#include <fstream>
#include <vector>
#include <algorithm>
#include <sstream>
#include <cstring>
#include "fecha.h"

//Función para aumentar y ordenar las fechas
void fechasOrdenadas1(std::vector<int> myvec){
  int dia,mes,anyo,result;
  std::vector<int> vecComparador{};
  for (unsigned int i=0;i<(myvec.size()-2);){
    dia=myvec[0+i];
    mes=myvec[1+i];
    anyo=myvec[2+i];
    result=((anyo*10000)+(mes*100)+dia);
    vecComparador.emplace_back(result);
    i+=3;
  }
  sort(vecComparador.begin(), vecComparador.end());
  //Parte para devolver las fechas ya ordenadas
  int dia1;
  int mes1;
  int anyo1;
  for (unsigned int i=0;i<vecComparador.size();i++){
    int var1=vecComparador[i];
    anyo1=(var1/10000);
    mes1=((var1%10000)/100);
    dia1=((var1%10000)%100);
    std::cout<<dia1<<"/"<<mes1<<"/"<<anyo1<<std::endl;
  }
}



//Función para obtener fechas
std::vector<std::string> ObtenerFechas(std::string nombre_fichero){
  std::ifstream fichero(nombre_fichero.c_str());
  std::string linea; 
  std::vector<std::string> Fechas{};
  if( fichero.fail() ){
    std::cout << "No existe el fichero!" << std::endl;
        exit(1);
    }
  while (! fichero.eof()) {
    getline(fichero,linea);
    if (! fichero.eof()) 
      Fechas.emplace_back(linea);
    }
  fichero.close();
  return Fechas;
}
std::vector<int> SepararFecha1(std::vector<std::string> date){
    std::vector <int> parsed_date;
    for (unsigned int i=0;i<date.size();i++){
      std::replace(date[i].begin(), date[i].end(), '/', ' ');
      std::stringstream ss(date[i]);
      int day, month, year;
      while(ss >> day && ss >> month && ss >> year){
        parsed_date.emplace_back(day);
        parsed_date.emplace_back(month);
        parsed_date.emplace_back(year);
      }
    }
    return parsed_date;
}
std::vector<int> SepararFecha(std::string date){
    std::vector <int> parsed_date;
    std::replace(date.begin(), date.end(), '/', ' ');
    std::stringstream ss(date);
    int day, month, year;
    while(ss >> day && ss >> month && ss >> year){
        parsed_date.emplace_back(day);
        parsed_date.emplace_back(month);
        parsed_date.emplace_back(year);
    }
    return parsed_date;
}

void Usage(int argc, char *argv[]) {
  if(argc == 2 && strcmp(argv[1], "--help") == 0){
    std::cout <<kHelpText<< " Modo de uso: "<<argv[0]<<" fecha(dd/mm/aaaa) numero-dias-posteriores nombre-fichero"<<std::endl;
  }
  if(argc != 4){
    std::cout << "Error en el numero de argumentos, pruebe --help para mayor información"<<std::endl;
    exit(EXIT_SUCCESS);
    }
}
ClaseFecha::ClaseFecha(int dia, int mes, int anyo){  //Constructor por defecto.
  m_dia=dia;
  m_mes=mes;
  m_anyo=anyo;
}
  void ClaseFecha::establecerFecha(int dia, int mes, int anyo) {  //Método establecer fecha
	  m_dia = dia;
    m_mes= mes;
    m_anyo = anyo;
  }
 
  void ClaseFecha::print(){  //Método imprimir fecha
    std::cout << m_dia << '/' << m_mes << '/' << m_anyo;
  }

  void ClaseFecha::esBisiesto(){   //Método que determina si el año es bisiesto o no.
    if ((m_anyo%4) == 0){
	  std::cout<<m_anyo<<" es bisiesto"<<std::endl;
	}
	if ((m_anyo%4) != 0){
	  std::cout<<m_anyo<<" no es bisiesto"<<std::endl;
	}
  }


  void ClaseFecha::fechasPosteriores(int dias_posteriores, std::string nombre_archivo){

    std::ofstream fichero(nombre_archivo);
    for (int i = 0; i < dias_posteriores; i++){
      if(((m_anyo%4)==0)&&(m_mes==2)){           //Para imprimir dia 29 de años bisiestos de febrero.
        if (m_dia > 29){
          m_dia = 1;
          m_mes ++;
        }
        if (m_mes > 12){
          m_mes = 1;
          m_anyo++;
        }
        fichero << m_dia << "/" << m_mes << "/" << m_anyo <<std::endl;
        m_dia++;
      }  
      if(((m_mes)==2 && ((m_anyo%4)!=0))){
        if (m_dia > 31){
          m_dia = 1;
          m_mes++;
        }
        if (m_mes > 12){
          m_mes = 1;
          m_anyo++;
        }
        fichero << m_dia << "/" << m_mes << "/" << m_anyo <<std::endl;
        m_dia++;
      }
      //meses de 31 dias
      if(((m_mes)==1)||((m_mes)==3)||((m_mes)==5)||((m_mes)==7)||((m_mes)==8)||((m_mes)==10)||((m_mes)==12)){
        if (m_dia > 31){
          m_dia = 1;
          m_mes++;
        }
        if (m_mes > 12){
          m_mes = 1;
          m_anyo++;
        }
        fichero << m_dia << "/" << m_mes << "/" << m_anyo <<std::endl;
        m_dia++;
      }
      //meses de 30 dias
      if(((m_mes)==4)||((m_mes)==6)||((m_mes)==9)||((m_mes)==11)){
        if (m_dia > 30){
          m_dia = 1;
          m_mes++;
        }
        if (m_mes > 12){
          m_mes = 1;
          m_anyo++;
        }
        fichero << m_dia << "/" << m_mes << "/" << m_anyo <<std::endl;
        m_dia++;
      }
    }
    fichero.close();
  }
