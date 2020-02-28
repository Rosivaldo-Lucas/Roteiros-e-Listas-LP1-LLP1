#include "empregado.h"
#include <string>

Empregado::Empregado(std::string nome, std::string sobrenome, double salario){
    this->nome = nome;
    this->sobrenome = sobrenome;
    if(salario <= 0){
        this->salario = 980.00; //SALARIO PADRAO
    }else{
        this->salario = salario;
    }    
}

std::string Empregado::getNome(){
    return this->nome;
}
void Empregado::setNome(std::string nome){
    this->nome = nome;
}

std::string Empregado::getSobrenome(){
    return this->sobrenome;
}
void Empregado::setSobrenome(std::string sobrenome){
    this->sobrenome = sobrenome;
}

double Empregado::getSalario(){
    return this->salario;
}
void Empregado::setSalario(double salario){
    this->salario = salario;
}

void Empregado::aumento(double salario){
    double nSalario;
    nSalario = (getSalario()*0.1) + getSalario();
    setSalario(nSalario);
}