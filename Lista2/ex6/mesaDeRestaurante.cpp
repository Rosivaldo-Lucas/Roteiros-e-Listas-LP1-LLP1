#include  "mesaDeRestaurante.h"
#include <sstream>
#include <iostream>

MesaDeRestaurante::MesaDeRestaurante(){
    for(int i = 0; i < 10; i++){
        pedido[i].setNumero(0);
        pedido[i].setDescricao("");
        pedido[i].setQuantidade(0);
        pedido[i].setPreco(0.0);
    }
}

/*MesaDeRestaurante::MesaDeRestaurante(Pedido pedido, int pos){
    this->pedido[pos] = pedido;
}*/

std::string MesaDeRestaurante::getPedido(){
    std::stringstream str;
    for(int i = 0; i < 10; i++){
        if(pedido[i].getQuantidade() != 0){
            str << pedido[i].getNumero() << ", " << pedido[i].getDescricao() << ", " << pedido[i].getQuantidade() << ", " << pedido[i].getPreco() << std::endl;
        }
    }
    return str.str();
}
void MesaDeRestaurante::setPedido(Pedido p, int pos){
    this->pedido[pos] = p;
}

void MesaDeRestaurante::adicionaPedido(Pedido pedido){
    for(int i = 0; i < 10; i++){
        if(pedido.getDescricao() == this->pedido[i].getDescricao()){
            this->pedido[i].setQuantidade(this->pedido[i].getQuantidade() + pedido.getQuantidade());
            pedido.setQuantidade(0);
        }
        if(this->pedido[i].getDescricao() == ""){
            this->pedido[i].setNumero(pedido.getNumero());
            this->pedido[i].setDescricao(pedido.getDescricao());
            this->pedido[i].setQuantidade(pedido.getQuantidade());
            this->pedido[i].setPreco(pedido.getPreco());
            break;
        }
    }
}

void MesaDeRestaurante::zeraPedido(){
    for(int i = 0; i < 10; i++){
        this->pedido[i].setQuantidade(0);
    }
}

double MesaDeRestaurante::calculaTotal(){
    double total = 0;
    for(int i = 0; i < 10; i++){
        if(pedido[i].getDescricao() != ""){
            total = total + (pedido[i].getPreco() * pedido[i].getQuantidade());
        }
    }
    return total;
}