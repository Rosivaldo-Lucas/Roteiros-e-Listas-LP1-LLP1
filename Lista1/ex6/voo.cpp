#include "voo.h"
#include <string>
#include <sstream>

Voo::Voo(int n, Horario h, Data d){
    this->numeroVoo = n;
    this->horario = h;
    this->data = d;
    int t = sizeof(this->cadeiras)/sizeof(this->cadeiras[0]);
    for(int i = 0; i < t; i++){
        this->cadeiras[i] = 0;
    }
}

int Voo::proximoLivre(){
    int t = sizeof(this->cadeiras)/sizeof(this->cadeiras[0]);
    for(int i = 0; i < t; i++){
        if(this->cadeiras[i] == 0){
            return (i + 1);
        }
    }
    return 1;
}

int Voo::verifica(int numero){
    int t = sizeof(this->cadeiras)/sizeof(this->cadeiras[0]);
    for(int i = 0; i < t; i++){
        if(numero == this->cadeiras[i]){
            return 1;
        }
    }
    return 0;
}

bool Voo::ocupa(int numero){
    int t = sizeof(this->cadeiras)/sizeof(this->cadeiras[0]);
    for(int i = 0; i < t; i++){
        if(this->cadeiras[numero] == 0){
            this->cadeiras[numero] = 1;
            return true;
        }
    }
    return false;
}

int Voo::vagas(){
    int t = sizeof(this->cadeiras)/sizeof(this->cadeiras[0]);
    int qtd = 0;
    for(int i = 0; i < t; i++){
        if(this->cadeiras[i] == 0){
            qtd = qtd + 1;
        }
    }
    return qtd;
}

int Voo::getNumVoo(){
    return this->numeroVoo;
}

std::string Voo::getData(){
    std::stringstream str;
    str << this->data.getDia() << "/" << this->data.getMes() << "/" << this->data.getAno() << std::endl;
    return str.str();
}

std::string Voo::getHorario(){
    std::stringstream str;
    str << this->horario.getHora() << ":" << this->horario.getMinuto() << ":" << this->horario.getSegundo() << std::endl;
    return str.str();
}