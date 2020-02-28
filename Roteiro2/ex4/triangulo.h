#ifndef _TRIANGULO_
#define _TRIANGULO_
#include "figuraGeometrica.h"

class Triangulo:public FiguraGeometrica{
    public:
        Triangulo(std::string nome, double lado);
        double calculaArea();
    private:

    protected:

};

#endif //_TRIANGULO_