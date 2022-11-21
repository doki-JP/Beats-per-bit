#include <iostream>
using namespace std;

class Programa{
    public:
        string RecibirLista();
        string ImprimirLista();
};
class Preferencia{
    private:
        string Genero;
        string Artistas;
        string Lugar;
        bool Lirica;
        string Lenguaje;
    public:
        string ImprimirDatos();
};
class ListaRecomendada{
    private:
        Preferencia base;
        string RecBasicas[];
    public:
        string CrearLista();
        string RegresarDatos();
};
class Usuario{
    private:
        Preferencia prefer;
        int edad;
    public:
        string DarInfo();
};