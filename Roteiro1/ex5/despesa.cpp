#include "despesa.h"
#include <string>

double Despesa::getValor(){
    return this->valor;
}
void Despesa::setValor(double valor){
    this->valor = valor;
}

std::string Despesa::getTipo(){
    return this->tipo;
}
void Despesa::setTipo(std::string tipo){
    this->tipo = tipo;
}