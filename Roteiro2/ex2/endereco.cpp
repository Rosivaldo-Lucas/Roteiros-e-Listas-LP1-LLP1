#include "endereco.h"
#include <sstream>

Endereco::Endereco(){
    
}

Endereco::Endereco(std::string r, int n, std::string b, std::string c, std::string e, std::string cep){
    this->rua = r;
    this->numero = n;
    this->bairro = b;
    this->cidade = c;
    this->estado = e;
    this->cep = cep;    
}

std::string Endereco::toString(){
    std::stringstream str;
    str << this->rua << ", " << this->numero << ", " << this->bairro << ", " << this->cidade << ", " << this->estado << ", " << this->cep << ", " << std::endl;
    return str.str();
}

std::string Endereco::getRua(){
    return this->rua;
}
void Endereco::setRua(std::string rua){
    this->rua = rua;
}

int Endereco::getNumero(){
    return this->numero;
}
void Endereco::setNumero(int numero){
    this->numero = numero;
}

std::string Endereco::getBairro(){
    return this->bairro;
}
void Endereco::setBairro(std::string bairro){
    this->bairro = bairro;
}

std::string Endereco::getCidade(){
    return this->cidade;
}
void Endereco::setCidade(std::string cidade){
    this->cidade = cidade;
}

std::string Endereco::getEstado(){
    return this->estado;
}
void Endereco::setEstado(std::string estado){
    this->estado = estado;
}

std::string Endereco::getCep(){
    return this->cep;
}
void Endereco::setCep(std::string cep){
    this->cep = cep;
}