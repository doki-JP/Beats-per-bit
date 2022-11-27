#include <iostream>
#include "Similitud.h"
using namespace std;

int main(){
    Preferencia obj;
    Similitud obj2;
    obj.setGenero(-34978); //Numero inicial(-34978), 
                          //facilita el proceso de set y el uso de ciclos

    obj2.Cancion(obj.getGenero());
    //usa el obj para llamar un getter que regresa un valor, ese valor se utiliza
    //en el método "Cancion" que funciona gracias a obj2

}
