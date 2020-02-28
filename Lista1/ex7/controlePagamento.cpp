#include "controlePagamento.h"

ControlePagamento::ControlePagamento(){

}
ControlePagamento::ControlePagamento(Pagamento pagamento, int pos){
    this->pagamento[pos] = pagamento;
}

void ControlePagamento::setPagamento(Pagamento pagamento, int pos){
    this->pagamento[pos] = pagamento;
}

double ControlePagamento::calculaTotalPagamento(){
    double total = 0;
    for(int i = 0; i < 10; i++){
        total = total + this->pagamento[i].getValorPagamento();
    }
    return total;
}

bool ControlePagamento::existePagamento(std::string nomeFun){
    for(int i = 0; i < 10; i++){
        if(nomeFun == this->pagamento[i].getNomeFuncionario()){
            return true;
        }
    }
    return false;
}