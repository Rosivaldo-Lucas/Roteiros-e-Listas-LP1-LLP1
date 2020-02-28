#ifndef _PESSOA_
#define _PESSOA_
#include <string>

class Pessoa{
    public:
        Pessoa(std::string nome);
        Pessoa(std::string nome, int idade, std::string telefone);
        std::string getNome();
        void setNome(std::string nome);
        int getIdade();
        void setIdade(int idade);
        std::string getTelefone();
        void setTelefone(std::string Telefone);
    private:
        std::string nome;
        int idade;
        std::string telefone;
    protected:

};

#endif