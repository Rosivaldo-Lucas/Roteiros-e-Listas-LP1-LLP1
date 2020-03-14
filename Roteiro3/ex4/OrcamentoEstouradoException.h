#ifndef _ORCAMENTO_ESTOUROU_EXCEPTION_
#define _ORCAMENTO_ESTOUROU_EXCEPTION_

#include <exception>

class OrcamentoEstourouException : public std::exception{
  public:
    OrcamentoEstourouException();
};

#endif //_ORCAMENTO_ESTOUROU_EXCEPTION_