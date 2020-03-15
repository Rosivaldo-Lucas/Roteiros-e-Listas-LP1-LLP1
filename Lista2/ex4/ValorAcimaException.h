#ifndef _VALOR_ACIMA_EXCEPTION_
#define _VALOR_ACIMA_EXCEPTION_

#include <exception>

class ValorAcimaException : public std::exception {
  public:
    ValorAcimaException();
};

#endif //_VALOR_ACIMA_EXCEPTION_