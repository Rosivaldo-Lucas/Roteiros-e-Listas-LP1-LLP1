#include <iostream>
#include "horario.h"

using namespace std;

int main(void){
    Horario h1 = Horario(25, 68, 90);
    h1.avancarHora();
    cout << "hora: " << h1.getHora() << endl;
    cout << "minuto: " << h1.getMinuto() << endl;
    cout << "segundo: " << h1.getSegundo() << endl;
    cout << "--------------------------------------" << endl;
    h1.avancarHora();
    cout << "hora: " << h1.getHora() << endl;
    cout << "minuto: " << h1.getMinuto() << endl;
    cout << "segundo: " << h1.getSegundo() << endl;
    return 0;
}