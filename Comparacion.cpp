#include "Comparacion.h"
#include <iostream>
int Preferencia::Idiom(int L,int Len){
    if (Len==0){}
    else if(Len==1){
        if (L==0){L=1;}
        else if(L==1){L=0;}
    }
    return L;
};

string Comparacion::Cancion(int G,int L){
    int S=1;
    int CambioL=0;
    int Len=0;
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
        cout<<"Presione '0' para cerrar el programa.\n";
        cout<<"Seleccione otro genero\n1. Pop - 2. Rap\n3. EDM - 4. Alternativo\nSeleccion: ";
        cin>>G;
        cout<<"\nDeseas cambiar de idioma? Seleccion: ";
        cout<<"\n0. No - 1. Si\nSeleccion: ";
        cin>>Len;
        S=G; 
        L=obj.Idiom(L,Len);
        }
}
