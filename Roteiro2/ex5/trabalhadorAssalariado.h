#ifndef _TRABALHADOR_ASSALARIADO_
#define _TRABALHADOR_ASSALARIADO_
#include "trabalhador.h"

class TrabalhadorAssalariado:public Trabalhador{
    public:
        TrabalhadorAssalariado(std::string nome, double salario);
        double calculaPagamentoSemanal(int hora);
    private:

    protected:

};

#endif //_TRABALHADOR_ASSALARIADO_