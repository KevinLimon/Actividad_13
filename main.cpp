#include<iostream>
#include "ArregloDinamico.h"
#include "computadora.h"

using namespace std;

int main(){
    ArregloDinamico<Computadora> computadoras;
    Computadora c01("Dell", "Plata" , 15550.75, 512);
    Computadora c02("Dell", "Azul" , 17123.4, 1024);
    Computadora c03("Lenovo", "Blanco" , 20000.0, 1024);
    Computadora c04("Apple", "Azul" , 45000.0, 2048);

    computadoras << c01 << c02 << c03 << c04;
    //Computadora c05("ASUS", "Azul" , 12550.40, 512);

    //computadoras.buscar(c05);
    /*ArregloDinamico<string> ad;
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
    ad.mostrar();*/
    
    return 0;
}

