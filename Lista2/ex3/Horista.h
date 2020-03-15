#ifndef _HORISTA_
#define _HORISTA_

#include "Funcionario.h"

class Horista : public Funcionario {
  public:
    Horista();
    Horista(double salarioPorHora, double horasTrabalhadas, std::string nome, int matricula);
    virtual ~Horista();

    virtual double calcularSalario();

    double getSalarioPorHora();
    void setSalarioPorHora(double salarioPorHora);
    double getHorasTrabalhadas();
    void setHorasTrabalhadas(double horasTrabalhadas);

  private:
    double salarioPorHora;
    double horasTrabalhadas;
};

#endif //_HORISTA_