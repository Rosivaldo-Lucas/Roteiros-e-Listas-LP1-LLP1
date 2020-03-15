#include "ValorAcimaException.h"

#include <iostream>

ValorAcimaException::ValorAcimaException(){
  std::cout << "Valor esta entre 100 e 1000." << std::endl;
}