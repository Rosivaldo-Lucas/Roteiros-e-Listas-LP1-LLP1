#ifndef _CONTROLE_GASTOS_
#define _CONTROLE_GASTOS_
#include <string>
#include "despesa.h"

class ControleGastos{
    public:
        void setDespesa(Despesa d, int pos);
        double calculaTotalDespesa();
        bool existeDespesaTipo(std::string tipo);
    private:
        Despesa despesa[1];// = Despesa();
    protected:

};

#endif