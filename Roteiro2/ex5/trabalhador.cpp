#include "trabalhador.h"

Trabalhador::Trabalhador(std::string nome, double salario){
    this->nome = nome;
    this->salario = salario;
}

double Trabalhador::calculaPagamentoSemanal(int horas){
    return this->salario/4;
}