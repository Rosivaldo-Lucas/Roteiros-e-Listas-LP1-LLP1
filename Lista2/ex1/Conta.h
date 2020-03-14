#ifndef _CONTA_
#define _CONTA_

#include <string>

#include "IConta.h"

class Conta : public IConta{
  public:
    Conta();
    Conta(std::string nomeCliente, double salarioMensal, int numeroConta, double saldo);
    virtual ~Conta();

    std::string getNomeCliente();
    void setNomeCliente(std::string nomeCliente);
    double getSalarioMensal();
    void setSalarioMensal(double salarioMensal);
    int getNumeroConta();
    void setNumeroConta(int numeroConta);
    double getSaldo();
    void setSaldo(double saldo);
    double getLimite();
    void setLimite(double limite);

    virtual void definirLimite();

    virtual void sacar(double valor);
    virtual void depositar(double valor);

  private:
    std::string nomeCliente;
    double salarioMensal;
    int numeroConta;
    double saldo;
    double limite;
};

#endif //_CONTA_