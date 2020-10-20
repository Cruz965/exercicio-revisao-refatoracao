#include <string>
#include "Engenheiro.hpp"
#include "Empregado.hpp"

  //Defini construtores para as classes engenheiro e vendedor e empregado
  Engenheiro::Engenheiro () : Empregado("",0),projetos(0) {

  };
  Engenheiro::Engenheiro (std::string name, double  salHor, int x):Empregado(name,salHor),projetos(x) {

  };
  void Engenheiro::setNdeProj (int n) {projetos = n;}
  double Engenheiro::getNdeProj () const { return projetos;}
  //criando a função print para o objeto engenheiro
  void Engenheiro::print(double horas) {
  std::cout << "Nome: " << this->getNome() << std::endl;
  std::cout << "Salario Mes: " << this->pagamentoMes(horas) << std::endl;
  std::cout << "Projetos: " << this->getNdeProj() << std::endl;  }
 
  
	


