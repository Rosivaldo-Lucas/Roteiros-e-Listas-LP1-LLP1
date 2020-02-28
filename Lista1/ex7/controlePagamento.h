#ifndef _CONTROLE_PAGAMENTO_
#define _CONTROLE_PAGAMENTO_
#include "pagamento.h"

class ControlePagamento{
    public:
        ControlePagamento();
        ControlePagamento(Pagamento pagamento, int pos);
        void setPagamento(Pagamento pagamento, int pos);
        double calculaTotalPagamento();
        bool existePagamento(std::string nomeFun);
    private:
        Pagamento pagamento[10];
};

#endif //_CONTROLE_PAGAMENTO_