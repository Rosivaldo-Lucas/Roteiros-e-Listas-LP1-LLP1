#ifndef _PESSOA_
#define _PESSOA_
#include <string>
#include "endereco.h"

class Pessoa{
    public:
        Pessoa(std::string nome);
        Pessoa(std::string nome, Endereco end, std::string telefone);
        std::string getNome();
        void setNome(std::string nome);
        std::string getEndereco();
        void setEndereco(Endereco end);
        std::string getTelefone();
        void setTelefone(std::string telefone);
    private:
        std::string nome;
        Endereco end;
        std::string telefone;
};

#endif //_PESSOA_