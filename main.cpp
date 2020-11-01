#include<iostream>
#include "ArregloDinamico.h"

using namespace std;

int main(){
    ArregloDinamico<string> ad;
    ad.insertar_final("Chocolate");
    ad.insertar_final("Nuez");
    ad.insertar_inicio("Vainilla");
    ad.insertar_inicio("Fresa");
    ad.insertar("Mantequilla" ,2);
    ad.eliminar_inicio();
    ad.eliminar_final();
    ad.eliminar(2);
    for (size_t i = 0; i < ad.size(); i++)
    {
        cout<<ad[i]<<" ";
    }
    

    return 0;
}

