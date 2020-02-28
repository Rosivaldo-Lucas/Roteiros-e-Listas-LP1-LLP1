#include <iostream>
#include "controlePagamento.h"
#include "pagamento.h"

using namespace std;

int main(void){
    ControlePagamento contPag = ControlePagamento();
    Pagamento p1 = Pagamento();
    Pagamento p2 = Pagamento();
    p1.setNomeFuncionario("Rosivaldo");
    p1.setValorPagamento(150.00);
    p2.setNomeFuncionario("Lucas");
    p2.setValorPagamento(50.00);
    contPag.setPagamentos(p1, 0);
    contPag.setPagamentos(p2, 1);
    cout << contPag.calculaTotalPagamentos() << endl;

    return 0;
}