#ifndef _DATA_
#define _DATA_

class Data{
    public:
        //DECLARAÇÃO DOS ATRIBUTOS E METODOS PUBLIC
        Data(int d, int m, int a); //METODO CONSTRUTOR DA CLASSE
        int getDia();
        void setDia(int d);
        int getMes();
        void setMes(int m);
        int getAno();
        void setAno(int a);
        void avancarDia();
    private:
        //DECLARAÇÃO DOS ATRIBUTOS E METODOS PRIVATE
        int dia;
        int mes;
        int ano;
    protected:
        //DECLARAÇÃO DOS ATRIBUTOS E METODOS PROTECTED
};

#endif