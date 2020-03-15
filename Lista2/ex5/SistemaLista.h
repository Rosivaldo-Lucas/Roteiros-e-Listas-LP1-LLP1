#ifndef _SISTEMA_LISTA_
#define _SISTEMA_LISTA_

#include <vector>

#include "Lista.h"

class SistemaLista{
  public:
    void addLista(Lista *item);
    std::vector<Lista*> retornaLista();
    void mostraLista();
  private:
    std::vector<Lista*> lista;

};

#endif //_SISTEMA_LISTA_