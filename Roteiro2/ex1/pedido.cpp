#include "pedido.h"

Pedido::Pedido(){

}

Pedido::Pedido(int n, std::string d, int qtd, double p){
    if(n <= 0 || qtd <= 0 || p < 0){
        this->numero = 1;
        this->descricao = d;
        this->quantidade = 1;
        this->preco = 0.0;
    }else{
        this->numero = n;
        this->descricao = d;
        this->quantidade = qtd;
        this->preco = p;
    }
}

int Pedido::getNumero(){
    return this->numero;
}
void Pedido::setNumero(int n){
    this->numero = n;
}

std::string Pedido::getDescricao(){
    return this->descricao;
}
void Pedido::setDescricao(std::string d){
    this->descricao = d;
}

int Pedido::getQuantidade(){
    return this->quantidade;
}
void Pedido::setQuantidade(int qtd){
    this->quantidade = qtd;
}

double Pedido::getPreco(){
    return this->preco;
}
void Pedido::setPreco(double p){
    this->preco = p;
}