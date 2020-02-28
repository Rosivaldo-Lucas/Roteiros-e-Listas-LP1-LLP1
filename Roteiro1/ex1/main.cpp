#include <iostream>
#include "data.h"

using namespace std;

int main(void){
    Data *data = new Data(31, 12, 2019);
    cout << "================================" << endl;
    cout << "DADOS PADORES" << endl;
    cout << "================================" << endl;
    cout << "Dia: " << data->getDia() << endl;
    cout << "Mes: " << data->getMes() << endl;
    cout << "Ano: " << data->getAno() << endl;
    cout << "================================" << endl;
    cout << "CHAMANDO A FUNCAO AVANCA DIA" << endl;
    cout << "================================" << endl;
    data->avancarDia();
    cout << "Dia: " << data->getDia() << endl;
    cout << "Mes: " << data->getMes() << endl;
    cout << "Ano: " << data->getAno() << endl;
    cout << "================================" << endl;
    return 0;
}