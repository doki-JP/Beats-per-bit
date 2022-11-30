#ifndef PREFERENCIA_
#define PREFERENCIA_
#include <sstream>
#include <string>
using namespace std;
class Preferencia{
    private:
        int Genero;
        int Lenguaje;
    public:
        Preferencia();
        Preferencia(int,int);
        int getGenero();
        int getLenguaje();
        void setGenero(int);
        void setLenguaje(int);
};
#endif
