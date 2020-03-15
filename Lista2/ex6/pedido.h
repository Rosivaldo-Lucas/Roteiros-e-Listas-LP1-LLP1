#ifndef _PEDIDO_
#define _PEDIDO_
#include <string>

class Pedido{
    public:
        Pedido();
        Pedido(int n, std::string d, int qtd, double p);
        int getNumero();
        void setNumero(int n);
        std::string getDescricao();
        void setDescricao(std::string d);
        int getQuantidade();
        void setQuantidade(int qtd);
        double getPreco();
        void setPreco(double p);
    private:
        int numero;
        std::string descricao;
        int quantidade;
        double preco;
};

#endif //_PEDIDO_