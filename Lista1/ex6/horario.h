#ifndef _HORARIO_
#define _HORARIO_

class Horario{
    public:
        Horario();
        Horario(int h, int m, int s);
        void setHora(int h, int m, int s);
        void avancarHora();
        int getHora();
        void setHora(int hora);
        int getMinuto();
        void setMinuto(int minuto);
        int getSegundo();
        void setSegundo(int segundo);
    private:
        int hora;
        int minuto;
        int segundo;
};

#endif //_HORARIO_