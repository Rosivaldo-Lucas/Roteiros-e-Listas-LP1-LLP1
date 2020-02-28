#ifndef _FUNCIONARIO_
#define _FUNCIONARIO_
#include <string>

class Funcionario{
    public:
        Funcionario();
        Funcionario(int m, std::string n, double s);
        int getMatricula();
        void setMatricula(int matricula);
        std::string getNome();
        void setNome(std::string nome);
        double getSalario();
        void setSalario(double salario);
    private:

    protected:
        int matricula;
        std::string nome;
        double salario;
};

#endif //_FUNCIONARIO_