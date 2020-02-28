#ifndef _VOO_
#define _VOO_
#include "horario.h"
#include "data.h"
#include <string>

class Voo{
    public:
        Voo();
        Voo(int n, Horario h, Data d);
        int proximoLivre();
        int verifica(int numero);
        bool ocupa(int numero);
        int vagas();
        int getNumVoo();
        std::string getData();
        std::string getHorario();
    private:
        int numeroVoo;
        int cadeiras[100];
        Horario horario;
        Data data;
};

#endif //_VOO_