#ifndef _PAGAMENTO_
#define _PAGAMENTO_
#include <string>

class Pagamento{
    public:
        Pagamento();
        Pagamento(double vp, std::string nomeFun);
        double getValorPagamento();
        void setValorPagamento(double vp);
        std::string getNomeFuncionario();
        void setNomeFuncionario(std::string nomeFun);
    private:
        double valorPagamento;
        std::string nomeFuncionario;
};

#endif //_PAGAMENTO_