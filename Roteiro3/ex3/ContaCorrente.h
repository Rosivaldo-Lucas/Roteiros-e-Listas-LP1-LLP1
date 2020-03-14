#ifndef _CONTA_CORRENTE_
#define _CONTA_CORRENTE_

#include "Conta.h"

class ContaCorrente : public Conta {
  public:
    ContaCorrente();
    ContaCorrente(double salario, std::string nomeCliente, int numero, double saldo);
    virtual ~ContaCorrente();

    virtual double definirLimite();

    double getSalario();
    void setSalario(double salario);
    int getLimite();

  protected:
    double salario;
    int limite;

};

#endif //_CONTA_CORRENTE_
