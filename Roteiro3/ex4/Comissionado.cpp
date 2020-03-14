#include "Comissionado.h"

Comissionado::Comissionado() : Funcionario(){
  this->setVendasSemanais(0.0);
  this->setPercentualComissao(0.0);
}
Comissionado::Comissionado(double vendasSemanais, double percentualComissao, std::string nome, int matricula) : Funcionario(nome, matricula){
  this->setVendasSemanais(vendasSemanais);
  this->setPercentualComissao(percentualComissao);
}
Comissionado::~Comissionado(){}

double Comissionado::calcularSalario(){
  return (this->getVendasSemanais() * this->getPercentualComissao());
}

double Comissionado::getVendasSemanais(){
  return this->vendasSemanais;
}
void Comissionado::setVendasSemanais(double vendasSemanais){
  this->vendasSemanais = vendasSemanais;
}
double Comissionado::getPercentualComissao(){
  return this->percentualComissao;
}
void Comissionado::setPercentualComissao(double percentualComissao){
  this->percentualComissao = percentualComissao;
}
