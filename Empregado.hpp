#ifndef EMPREGADO_H
#define EMPREGADO_H

#include <iostream>
#include <string>

class Empregado {
	//coloquei os atributos como private
    private:
     std::string nome;
    double salarioHora;  
    double quotaMensalVendas;  
    public:
    //criando métodos get e set para a superclasse Empregado
    double getQMV () const { return quotaMensalVendas;}
    double getSalHora () const { return salarioHora;}
    std::string getNome () const{return nome;};
    void setNome (std::string name) {this->nome = name;};
    void setQMV (double x) {this->quotaMensalVendas = x;};
    void setSalHor (double y) {this->salarioHora = y;};
    //fim dos set e get
    
    double pagamentoMes(double horasTrabalhadas) {
 
      double t = horasTrabalhadas;
	  
	  //Cálculo de hora extra (+50% se horasTrabalhadas > 8)
      if (horasTrabalhadas > 8) {
        double x = horasTrabalhadas - 8;
        t += x / 2;
      }
	  return t * salarioHora;
    }
	//Criando uma função print pra tirar aquele tanto de cout da main;
  virtual void print(double horas) = 0;

};

#endif