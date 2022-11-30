#ifndef GENERO_
#define GENERO_
#include "Preferencia.h"
#include <iostream>

class Genero:public Preferencia{
    private:
        int GeneroPreferido;
    public:
        Genero();
        Genero(int GP,int L);
        int getGenero();
        void setGenero(int);
};

#endif
