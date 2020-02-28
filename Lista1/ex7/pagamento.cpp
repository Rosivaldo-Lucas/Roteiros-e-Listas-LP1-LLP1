#include "pagamento.h"

Pagamento::Pagamento(){

}
Pagamento::Pagamento(double vp, std::string nomeFun){
    this->valorPagamento = vp;
    this->nomeFuncionario = nomeFun;
}

double Pagamento::getValorPagamento(){
    return this->valorPagamento;
}
void Pagamento::setValorPagamento(double vp){
    this->valorPagamento = vp;
}

std::string Pagamento::getNomeFuncionario(){
    return this->nomeFuncionario;
}
void Pagamento::setNomeFuncionario(std::string nomeFun){
    this->nomeFuncionario = nomeFun;
}