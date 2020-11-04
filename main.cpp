#include<iostream>
#include "ArregloDinamico.h"

using namespace std;

int main(){
    ArregloDinamico<string> ad;
    ad.insertar_final("Chocolate");
    ad.insertar_final("Nuez");
    ad.insertar_inicio("Vainilla");
    ad.insertar_inicio("Fresa");
    ad.mostrar();
    ad.insertar("Mantequilla" ,2);
    ad.mostrar();
    ad.eliminar_inicio();
    ad.eliminar_final();
    ad.mostrar();
    ad.eliminar(1);
    ad.mostrar();

    string *s = ad.buscar("Vainilla");
    cout<< s << " " << *s << endl;
    *s = "Chicle";
    ad.mostrar();
    
    return 0;
}

