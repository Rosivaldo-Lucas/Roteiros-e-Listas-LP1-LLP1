#include "trabalhadorPorHora.h"

TrabalhadorPorHora::TrabalhadorPorHora(std::string nome, double valorHora): Trabalhador(nome, 0){
    this->valorHora = valorHora;
}

double TrabalhadorPorHora::calculaPagamentoSemanal(int hora){
    double extra = 0;
    if(hora > 40){
        extra = (hora - 40) * 1.5;
        extra =  extra + 40;
    }else{
        extra = hora;
    }
    return valorHora * extra;
}