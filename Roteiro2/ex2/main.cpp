#include <iostream>
#include "pessoa.h"

using namespace std;

int main(void){
    Endereco end1 = Endereco("Avenida Brasil", 132, "Centro", "Juripiranga", "PB", "58330000");
    Endereco end2 = Endereco("Nova Rua", 155, "Centro", "Ibiranga", "PE", "99999999");
    Pessoa p1 = Pessoa("Rosivaldo", end1, "86606134");
    Pessoa p2 = Pessoa("Lucas", end2, "88240774");
    cout << "Nome: " << p1.getNome() << endl;
    cout << "Endereco: " << p1.getEndereco() << endl;
    cout << endl;
    cout << endl;
    cout << endl;
    cout << "Nome: " << p2.getNome() << endl;
    cout << "Endereco: " << p2.getEndereco() << endl;
    return 0;
}