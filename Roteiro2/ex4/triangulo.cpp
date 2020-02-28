#include "triangulo.h"

Triangulo::Triangulo(std::string nome, double lado): FiguraGeometrica(nome, lado){

}

double Triangulo::calculaArea(){
    return (((this->lado * this->lado) * 1.732) / 4);
}