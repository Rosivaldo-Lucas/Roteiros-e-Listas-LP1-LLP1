#include "Funcionario.h"

Funcionario::Funcionario(){
  this->setNome("");
  this->setMatricula(0);
}
Funcionario::Funcionario(std::string nome, int matricula){
  this->setNome(nome);
  this->setMatricula(matricula);
}
Funcionario::~Funcionario(){}

std::string Funcionario::getNome(){
  return this->nome;
}
void Funcionario::setNome(std::string nome){
  this->nome = nome;
}

int Funcionario::getMatricula(){
  return this->matricula;
}
void Funcionario::setMatricula(int matricula){
  this->matricula = matricula;
}
