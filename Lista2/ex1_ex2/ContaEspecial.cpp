#include "ContaEspecial.h"

ContaEspecial::ContaEspecial() : Conta(){}
ContaEspecial::ContaEspecial(std::string nomeCliente, double salarioMensal, int numeroConta, double saldo) : Conta(nomeCliente, salarioMensal, numeroConta, saldo){}
ContaEspecial::~ContaEspecial(){}

void ContaEspecial::definirLimite(){
  this->setLimite(3 * this->getSalarioMensal());
}