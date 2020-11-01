#include<iostream>
#include "ArregloDinamico.h"

using namespace std;

int main(){
    ArregloDinamico<string> ad;
    ad.insertar_final("No");
    ad.insertar_final("Se");
    ad.insertar_final("Que");
    ad.insertar_final("Insertar");
    ad.insertar_final("En");
    ad.insertar_final("Estas");
    ad.insertar_final("Cadenas");
    ad.insertar_final("Ayuda");
    ad.insertar_inicio("Strings");
    ad.insertar_inicio("Primeros");

    for (size_t i = 0; i < ad.size(); i++)
    {
        cout<<ad[i]<<" ";
    }
    

    return 0;
}

