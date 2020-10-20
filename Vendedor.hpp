#include <string>
#include "Empregado.hpp"

class Vendedor : public Empregado {
  //passei o atrubuto quotaMensalDeVendas para o vendedor já que parece que isso só importa pra ele.
  private:
     double quotaMensalVendas; 
  public:
  Vendedor ();
  Vendedor (std::string name, double salHor, double x); 	
  void setQMV (double x);  
	double getQMV () const;
  double quotaTotalAnual();
  void print(double horas)  ;
	
};

