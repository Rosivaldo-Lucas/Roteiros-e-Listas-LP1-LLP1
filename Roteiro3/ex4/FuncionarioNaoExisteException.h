#ifndef _FUNCIONARIO_NAO_EXISTE_EXCEPTION_
#define _FUNCIONARIO_NAO_EXISTE_EXCEPTION_

#include <exception>

class FuncionarioNaoExisteException : public std::exception{
  public:
    FuncionarioNaoExisteException();
};

#endif //_FUNCIONARIO_NAO_EXISTE_EXCEPTION_