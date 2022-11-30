#ifndef LENGUAJE_
#define LENGUAJE_
#include <iostream>
#include "Preferencia.h"
class Lenguaje:public Preferencia{
    private:
        int LenguajePreferido;
    public:
        Lenguaje();
        Lenguaje(int GP, int L);
        int getLenguaje();
};

#endif
