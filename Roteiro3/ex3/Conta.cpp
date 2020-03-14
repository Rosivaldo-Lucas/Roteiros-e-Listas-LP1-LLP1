#include "Conta.h"

#include <iostream>

Conta::Conta(){
  setNomeCliente("");
  setNumero(0);
  setSaldo(0.0);
}
Conta::Conta(std::string nomeCliente, int numero, double saldo){
  setNomeCliente(nomeCliente);
  setNumero(numero);
  setSaldo(saldo);
}
Conta::~Conta(){}

void Conta::sacar(double valor){
  if(valor > this->getSaldo()){
    std::cout << "Saldo indisponivel." << std::endl;
    return;
  }
  this->setSaldo(this->getSaldo() - valor);
}
void Conta::depositar(double valor){
  this->setSaldo(this->getSaldo() + valor);
}

std::string Conta::getNomeCliente(){
  return this->nomeCliente;
}
void Conta::setNomeCliente(std::string nomeCliente){
  this->nomeCliente = nomeCliente;
}

int Conta::getNumero(){
  return this->numero;
}
void Conta::setNumero(int numero){
  this->numero = numero;
}

double Conta::getSaldo(){
  return saldo;
}
void Conta::setSaldo(double saldo){
  this->saldo = saldo;
  if(saldo < 0){
    this->saldo = 0;
  }
}