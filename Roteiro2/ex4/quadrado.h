#ifndef _QUADRADO_
#define _QUADRADO_
#include "figuraGeometrica.h"

class Quadrado:public FiguraGeometrica{
    public:
        Quadrado(std::string nome, double lado);
        double calculaArea();
};

#endif //_QUADRADO_