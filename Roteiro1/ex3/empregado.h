#ifndef _EMPREGADO_
#define _EMPREGADO_
#include <string>

class Empregado{
    public:
        Empregado(std::string nome, std::string sobrenome, double salario);
        std::string getNome();
        void setNome(std::string nome);
        std::string getSobrenome();
        void setSobrenome(std::string sobrenome);
        double getSalario();
        void setSalario(double salario);
        void aumento(double salario);
    private:
        std::string nome;
        std::string sobrenome;
        double salario;
    protected:

};

#endif