#include <iostream>
#include "voo.h"
#include "horario.h"
#include "data.h"

using namespace std;

int main(void){
    Horario h1 = Horario(2, 20, 20);
    Data d1 = Data(1, 1, 2020);
    Voo v1 = Voo(1, h1, d1);
    cout << v1.getData() << endl;
    cout << v1.getHorario() << endl;
    v1.ocupa(1);
    return 0;
}