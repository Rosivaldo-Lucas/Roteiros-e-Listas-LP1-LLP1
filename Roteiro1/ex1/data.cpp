#include "data.h"

Data::Data(int d, int m, int a){
    if(m > 0 && m <= 12){
        setAno(a);
        if(m == 2){
            setMes(m);
            if(d > 0 && d <= 29){
                setDia(d);
            }else{
                setDia(1);
            }
        }else if(m == 4 || m == 6 || m == 9 || m == 11){
            setMes(m);
            if(d > 0 && d <= 30){
                setDia(d);
            }else{
                setDia(1);
            }
        }else{
            setMes(m);
            if(d > 0 && d <= 31){
                setDia(d);
            }else{
                setDia(1);
            }
        }
    }else{
        setAno(a);
        setMes(1);
        setDia(1);
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

void Data::avancarDia(){
    int fimMes;
    switch(getMes()){
        case 1:
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
        case 12:
            fimMes = 31;
            break;
        case 2:
            fimMes = 29;;
            break;
        case 4:
        case 6:
        case 9:
        case 11:
            fimMes = 30;
            break;
    }
    if(getDia() < fimMes){
        setDia(getDia() + 1);
    }else{
        setMes(getMes() + 1);
        setDia(1);
    }
    if(getDia() == 31 || getMes() == 12){
        this->ano++;
        this->mes = 1;
        this->dia = 1;
        //setAno(getAno() + 1);
        //setDia(1);
        //setMes(1);
    }
}