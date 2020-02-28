#include "quadrado.h"

Quadrado::Quadrado(std::string nome, double lado):FiguraGeometrica(nome, lado){

}

double Quadrado::calculaArea(){
    return (this->lado * this->lado);
}