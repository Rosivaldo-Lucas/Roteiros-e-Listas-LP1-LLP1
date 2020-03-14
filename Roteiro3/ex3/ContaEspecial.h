#ifndef _CONTA_ESPECIAL_
#define _CONTA_ESPECIAL_

#include "ContaCorrente.h"

class ContaEspecial : public ContaCorrente{
  public:
    ContaEspecial();
    ContaEspecial(double salario, std::string nomeCliente, int numero, int saldo);
    virtual ~ContaEspecial();
    
    virtual double definirLimite();
  private:

};

#endif //_CONTA_ESPECIAL_