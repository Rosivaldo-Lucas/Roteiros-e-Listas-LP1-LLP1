#include <iostream>

#include "IConta.h"
#include "Conta.h"
#include "ContaEspecial.h"
#include "SaldoNaoDisponivelException.h"

using namespace std;

int main(int argc, char *argv[]){
  Conta *conta = new Conta("Rosivaldo", 1500, 123456789, 700);
  Conta *conta02 = new Conta("Silva", 1500, 123456789, 900);
  ContaEspecial *contaEspecial = new ContaEspecial("Lucas", 1800, 987654321, 1200);
  
  // Classe Conta sem exception
  conta->sacar(100);
  conta->depositar(300);
  conta->definirLimite();
  cout << "Saldo: " << conta->getSaldo() << endl;
  cout << "Limite da conta: " << conta->getLimite() << endl;

  cout << "" << endl;

  cout << "Conta com exception" << endl;
  try{
    conta02->sacarException(1500);
    conta02->definirLimite();
    cout << "Saldo: " << conta02->getSaldo() << endl;
    cout << "Limite da conta: " << conta02->getLimite() << endl;
  }catch(SaldoNaoDisponivelException e){
    e = SaldoNaoDisponivelException();
  }

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