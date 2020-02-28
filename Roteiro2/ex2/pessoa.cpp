#include "pessoa.h"
#include <sstream>

Pessoa::Pessoa(std::string nome){
    this->nome = nome;
}
Pessoa::Pessoa(std::string nome, Endereco end, std::string telefone){
    this->nome = nome;
    this->end = end;
    this->telefone = telefone;
}

std::string Pessoa::getNome(){
    return this->nome;
}
void Pessoa::setNome(std::string nome){
    this->nome = nome;
}

std::string Pessoa::getEndereco(){
    std::stringstream str;
    str << this->end.getRua() << ", " << this->end.getNumero() << ", " << this->end.getBairro() << ", " << this->end.getCidade() << ", " << this->end.getEstado() << ", " << this->end.getCep() << ", " << std::endl;
    return str.str();
}
void Pessoa::setEndereco(Endereco end){
    this->end = end;
}