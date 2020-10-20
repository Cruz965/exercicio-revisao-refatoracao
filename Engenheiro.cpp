#include <string>
#include "Empregado.hpp"

class Engenheiro : public Empregado {
  private: 
  
	int projetos;
  public:
  void setNdeProj (int n) {projetos = n;}
  double getNdeProj () const { return projetos;}
  //criando a função print para o objeto engenheiro
  void print(double horas)  override {
  std::cout << "Nome: " << this->getNome() << std::endl;
  std::cout << "Salario Mes: " << this->pagamentoMes(horas) << std::endl;
  std::cout << "Projetos: " << this->getNdeProj() << std::endl;  
 
  }
	
};

