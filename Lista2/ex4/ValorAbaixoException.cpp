#include "ValorAbaixoException.h"

#include <iostream>

ValorAbaixoException::ValorAbaixoException(){
  std::cout << "Valor menor ou igual a zero." << std::endl;
}