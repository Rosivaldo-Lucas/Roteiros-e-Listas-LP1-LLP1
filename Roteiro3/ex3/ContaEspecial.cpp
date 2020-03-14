#include "ContaEspecial.h"

ContaEspecial::ContaEspecial() : ContaCorrente(){}
ContaEspecial::ContaEspecial(double salario, std::string nomeCliente, int numero, int saldo) : ContaCorrente(salario, nomeCliente, numero, saldo){}
ContaEspecial::~ContaEspecial(){}

double ContaEspecial::definirLimite(){
  this->limite = (4 * this->getSalario());
  return this->getLimite();
}