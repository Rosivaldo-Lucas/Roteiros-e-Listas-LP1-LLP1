#include "consultor.h"

Consultor::Consultor(){

}

Consultor::Consultor(int m, std::string n, double s){
    this->matricula = m;
    this->nome = n;
    this->salario = s;
}

double Consultor::getSalario(){
    return  this->salario + (this->salario * 0.10);
}

float getSalario(float percentual){
    return percentual;
}