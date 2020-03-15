#include <iostream>

#include "SistemaLista.h"

void SistemaLista::addLista(Lista *item){
  this->lista.push_back(item);
}

void SistemaLista::mostraLista(){
  for(int i = 0; i != this->lista.size(); i++){
    std::cout << lista[i]->getItem() << std::endl;
  }
}

std::vector<Lista*> SistemaLista::retornaLista(){
  std::vector<Lista*> listaRetorno;
  for(int i = 0; i != this->lista.size(); i++){
    listaRetorno.push_back(lista[i]);
  }
  return listaRetorno;
}