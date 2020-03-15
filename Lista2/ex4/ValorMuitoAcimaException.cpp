#include "ValorMuitoAcimaException.h"

#include <iostream>

ValorMuitoAcimaException::ValorMuitoAcimaException(){
  std::cout << "Valor maior ou igual a 1000." << std::endl;
}