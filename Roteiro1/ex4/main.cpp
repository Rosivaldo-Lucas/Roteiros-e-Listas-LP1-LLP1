#include <iostream>
#include <string>
#include "pessoa.h"

using namespace std;

int main(void){
    Pessoa *p1 = new Pessoa("Rosivaldo"); //CONSTRUTOR COM APENAS UM PARAMETRO
    Pessoa *p2 = new Pessoa("Lucas", 44, 86491088); //CONSTRUTOR COM TRES PARAMETROS

    p1->setIdade(50);
    p1->setTelefone(854555852);
    cout << "INFORMACOES DA #1 PESSOA" << endl;
    cout << "Nome #1 pessoa: " << p1->getNome() << endl;
    cout << "Idade #1 pessoa: " << p1->getIdade() << endl;
    cout << "Telefone #1 pessoa: " << p1->getTelefone() << endl;
    cout << "-----------------------------------------" << endl;
    cout << "INFORMACOES DA #2 PESSOA" << endl;
    cout << "Nome #2 pessoa: " << p2->getNome() << endl;
    cout << "Idade #2 pessoa: " << p2->getIdade() << endl;
    cout << "Telefone #2 pessoa: " << p2->getTelefone() << endl;

    return 0;
}