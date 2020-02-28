#include "pessoa.h"
#include <string>

Pessoa::Pessoa(std::string nome){
    this->nome = nome;
}
Pessoa::Pessoa(std::string nome, int idade, int telefone){
    this->nome = nome;
    this->idade = idade;
    this->telefone = telefone;
}

std::string Pessoa::getNome(){
    return this->nome;
}
void Pessoa::setNome(std::string nome){
    this->nome = nome;
}

int Pessoa::getIdade(){
    return this->idade;
}
void Pessoa::setIdade(int idade){
    this->idade = idade;    
}

int Pessoa::getTelefone(){
    return this->telefone;
}
void Pessoa::setTelefone(int telefone){
    this->telefone = telefone;    
}