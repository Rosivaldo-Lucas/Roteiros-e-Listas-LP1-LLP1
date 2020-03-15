#ifndef _RESTAURANTE_CASEIRO_
#define _RESTAURANTE_CASEIRO_
#include "mesaDeRestaurante.h"

class RestauranteCaseiro{
    public:
        RestauranteCaseiro();
        void adicionaMesa(Pedido pedido, int pos);
        double calculaTotalRestaurante();
        std::string getMesa();
        void setMesa(MesaDeRestaurante mesa, int pos);
    private:
        MesaDeRestaurante mesa[10];
};

#endif //_RESTAURANTE_CASEIRO_