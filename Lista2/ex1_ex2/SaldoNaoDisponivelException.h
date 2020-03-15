#ifndef _SALDO_NAO_DISPONIVEL_EXCEPTION_
#define _SALDO_NAO_DISPONIVEL_EXCEPTION_

#include <exception>

class SaldoNaoDisponivelException : public std::exception {
  public:
    SaldoNaoDisponivelException();
};

#endif //_SALDO_NAO_DISPONIVEL_EXCEPTION_