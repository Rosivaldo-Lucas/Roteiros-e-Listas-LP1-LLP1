#include <iostream>
#include "figuraGeometrica.h"
#include "quadrado.h"
#include "triangulo.h"

using namespace std;

int main(void){
    FiguraGeometrica f1 = FiguraGeometrica("F", 3);
    Quadrado q = Quadrado("Quadrado", 3);
    Triangulo t = Triangulo("Triangulo", 3);
    cout << q.calculaArea() << endl;
    cout << t.calculaArea() << endl;
    return 0;
}