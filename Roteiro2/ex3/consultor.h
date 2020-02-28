#ifndef _CONSULTOR_
#define _CONSULTOR_
#include "funcionario.h"

class Consultor:public Funcionario{
    public:
        Consultor();
        Consultor(int m, std::string n, double s);
        double getSalario();
        float getSalario(float percentual); 
    private:

    protected:

};

#endif //_CONSULTOR_