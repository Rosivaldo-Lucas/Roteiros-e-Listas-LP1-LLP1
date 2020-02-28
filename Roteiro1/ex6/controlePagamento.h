#ifndef _CONTROLE_PAGAMENTO_
#define _CONTROLE_PAGAMENTO_
#include "pagamento.h"

class ControlePagamento{
    public:
        void setPagamentos(Pagamento p, int pos);
        double calculaTotalPagamentos();
        bool existePagamentoParaFuncionario(std::string nomeFuncionario);
    private:
        Pagamento pagamento[5];
    protected:

};

#endif