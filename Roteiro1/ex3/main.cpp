#include <iostream>
#include <string>
#include "empregado.h"

using namespace std;

int main(void){
    Empregado *emp1 = new Empregado("Rosivaldo", "Lucas", 1000.00);
    Empregado *emp2 = new Empregado("Silva", "Lucas", 1500.00);
    cout << "===================================" << endl;
    cout << "DADOS SEM O AUMENTO DE 10%" << endl;
    cout << "===================================" << endl;
    cout << "Nome: " << emp1->getNome() << endl;
    cout << "Sobrenome: " << emp1->getSobrenome() << endl;
    cout << "Salario mensal: " << emp1->getSalario() << endl;
    cout << "Salario anual: " << emp1->getSalario()*12 << endl;
    cout << "===================================" << endl;
    cout << "\n";
    emp1->aumento(emp1->getSalario());
    cout << "===================================" << endl;
    cout << "DADOS COM O AUMENTO DE 10%" << endl;
    cout << "===================================" << endl;
    cout << "Nome: " << emp1->getNome() << endl;
    cout << "Sobrenome: " << emp1->getSobrenome() << endl;
    cout << "Salario mensal: " << emp1->getSalario() << endl;
    cout << "Salario anual: " << emp1->getSalario()*12 << endl;
    cout << "===================================" << endl;
    return 0;
}