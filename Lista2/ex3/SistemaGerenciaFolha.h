#ifndef _SISTEMA_GERENCIA_FOLHA_
#define _SISTEMA_GERENCIA_FOLHA_

#include <vector>

#include "Funcionario.h"

class SistemaGerenciaFolha {
  public:
    SistemaGerenciaFolha();
    virtual ~SistemaGerenciaFolha();

    void setFuncionarios(Funcionario *funcionario);
    double consultaSalarioFuncionario(std::string nome);
    double calculaValorTotalFolha();
  private:
    std::vector<Funcionario*> funcionarios;
    double orcamentoMax;
};

#endif //_SISTEMA_GERENCIA_FOLHA_
