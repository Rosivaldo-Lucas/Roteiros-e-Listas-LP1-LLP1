#include <iostream>
#include "controleGastos.h"
#include "despesa.h"
#include <string>

using namespace std;

int main(void){
    ControleGastos controle1 = ControleGastos();
    Despesa desp1 = Despesa();
    Despesa desp2 = Despesa();
    desp1.setTipo("Lanche");
    desp1.setValor(5.00);
    desp2.setTipo("Uber");
    desp2.setValor(15.00);
    controle1.setDespesa(desp1, 0);
    controle1.setDespesa(desp2, 1);
    cout << "DESPESAS" << endl;
    cout << "Total da despesas: " << controle1.calculaTotalDespesa() << endl;
    return 0;
}