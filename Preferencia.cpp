#include "Preferencia.h"
#include <iostream>

using namespace std;

Preferencia::Preferencia(){
    Genero=0;
    Lenguaje=0;
};
void Preferencia::setLenguaje(int L){
    Lenguaje=L;
}
Preferencia::Preferencia(int GP,int LP){
    Genero=GP;
    Lenguaje=LP;  
}
int Preferencia::getLenguaje(){
    return Lenguaje;
};
Preferencia obj; 
