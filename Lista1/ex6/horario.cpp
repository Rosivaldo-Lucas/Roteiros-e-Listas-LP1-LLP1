#include "horario.h"

Horario::Horario(){
    //CONSTRUTOR SEM PARAMETROS
}

Horario::Horario(int h, int m, int s){
    if((h >= 0 && h <= 23) && (m >= 0 && m <= 59) && (s >= 0 && s <= 59)){
        this->hora = h;
        this->minuto = m;
        this->segundo = s;
    }else{
        this->hora = 0;
        this->minuto = 0;
        this->segundo = 0;
    }
}

void Horario::setHora(int hora, int minuto, int segundo){
    if((hora >= 0 && hora <= 23) && (minuto >= 0 && minuto <= 59) && (segundo >= 0 && segundo <= 59)){
        this->hora = hora;
        this->minuto = minuto;
        this->segundo = segundo;
    }
}

void Horario::avancarHora(){
    this->segundo = this->segundo + 1;
    if(this->segundo > 59){
        this->segundo = 0;
        this->minuto = this->minuto + 1;
    }
    if(this->minuto > 59){
        this->minuto = 0;
        this->hora = this->hora + 1;
    }
    if(this->hora > 23){
        this->segundo = 0;
        this->minuto = 0;
        this->hora = 0;
    }
}

int Horario::getHora(){
    return this->hora;
}
void Horario::setHora(int hora){
    this->hora = hora;
}

int Horario::getMinuto(){
    return this->minuto;
}
void Horario::setMinuto(int minuto){
    this->minuto = minuto;
}

int Horario::getSegundo(){
    return this->segundo;
}
void Horario::setSegundo(int segundo){
    this->segundo = segundo;
}