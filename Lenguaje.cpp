#include "Lenguaje.h"
Lenguaje::Lenguaje(){
    LenguajePreferido=0;
}
Lenguaje::Lenguaje(int GP, int L):Preferencia(GP,L){
    LenguajePreferido=L;
}
void Lenguaje::setLenguaje(int L){
    LenguajePreferido=L;
}
int Lenguaje::getLenguaje(){
    return LenguajePreferido;
}
