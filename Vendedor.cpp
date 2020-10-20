#include <string>
#include "Vendedor.hpp"
#include "Empregado.hpp"

  Vendedor::Vendedor () : Empregado("",0),quotaMensalVendas(0){

  };
  Vendedor::Vendedor (std::string name, double salHor, double x):Empregado(name,salHor),quotaMensalVendas(x){

  } ;
  void Vendedor::setQMV (double x) {this->quotaMensalVendas = x;};  
	double Vendedor::getQMV () const { return quotaMensalVendas;}
  double Vendedor::quotaTotalAnual() {
	  return this->getQMV() * 12;
	}
  
  void Vendedor::print(double horas) {
  std::cout << "Nome: " << this->getNome() << std::endl;
  std::cout << "Salario Mes: " << this->pagamentoMes(horas) << std::endl;
  std::cout << "Projetos: " << this->quotaTotalAnual() << std::endl;  };

