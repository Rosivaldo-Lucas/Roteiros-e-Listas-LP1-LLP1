#include <iostream>
#include "pessoa.h"

using namespace std;

int main(void){
    Pessoa *p1 = new Pessoa("Rosivaldo");
    Pessoa *p2 = new Pessoa("Lucas", 25, "999999");
    
    p1->setIdade(30);
    p1->setTelefone("88888");

    cout << "MOSTRANDO PESSOA" << endl;
    cout << "Nome: " << p1->getNome() << endl;
    cout << "Idade: " << p1->getIdade() << endl;
    cout << "Telefone: " << p1->getTelefone() << endl;
    cout << "----------------------------------------" << endl;
    cout << "Nome: " << p2->getNome() << endl;
    cout << "Idade: " << p2->getIdade() << endl;
    cout << "Telefone: " << p2->getTelefone() << endl;
    return 0;
}