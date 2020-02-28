#include "restauranteCaseiro.h"
#include <sstream>

RestauranteCaseiro::RestauranteCaseiro(){

}

void RestauranteCaseiro::adicionaMesa(Pedido pedido, int pos){
    this->mesa[pos].adicionaPedido(pedido);
}

double RestauranteCaseiro::calculaTotalRestaurante(){
    double total = 0;
    for(int i = 0; i < 10; i++){
        total = total + mesa[i].calculaTotal();
    }
    return total;
}

std::string RestauranteCaseiro::getMesa(){
    std::stringstream str;
    for(int i = 0; i < 10; i++){
        if(this->mesa[i].getPedido() != ""){
            str << mesa[i].getPedido();
        }
    }
    return str.str();
}

void RestauranteCaseiro::setMesa(MesaDeRestaurante mesa, int pos){
    this->mesa[pos] = mesa;
}