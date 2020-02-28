#ifndef _FIGURA_GEOMETRICA_
#define _FIGURA_GEOMETRICA_
#include <string>

class FiguraGeometrica{
    public:
        FiguraGeometrica(std::string nome, double lado);
        virtual double calculaArea();
    private:

    protected:
        std::string nome;
        double lado;
};


#endif //_FIGURA_GEOMETRICA_