#include <iostream>

const std::string kHelpText = " Este programa solicita una fech(dd/mm/aa), calcula si el año \
es bisiesto y produce en un fichero *.txt las fechas posteriores.";

void Usage(int argc, char *argv[]);
std::vector<int> SepararFecha1(std::vector<std::string> date);
std::vector<int> SepararFecha(std::string date);

void fechasOrdenadas1(std::vector<int> myvec);
class ClaseFecha{
private:
  int m_dia;
  int m_mes;
  int m_anyo;

public:

ClaseFecha(int dia, int mes, int anyo); //Constructor por defecto.

  void establecerFecha(int dia, int mes, int anyo);
  void print();
  void esBisiesto();
  void fechasPosteriores(int dias_posteriores, std::string nombre_archivo);
};
std::vector<std::string> ObtenerFechas(std::string nombre_fichero);
