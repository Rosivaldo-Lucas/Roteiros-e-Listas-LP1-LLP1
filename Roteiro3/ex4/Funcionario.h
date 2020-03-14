#ifndef _FUNCIONARIO_
#define _FUNCIONARIO_

#include <string>

class Funcionario {
  public:
    Funcionario();
    Funcionario(std::string nome, int matricula);
    virtual ~Funcionario();

    virtual double calcularSalario() = 0;

    std::string getNome();
    void setNome(std::string nome);
    int getMatricula();
    void setMatricula(int matricula);

  private:
    std::string nome;
    int matricula;
    double salario;
};

#endif //_FUNCIONARIO_