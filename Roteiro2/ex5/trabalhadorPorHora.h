#ifndef _TRABALHADOR_POR_HORA_
#define _TRABALHADOR_POR_HORA_
#include "trabalhador.h"

class TrabalhadorPorHora:public Trabalhador{
    public:
        TrabalhadorPorHora(std::string nome, double);
        double calculaPagamentoSemanal(int hora);
    private:
        double valorHora;
    protected:
};

#endif //_TRABALHADOR_POR_HORA_