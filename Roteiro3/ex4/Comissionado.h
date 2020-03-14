#ifndef _COMISSIONADO_
#define _COMISSIONADO_

#include "Funcionario.h"

class Comissionado : public Funcionario{
  public:
    Comissionado();
    Comissionado(double vendasSemanais, double percentualComissao, std::string nome, int matricula);
    virtual ~Comissionado();

    virtual double calcularSalario();

    double getVendasSemanais();
    void setVendasSemanais(double vendasSemanais);
    double getPercentualComissao();
    void setPercentualComissao(double percentualComissao);

  private:
    double vendasSemanais;
    double percentualComissao;
};

#endif //_COMISSIONADO_