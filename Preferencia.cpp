#include "Preferencia.h"
#include <iostream>

using namespace std;

Preferencia::Preferencia(){
    Genero=-1;

};

Preferencia::Preferencia(int G){
    Genero=G;

}

void Preferencia::setGenero(int G){
    cout<<"0. Salir\n1. Pop en Ingles\n2. Rap en Ingles\n3. EDM en Ingles\n4. Alternativo en Ingles";
    cout<<"\n5. Pop en Espanol\n6. Rap en Espanol\n7. EDM en Espanol\n8. Alternativo en Espanol\n";
    cout<<"\nSeleccion: ";
    cin>>G;
    Genero=G;
}
int Preferencia::getGenero(){
    return Genero;
    
}