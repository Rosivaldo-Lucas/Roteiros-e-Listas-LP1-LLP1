#ifndef _PESSOA_
#define _PESSOA_
#include <string>

class Pessoa{
    public:
        Pessoa(std::string nome);
        Pessoa(std::string nome, int idade, int telefone);
        std::string getNome();
        void setNome(std::string nome);
        int getIdade();
        void setIdade(int idade);
        int getTelefone();
        void setTelefone(int telefone);
    private:
        std::string nome;
        int idade;
        int telefone;
    protected:

};

#endif