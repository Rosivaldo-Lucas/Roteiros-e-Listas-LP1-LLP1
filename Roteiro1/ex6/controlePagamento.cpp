#include "controlePagamento.h"

void ControlePagamento::setPagamentos(Pagamento p, int pos){
    this->pagamento[pos] = p;
}

double ControlePagamento::calculaTotalPagamentos(){
    double totPagamento;
    int tam = sizeof(this->pagamento)/sizeof(pagamento[0]);
    for(int i = 0; i < tam; i++){
        totPagamento += this->pagamento[i].getValorPagamento();
    }
    return totPagamento;
}

/*bool ControlePagamento::existePagamentoParaFuncionario(std::string nomeFuncionario){
    int tam = sizeof(this->pagamento)/sizeof(this->pagamento[0]);
    for(int i = 0; i < tam; i++){
        if(nomeFuncionario.compare(this->pagamento[i].getNomeFuncionario()) == 0){
            return true;
        }else{
            return false;
        }
    }
}*/