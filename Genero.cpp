#include "Genero.h"
Genero::Genero(){
    GeneroPreferido= 0;
}
Genero::Genero(int GP, int LP):Preferencia(GP,LP){
    GeneroPreferido=GP;
}
int Genero::getGenero(){
    return GeneroPreferido;
}
