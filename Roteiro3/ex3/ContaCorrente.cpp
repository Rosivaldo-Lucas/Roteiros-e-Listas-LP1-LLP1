#include "ContaCorrente.h"

ContaCorrente::ContaCorrente() : Conta(){
  this->setSalario(0.0);
}
ContaCorrente::ContaCorrente(double salario, std::string nomeCliente, int numero, double saldo) : Conta(nomeCliente, numero, saldo){
  this->setSalario(salario);
}
ContaCorrente::~ContaCorrente(){}

double ContaCorrente::definirLimite(){
  this->limite = (2 * this->getSalario());
  return this->getLimite();
}

double ContaCorrente::getSalario(){
  return this->salario;
}
void ContaCorrente::setSalario(double salario){
  this->salario = salario;
  if(salario < 0){
    this->salario = 940.00;
  }
}

int ContaCorrente::getLimite(){
  return this->limite;
}
