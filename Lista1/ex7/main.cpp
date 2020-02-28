#include <iostream>
#include "controlePagamento.h"
#include "pagamento.h"

using namespace std;

int main(void){
    Pagamento p1 = Pagamento(500, "Rosivaldo");
    Pagamento p2 = Pagamento(600, "Lucas");
    ControlePagamento cp1 = ControlePagamento(p1, 1);
    //ControlePagamento cp1 = ControlePagamento(p2, 2);
    cout << cp1.calculaTotalPagamento() << endl;
    cout << cp1.calculaTotalPagamento() << endl;
    cout << cp1.existePagamento("Rosivaldo") << endl;
    cout << cp1.existePagamento("Lucas") << endl;
    return 0;
}