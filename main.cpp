#include "Engenheiro.cpp"
#include "Vendedor.cpp"

int main() {

  Engenheiro eng1;
  eng1.setNome("Joao Snow");
  eng1.setSalHor(35);
  eng1.setNdeProj(3); 
  eng1.print(9.5);
  std::cout << std::endl;
  
  Engenheiro eng2;
  eng2.setNome("Daniela Targaryen");
  eng2.setSalHor(30);
  eng2.setNdeProj(1); 
  eng2.print(8);
  std::cout << std::endl;
  
  Engenheiro eng3;
  eng3.setNome("Bruno Stark");
  eng3.setSalHor(30);
  eng3.setNdeProj(2);  
  eng3.print(8);
  std::cout << std::endl;
  
  
  Vendedor vend1;
  vend1.setNome("Tonho Lannister");
  vend1.setSalHor(20);
  vend1.setQMV(5000);
  vend1.print(6);
  std::cout << std::endl;
  
  Vendedor vend2;
  vend2.setNome("Jose Mormont");
  vend2.setSalHor(25);
  vend2.setQMV(3000);
  vend2.print(8);
  std::cout << std::endl;  
	
  Vendedor vend3;
  vend1.setNome("Sonia Stark");
  vend1.setSalHor(30);
  vend1.setQMV(4000);
  vend3.print(8);
  
  
  return 0;	
}