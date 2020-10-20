#include <string>
#include "Empregado.hpp"

class Vendedor : public Empregado {
 
  public:	  
	double quotaTotalAnual() {
	  return this->getQMV() * 12;
	}
     void print(double horas)  override {
  std::cout << "Nome: " << this->getNome() << std::endl;
  std::cout << "Salario Mes: " << this->pagamentoMes(horas) << std::endl;
  std::cout << "Projetos: " << this->quotaTotalAnual() << std::endl;  
  
  }

	
};

