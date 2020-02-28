#include <iostream>
#include "funcionario.h"
#include "consultor.h"

using namespace std;

int main(void){
    Funcionario f1 = Funcionario(123, "Lucas", 500);
    Consultor c1 = Consultor(456, "Rosivaldo", 500);
    cout << f1.getSalario() << endl;
    cout << c1.getSalario() << endl;
    return 0;
}