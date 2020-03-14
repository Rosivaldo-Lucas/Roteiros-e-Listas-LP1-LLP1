#ifndef _ASSALARIADO_
#define _ASSALARIADO_

#include "Funcionario.h"

class Assalariado : public Funcionario {
  public:
    Assalariado();
    Assalariado(double salario, std::string nome, int matricula);
    virtual ~Assalariado();

    virtual double calcularSalario();

    double getSalario();
    void setSalario(double salario);

  private:
    double salario;
};

#endif //_ASSALARIADO_