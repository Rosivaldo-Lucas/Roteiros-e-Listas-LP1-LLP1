#ifndef _PERSISTE_
#define _PERSISTE_

#include <vector>

#include "Lista.h"

class Persiste {
  public:
    void salvarLista(std::vector<Lista*> lista);
    void fazerCopia(std::vector<Lista*> lista);
    std::vector<Lista*> recupera();
    void ler();

    friend std::ostream &operator<<(std::ostream &out, Lista *lista);
    friend std::ifstream &operator>>(std::ifstream &in, Lista *lista);
  private:
};

#endif //_PERSISTE_