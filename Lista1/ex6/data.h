#ifndef _DATA_
#define _DATA_

class Data{
    public:
        Data();
        Data(int d, int m, int a);
        int compara(Data data);
        bool isBissexto(Data data);
        int getDia();
        void setDia(int d);
        int getMes();
        void setMes(int m);
        int getAno();
        void setAno(int a);
    private:
        int dia;
        int mes;
        int ano;
};

#endif //_DATA_