#include "data.h"

Data::Data(int d, int m, int a){
    if(m > 0 && m <= 12){
        if(m == 4 || m == 6 || m == 9 || m == 11){
            if(d > 0 && d <= 30){
                this->dia = d;
                this->mes = m;
                this->ano = a;
            }else{
                this->dia = 1;
                this->mes = m;
                this->ano = a;
            }
        }else if(m == 2){
            if((d > 0 && d <= 28) || (d > 0 && d <= 29)){
                this->dia = d;
                this->mes = m;
                this->ano = a;
            }else{
                this->dia = 1;
                this->mes = m;
                this->ano = a;
            }
        }else{
            if(d > 0 && d <= 31){
                this->dia = d;
                this->mes = m;
                this->ano = a;
            }else{
                this->dia = 1;
                this->mes = m;
                this->ano = a;
            }
        }
    }else{
        this->dia = 1;
        this->mes = 1;
        this->ano = a;
    }
}

int Data::getDia(){
    return this->dia;
}
void Data::setDia(int d){
    this->dia = d;
}

int Data::getMes(){
    return this->mes;
}
void Data::setMes(int m){
    this->mes = m;
}

int Data::getAno(){
    return this->ano;
}
void Data::setAno(int a){
    this->ano = a;
}

int Data::compara(Data data){
    if(this->getDia() == data.dia && this->getMes() == data.mes && this->getAno() == data.ano){
        return 0;
    }else if(this->getDia() > data.dia && this->getMes() > data.mes && this->getAno() > data.ano){
        return 1;
    }else if(this->getDia() < data.dia && this->getMes() < data.mes && this->getAno() < data.ano){
        return -1;
    }else{
        return -2;
    }
}

bool Data::isBissexto(Data data){
    if(this->getAno() % 4 == 0 && this->getAno() % 100 != 0){
        return true;
    }
    return false;
}