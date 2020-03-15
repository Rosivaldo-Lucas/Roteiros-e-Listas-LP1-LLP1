#ifndef _CONTA_ESPECIAL_
#define _CONTA_ESPECIAL_

#include "Conta.h"

class ContaEspecial : public Conta{
  public:
    ContaEspecial();
    ContaEspecial(std::string nomeCliente, double salarioMensal, int numeroConta, double saldo);
    virtual ~ContaEspecial();

    virtual void definirLimite();

  private:

};

#endif //_CONTA_ESPECIAL_