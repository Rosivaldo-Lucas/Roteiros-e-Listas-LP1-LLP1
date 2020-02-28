#include "trabalhadorAssalariado.h"
TrabalhadorAssalariado::TrabalhadorAssalariado(std::string nome, double salario): Trabalhador(nome, salario){

}

double TrabalhadorAssalariado::calculaPagamentoSemanal(int hora){
    return this->salario/4.0;
}