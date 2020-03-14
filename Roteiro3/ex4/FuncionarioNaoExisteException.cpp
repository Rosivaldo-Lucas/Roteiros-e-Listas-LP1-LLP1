#include <iostream>

#include "FuncionarioNaoExisteException.h"

FuncionarioNaoExisteException::FuncionarioNaoExisteException(){
  std::cout << "Error: Funcionario nao existe" << std::endl;
}