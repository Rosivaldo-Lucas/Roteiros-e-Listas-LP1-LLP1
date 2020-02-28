#include "invoice.h"

Invoice::Invoice(int n, std::string d, int q, double p){
    if(q < 0){
        this->qtd = 0;
    }else{
        this->qtd = q;
    }
    if(p < 0){
        this->preco = 0.0;
    }else{
        this->preco = p;
    }
    this->numero = n;
    this->descricao = d;
}

int Invoice::getNumero(){
    return this->numero;
}
void Invoice::setNumero(int n){
    this->numero = n;
}

std::string Invoice::getDescricao(){
    return this->descricao;
}
void Invoice::setDescricao(std::string d){
    this->descricao = d;
}

int Invoice::getQtd(){
    return this->qtd;
}
void Invoice::setQtd(int q){
    this->qtd = q;
}

double Invoice::getPreco(){
    return this->preco;
}
void Invoice::setPreco(double p){
    this->preco = p;
}

double Invoice::getInvoiceAmount(){
    double fatura;
    fatura = (getQtd() * getPreco());
    return fatura;
}