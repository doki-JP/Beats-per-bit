#ifndef PREFERENCIA_
#define PREFERENCIA_
#include <sstream>
#include <string>
using namespace std;

class Preferencia{
    private:
        int Genero;

    public:
        Preferencia();
        Preferencia(int);
        void setGenero(int);
        int getGenero();
};

#endif