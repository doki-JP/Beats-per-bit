#ifndef SIMILITUD_
#define SIMILITUD_
#include "Preferencia.cpp"
#include <cstdlib>
#include <time.h>

class Similitud{
    private:
        string GeneroPreferido;
    public:
        Similitud(){};
        Similitud(string GP){
            GeneroPreferido=GP;
        };
        void setGeneroP();
        string getGeneroP();
        string Cancion(int G){
            string CD[8][3]={{ "Dang! - Mac Miller","One kiss - Dua Lipa",
            "Super Bad Mantra - JAWNY"},{ "i - Kendrick Lamar","Meat Grinder - MF DOOM",
            "Rapp Snitch Knishes - MF DOOM"},{"Plasma - DR.GABBA","My dad beats me - Baba",
            "GAGGED & BOUND - MUST DIE!"},{"Moonlight - Baby Panna","Not Allowed - TV Girl",
            "Self - Khalid"},{"Brillaremos - Julieta Venegas",
            "Sembrando FLores - Natalia Lafourcade","Hasta la Raiz - Natalia Lafourcade"},{"Rap Bruto - Residente","Whisky and Spice - Yeico & Toni",
            "Guerra - Residente"},{"La Candela Viva - Wax Motif","Hollywood - Bassboy",
            "Sufriendo - MYLO"},{"Me maten - C.Tangana","Sobrio - Diamante Electrico",
            "Cuando Quieras Llegar - Diamante Electrico"}};
            while (G!=0&&G!=1&&G!=2&&G!=3&&G!=4&&G!=5&&G!=6&&G!=7&&G!=8&&G!=-34978){
                cout<<"Numero invalido, haga otra seleccion";
                cout<<"\nSeleccion: ";
                cin>>G;
            }
            while (G!=0){
                srand(time(NULL));
                int num =rand()%3;
                G=G-1;
                cout<<CD[G][num]<<"\nSeleccion: ";
                cin>>G;
            }
            cout<<"Gracias por utilizar el codigo";
            }
        };
#endif