#ifndef _PAGAMENTO_
#define _PAGAMENTO_
#include <string>


class Pagamento{
    public:
        double getValorPagamento();
        void setValorPagamento(double valor);
        std::string getNomeFuncionario();
        void setNomeFuncionario(std::string nome);
    private:
        double valorPagamento;
        std::string nomeFuncionario;
    protected:

};

#endif