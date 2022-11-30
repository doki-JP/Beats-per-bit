#include <iostream>
#include "Comparacion.cpp"
#include "Genero.cpp"
#include "Lenguaje.cpp"
using namespace std;

int main(){
    cout<<"Bienvenid@ a Beats per bit"<<endl;
    cout<<"Para empezar, Que genero te gusta mas?\nLas opciones son:"<<endl;
    cout<<"1. Pop\n2. Rap\n3. EDM\n4.Alternativo\nSeleccion: ";
    int G;
    cin>>G;
    cout<<"Que tal el lenguaje? Te gusta mas en Ingles o Espanol?\n0. Ingles\n1. Espanol\nSeleccion: ";
    int L;
    cin>>L;
    Genero Genero(G,0);
    Lenguaje Lenguaje(0,L);
    Comparacion obj1;
    obj1.Cancion(Genero.getGenero(),Lenguaje.getLenguaje());
}
