#ifndef _POUPANCA_
#define _POUPANCA_

#include "Conta.h"

class Poupanca : public Conta{
  public:
    Poupanca();
    Poupanca(int variacao, double taxaRendimento, std::string nomeCliente, int numero, double saldo);
    virtual ~Poupanca();

    double render();

    int getVariacao();
    void setVariacao(int variacao);
    double getTaxaRendimento();
    void setTaxaRendimento(double taxaRendimento);

  private:
    int variacao;
    double taxaRendimento;
};

#endif //_POUPANCA_