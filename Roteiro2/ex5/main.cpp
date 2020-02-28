#include <iostream>
#include "trabalhador.h"
#include "trabalhadorPorHora.h"
#include "trabalhadorAssalariado.h"

using namespace std;

int main(void){
    Trabalhador t = Trabalhador("Novo", 500);
    TrabalhadorPorHora th = TrabalhadorPorHora("Vai", 500);
    TrabalhadorAssalariado ta = TrabalhadorAssalariado("Outro", 500);
    cout << t.calculaPagamentoSemanal(50) << endl;
    cout << th.calculaPagamentoSemanal(50) << endl;
    cout << ta.calculaPagamentoSemanal(50) << endl;
    return 0;
}