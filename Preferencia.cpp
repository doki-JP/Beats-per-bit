#include "Preferencia.h"
#include <iostream>

using namespace std;

Preferencia::Preferencia(){
    Genero=0;
    Lenguaje=0;
};
Preferencia::Preferencia(int GP,int LP){
    Genero=GP;
    Lenguaje=LP;   
}
int Preferencia::getLenguaje(){
    return Lenguaje;
}
int Preferencia::getGenero(){
    return Genero;
}
void Preferencia::setGenero(int GP){
    Genero=GP;
}
void Preferencia::setLenguaje(int LP){
    Lenguaje=LP;
}
