#include "Assalariado.h"

Assalariado::Assalariado() : Funcionario(){
  this->setSalario(0.0);
}
Assalariado::Assalariado(double salario, std::string nome, int matricula) : Funcionario(nome, matricula){
  this->setSalario(salario);
}
Assalariado::~Assalariado(){}

double Assalariado::calcularSalario(){
  return this->getSalario();
}

double Assalariado::getSalario(){
  return this->salario;
}
void Assalariado::setSalario(double salario){
  this->salario = salario;
}