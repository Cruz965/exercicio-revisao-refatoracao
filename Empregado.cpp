
#include "Empregado.hpp"
 

     Empregado::Empregado(std::string name, double salHor) {
         nome = name;
         salarioHora = salHor;
       
     };


    //criei métodos get e set para a superclasse Empregado
    
    double  Empregado::getSalHora () const { return salarioHora;}
    std::string  Empregado::getNome () const{return nome;};
    void  Empregado::setNome (std::string name) {this->nome = name;};
    
    void  Empregado::setSalHor (double y) {this->salarioHora = y;};
    //fim dos set e get
    
    double  Empregado::pagamentoMes(double horasTrabalhadas) {
 
      double t = horasTrabalhadas;
	  
	  //Cálculo de hora extra (+50% se horasTrabalhadas > 8)
      if (horasTrabalhadas > 8) {
        double x = horasTrabalhadas - 8;
        t += x / 2;
      }
	  return t * salarioHora;
    }

	//Criando uma função print pra tirar aquele tanto de cout da main;
    void Empregado::print(double horas) {
  std::cout << "Nome: " << this->getNome() << std::endl;
  std::cout << "Salario Mes: " << this->pagamentoMes(horas) << std::endl; }
 


