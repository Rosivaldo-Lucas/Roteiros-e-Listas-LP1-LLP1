#ifndef _MESA_DE_RESTAURANTE_
#define _MESA_DE_RESTAURANTE_
#include "pedido.h"
#include <string>

class MesaDeRestaurante{
    public:
        MesaDeRestaurante();
        MesaDeRestaurante(Pedido pedido, int pos);
        void adicionaPedido(Pedido pedido);
        void zeraPedido();
        double calculaTotal();
        std::string getPedido();
        void setPedido(Pedido p, int pos);
    private:
        Pedido pedido[10];
};

#endif //_MESA_DE_RESTAURANTE_