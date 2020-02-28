#include "pessoa.h"

Pessoa::Pessoa(std::string nome){
    this->nome = nome;
}

Pessoa::Pessoa(std::string nome, int idade, std::string telefone){
    this->nome = nome;
    if(idade < 0){
        this->idade = 18;
    }else{
        this->idade = idade;
    }
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

std::string Pessoa::getTelefone(){
    return this->telefone;
}
void Pessoa::setTelefone(std::string telefone){
    this->telefone = telefone;
}