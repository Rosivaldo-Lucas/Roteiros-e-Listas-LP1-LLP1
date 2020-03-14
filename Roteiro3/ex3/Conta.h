#ifndef _CONTA_
#define _CONTA_

#include <string>

class Conta {
  public:
    Conta();
    Conta(std::string nomeCliente, int numero, double saldo);
    virtual ~Conta();

    void sacar(double valor);
    void depositar(double valor);

    std::string getNomeCliente();
    void setNomeCliente(std::string nomeCliente);
    int getNumero();
    void setNumero(int numero);
    double getSaldo();
    void setSaldo(double saldo);

  private:

  protected:
    std::string nomeCliente;
    int numero;
    double saldo;

};

#endif //_CONTA_