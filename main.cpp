#include<iostream>
#include "ArregloDinamico.h"

using namespace std;

int main(){
    ArregloDinamico<string> ad;
    ad.insertar_final("Chocolate");
    ad.insertar_final("Nuez");
    ad.insertar_inicio("Vainilla");
    ad.insertar_inicio("Fresa");

    for (size_t i = 0; i < ad.size(); i++)
    {
        cout<<ad[i]<<" ";
    }
    

    return 0;
}

