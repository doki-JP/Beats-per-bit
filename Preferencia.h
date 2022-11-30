#ifndef PREFERENCIA_
#define PREFERENCIA_
#include <sstream>
#include <string>
using namespace std;
class Preferencia{
    private:
        int GeneroP;
        int LenguajeP;
    public:
        Preferencia();
        Preferencia(int,int);
        int Idiom(int,int);

};
#endif
