#include "Horista.h"

Horista::Horista() : Funcionario(){
  this->setSalarioPorHora(0.0);
  this->setHorasTrabalhadas(0.0);
}
Horista::Horista(double salarioPorHora, double horasTrabalhadas, std::string nome, int matricula) : Funcionario(nome, matricula){
  this->setSalarioPorHora(salarioPorHora);
  this->setHorasTrabalhadas(horasTrabalhadas);
}
Horista::~Horista(){}

double Horista::calcularSalario(){
  return (this->getSalarioPorHora() + (1.5 * this->getHorasTrabalhadas()));
}

double Horista::getSalarioPorHora(){
  return this->salarioPorHora;
}
void Horista::setSalarioPorHora(double salarioPorHora){
  this->salarioPorHora = salarioPorHora;
}

double Horista::getHorasTrabalhadas(){
  return this->horasTrabalhadas;
}
void Horista::setHorasTrabalhadas(double horasTrabalhadas){
  this->horasTrabalhadas = horasTrabalhadas;
}
