#include <iostream> 
#include "fecha.h"
#include <string>
int dia1;
int mes1;
int anyo1;
void Usage(int argc, char *argv[]) {
  if (argc != 2) {
    std::cout << argv[0] << ": Falta un número natural como parámetro" << std::endl;
    std::cout << "Pruebe " << argv[0] << " --help para más información" << std::endl;
    exit(EXIT_SUCCESS);
  }
  std::string parameter{argv[1]};
  if (parameter == "--help") {
    std::cout << kHelpText << std::endl;
    exit(EXIT_SUCCESS);
  }
}
class ClaseFecha{
private:
  int m_dia;
  int m_mes;
  int m_anyo;

public:

ClaseFecha(int dia, int mes, int anyo){  //Constructor por defecto.
  m_dia=dia;
  m_mes=mes;
  m_anyo=anyo;
}
  void establecerFecha(int dia, int mes, int anyo) {  //Método establecer fecha
		m_dia = dia;
    m_mes= mes;
    m_anyo = anyo;
  }
 
  void print(){  //Método imprimir fecha
        std::cout << m_dia << '/' << m_mes << '/' << m_anyo;
  }

	bool esBisiesto(){   //Método que determina si el año es bisiesto o no.
		if ((m_anyo%4) == 0){
			std::cout<<m_anyo<<" es bisiesto"<<std::endl;
      return true;
		}
		if ((m_anyo%4) != 0){
			std::cout<<m_anyo<<" no es bisiesto"<<std::endl;
      return false;
		}
	}
};

int main(){
  ClaseFecha hoy(0,0,0);

	std::cout << "Dime el día, el mes y el año(dd mm aa):" << std::endl;
	std::cin >> dia1;
  std::cin >> mes1;
  std::cin >> anyo1;
  
  hoy.establecerFecha(dia1,mes1,anyo1);
  hoy.print();
	std::cout<<" "<<std::endl;
	std::cout<<hoy.esBisiesto()<<std::endl;
	std::cout<<" "<<std::endl;
  return 0;
}