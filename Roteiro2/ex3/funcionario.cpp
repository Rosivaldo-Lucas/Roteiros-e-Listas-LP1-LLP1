#include "funcionario.h"

Funcionario::Funcionario(){

}

Funcionario::Funcionario(int m, std::string n, double s){
    this->matricula = m;
    this->nome = n;
    this->salario = s;
}

int Funcionario::getMatricula(){
    return this->matricula;
}
void Funcionario::setMatricula(int m){
    this->matricula = m;
}

std::string Funcionario::getNome(){
    return this->nome;
}
void Funcionario::setNome(std::string n){
    this->nome = n;
}

double Funcionario::getSalario(){
    return this->salario;
}

void Funcionario::setSalario(double s){
    this->salario = s;
}