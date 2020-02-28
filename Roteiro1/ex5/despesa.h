#ifndef _DESPESA_
#define _DESPESA_
#include <string>

class Despesa{
    public:
        double getValor();
        void setValor(double valor);
        std::string getTipo();
        void setTipo(std::string tipo);
    private:
        double valor;
        std::string tipo; 
    protected:

};

#endif