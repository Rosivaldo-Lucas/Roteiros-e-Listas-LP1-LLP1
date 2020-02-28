#ifndef _TRABALHADOR_
#define _TRABALHADOR_
#include <string>

class Trabalhador{
    public:
        Trabalhador();
        Trabalhador(std::string nome, double salario);
        virtual double calculaPagamentoSemanal(int horas);
    protected:
        std::string nome;
        double salario;
};

#endif //_TRABALHADOR_