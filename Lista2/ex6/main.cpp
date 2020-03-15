#include <iostream>
#include "pedido.h"
#include "mesaDeRestaurante.h"
using namespace std;

int main(void){
    MesaDeRestaurante m1 = MesaDeRestaurante();
    MesaDeRestaurante m2 = MesaDeRestaurante();
    Pedido p1 = Pedido(1, "bolo", 2, 5.00);
    Pedido p2 = Pedido(1, "cerveja", 1, 5.00);
    Pedido p3 = Pedido(1, "bolo", 2, 5.00);
    Pedido p4 = Pedido(1, "b", 2, 5.00);
    Pedido p5 = Pedido(1, "c", 1, 5.00);
    Pedido p6 = Pedido(1, "b", 2, 5.00);
    m1.adicionaPedido(p1);
    m1.adicionaPedido(p2);
    m1.adicionaPedido(p3);
    m2.adicionaPedido(p4);
    m2.adicionaPedido(p5);
    m2.adicionaPedido(p6);
    cout << m1.getPedido() << endl;
    cout << endl;
    cout << m2.getPedido() << endl;
    return 0;
}