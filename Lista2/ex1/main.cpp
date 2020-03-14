#include <iostream>

#include "IConta.h"
#include "Conta.h"
#include "ContaEspecial.h"

using namespace std;

int main(int argc, char *argv[]){
  Conta *conta = new Conta("Rosivaldo", 1500, 123456789, 700);
  ContaEspecial *contaEspecial = new ContaEspecial("Lucas", 1800, 987654321, 1200);
  
  // Classe Conta
  conta->sacar(800);
  conta->depositar(300);
  conta->definirLimite();
  cout << "Limite da conta: " << conta->getLimite() << endl;

  cout << "" << endl;
  cout << "" << endl;
  cout << "" << endl;

  // Classe ContaEspecial
  contaEspecial->sacar(1000);
  contaEspecial->depositar(300);
  contaEspecial->definirLimite();
  cout << "Limite da conta especial: " << contaEspecial->getLimite() << endl;

  return 0;
}