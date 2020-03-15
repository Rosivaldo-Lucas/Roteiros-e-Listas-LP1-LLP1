#ifndef _VALOR_ABAIXO_EXCEPTION_
#define _VALOR_ABAIXO_EXCEPTION_

#include <exception>

class ValorAbaixoException : public std::exception {
  public:
    ValorAbaixoException();
};

#endif //_VALOR_ABAIXO_EXCEPTION_