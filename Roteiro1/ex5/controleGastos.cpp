#include "controleGastos.h"
#include <string>
#include "despesa.h"

void ControleGastos::setDespesa(Despesa d, int pos){
    this->despesa[pos] = d;
}

double ControleGastos::calculaTotalDespesa(){
    double totDespesa;
    int tam = sizeof(this->despesa)/sizeof(this->despesa[0]);
    for(int i = 0; i < tam; i++){
        totDespesa += this->despesa[i].getValor();
    }
    return totDespesa;
}

/*bool ControleGastos::existeDespesaTipo(std::string tipo){
    int tam = sizeof(this->despesa)/sizeof(this->despesa[0]);
    for(int i = 0; i < tam; i++){
        if(this->despesa[i].getTipo() == tipo){
            return true;
        }else{
            return false;
        }
    }
}*/