#include <iostream>

#include "Conta.h"

Conta::Conta(){
  this->nomeCliente = "";
  this->salarioMensal = 0.0;
  this->numeroConta = 0;
  this->saldo = 0.0;
  this->limite = 0.0;
}
Conta::Conta(std::string nomeCliente, double salarioMensal, int numeroConta, double saldo){
  setNomeCliente(nomeCliente);
  setSalarioMensal(salarioMensal);
  setNumeroConta(numeroConta);
  setSaldo(saldo);
}
Conta::~Conta(){}

void Conta::sacar(double valor){
  if(valor > this->getSaldo()){
    std::cout << "Voce nao pode sacar um valor maior que o seu saldo." << std::endl;
  }
  this->setSaldo(this->getSaldo() - valor);
}
void Conta::depositar(double valor){
  if(valor < 0){
    std::cout << "Valor do deposito e negativo." << std::endl;
  }
  this->setSaldo(this->getSaldo() + valor);
}

std::string Conta::getNomeCliente(){
  return this->nomeCliente;
}
void Conta::setNomeCliente(std::string nomeCliente){
  this->nomeCliente = nomeCliente;
}

double Conta::getSalarioMensal(){
  return this->salarioMensal;
}
void Conta::setSalarioMensal(double salarioMensal){
  this->salarioMensal = salarioMensal;
}

int Conta::getNumeroConta(){
  return this->numeroConta;
}
void Conta::setNumeroConta(int numeroConta){
  this->numeroConta = numeroConta;
}

double Conta::getSaldo(){
  return this->saldo;
}
void Conta::setSaldo(double saldo){
  this->saldo = saldo;
}

double Conta::getLimite(){
  return this->limite;
}
void Conta::setLimite(double limite){
  this->limite = limite;
}

void Conta::definirLimite(){
  this->limite = (2 * this->getSalarioMensal());
}
