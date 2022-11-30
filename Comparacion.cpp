#include "Comparacion.h"
#include <iostream>

Comparacion::Comparacion(){
    Gusto.setGenero(0);
    Gusto.setLenguaje(0);
}

int Comparacion::getLenguaje(){
    return Gusto.getLenguaje();
}
int Comparacion::getGenero(){
    return Gusto.getGenero();
}

string Comparacion::Cancion(int G,int L){
    int S=1;
    string CancionesE[4][3]={{"Brillaremos - Julieta Venegas\n",
        "Sembrando FLores - Natalia Lafourcade\n","Hasta la Raiz - Natalia Lafourcade\n"},
        {"Rap Bruto - Residente\n","Whisky and Spice - Yeico & Toni\n",
        "Guerra - Residente\n"},{"La Candela Viva - Wax Motif\n","Hollywood - Bassboy\n",
        "Sufriendo - MYLO\n"},{"Me maten - C.Tangana\n","Sobrio - Diamante Electrico\n",
        "Cuando Quieras Llegar - Diamante Electrico\n"}};
    string CancionesI[4][3]={{"Dang! - Mac Miller\n","One kiss - Dua Lipa\n",
        "Super Bad Mantra - JAWNY\n"},{ "i - Kendrick Lamar\n","Meat Grinder - MF DOOM\n",
        "Rapp Snitch Knishes - MF DOOM\n"},{"Plasma - DR.GABBA\n","My dad beats me - Baba\n",
        "GAGGED & BOUND - MUST DIE!\n"},{"Moonlight - Baby Panna\n","Not Allowed - TV Girl\n",
        "Self - Khalid\n"}};
    while (S!=0){
    G=G-1;
    if (L==0){
        cout<<CancionesI[G][0];
        cout<<CancionesI[G][1];
        cout<<CancionesI[G][2];}

    else if (L==1){
        cout<<CancionesE[G][0];
        cout<<CancionesE[G][1];
        cout<<CancionesE[G][2];}
    cout<<"Presione '0' para cerrar el programa\n";
    cout<<"O seleccione otro genero del mismo idioma\n1. Pop - 2. Rap\n3. EDM - 4. Alternativo\nSeleccion: ";
    cin>>G;
    S=G;
    }
}