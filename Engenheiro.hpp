#include "Empregado.hpp"

  class Engenheiro : public Empregado {
  private: 
  int projetos;
  public:
  //Defini construtores para as classes engenheiro e vendedor e empregado
  
  
  Engenheiro (std::string name, double salHor, int x);
  Engenheiro();
  void setNdeProj (int n);
  double getNdeProj () const;
  //criando a função print para o objeto engenheiro
  void print(double horas) ;
	
};
