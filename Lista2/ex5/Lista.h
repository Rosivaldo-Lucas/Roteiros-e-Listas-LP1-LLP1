#ifndef _LISTA_
#define _LISTA_

#include <string>

class Lista{
  public:
    Lista();
    Lista(std::string item);

    std::string getItem();
    void setItem(std::string item);

  private:
    std::string item;
};

#endif //_LISTA_
