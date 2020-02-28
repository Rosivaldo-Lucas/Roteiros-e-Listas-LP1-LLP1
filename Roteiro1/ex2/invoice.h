#ifndef _INVOICE_
#define _INVOICE_
#include <string>

class Invoice{
    public:
        Invoice(int n, std::string d, int q, double p);
        int getNumero();
        void setNumero(int n);
        std::string getDescricao();
        void setDescricao(std::string d);
        int getQtd();
        void setQtd(int q);
        double getPreco();
        void setPreco(double p);
        double getInvoiceAmount();

    private:
        int numero;
        std::string descricao;
        int qtd;
        double preco;

    protected:

};

#endif