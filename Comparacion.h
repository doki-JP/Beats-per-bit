#ifndef COMPARACION_
#define COMPARACION_
#include "Preferencia.cpp"

class Comparacion{
    private:
        Preferencia Gusto;
    public:
        Comparacion();
        string Cancion(int,int);
        int getGenero();
        int getLenguaje();
        void setLenguaje(int);
        void setGenero(int);
};
#endif
