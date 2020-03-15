#include "SaldoNaoDisponivelException.h"

#include <iostream>

SaldoNaoDisponivelException::SaldoNaoDisponivelException(){
  std::cout << "Saldo nao disponivel." << std::endl;
}