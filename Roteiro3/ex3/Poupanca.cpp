#include "Poupanca.h"

Poupanca::Poupanca() : Conta(){
  this->setVariacao(0);
  this->setTaxaRendimento(0.0);
}
Poupanca::Poupanca(int variacao, double taxaRendimento, std::string nomeCliente, int numero, double saldo) : Conta(nomeCliente, numero, saldo){
  this->setVariacao(variacao);
  this->setTaxaRendimento(taxaRendimento);
}
Poupanca::~Poupanca(){}

double Poupanca::render(){
  if(this->getVariacao() == 1){
    this->setSaldo(this->getSaldo() * (1 + (this->getTaxaRendimento() / 100)));
    this->setTaxaRendimento(this->getTaxaRendimento() + 0.5);
  }

  if(this->getVariacao() == 51){
    this->setSaldo(this->getSaldo() * (1 + (this->getTaxaRendimento() / 100)));
  }
}

int Poupanca::getVariacao(){
  return this->variacao;
}
void Poupanca::setVariacao(int variacao){
  this->variacao = variacao;
}
double Poupanca::getTaxaRendimento(){
  return this->taxaRendimento;
}
void Poupanca::setTaxaRendimento(double taxaRendimento){
  this->taxaRendimento = taxaRendimento;
}
