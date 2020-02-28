#ifndef _ENDERECO_
#define _ENDERECO_
#include <string>

class Endereco{
    public:
        Endereco(std::string r, int n, std::string b, std::string c, std::string e, std::string cep);
        Endereco();
        std::string toString();
        std::string getRua();
        void setRua(std::string rua);
        int getNumero();
        void setNumero(int numero);
        std::string getBairro();
        void setBairro(std::string bairro);
        std::string getCidade();
        void setCidade(std::string cidade);
        std::string getEstado();
        void setEstado(std::string estado);
        std::string getCep();
        void setCep(std::string cep);
    private:
        std::string rua;
        int numero;
        std::string bairro;
        std::string cidade;
        std::string estado;
        std::string cep;
};

#endif //_ENDERECO_