#ifndef EMPREGADO_H
#define EMPREGADO_H

#include <iostream>
#include <string>

class Empregado {
	//coloquei os atributos como private
    private:
     std::string nome;
    double salarioHora;  
  
    public:
    Empregado(std::string name, double salHor);
    //criei métodos get e set para a superclasse Empregado
    double getSalHora () const;
    std::string getNome () const;
    void setNome (std::string name);
    void setSalHor (double y);
    //fim dos set e get
    
    double pagamentoMes(double horasTrabalhadas);
	//Criando uma função print pra tirar aquele tanto de cout da main;
  void print(double horas);

};


#endif