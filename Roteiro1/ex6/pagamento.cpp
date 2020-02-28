#include "pagamento.h"

double Pagamento::getValorPagamento(){
    return this->valorPagamento;
}
void Pagamento::setValorPagamento(double valor){
    this->valorPagamento = valor;
}

std::string Pagamento::getNomeFuncionario(){
    return this->nomeFuncionario;
}
void Pagamento::setNomeFuncionario(std::string nome){
    this->nomeFuncionario = nome;
}