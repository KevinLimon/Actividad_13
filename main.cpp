#include<iostream>
#include "ArregloDinamico.h"
#include "computadora.h"

using namespace std;

int main(){
    ArregloDinamico<Computadora> computadoras;

    Computadora c01("Dell", "Azul", 12500.0, 1024);
    Computadora c02("Dell", "Blanco", 17000.0, 512);
    Computadora c03("Apple", "Azul", 45000.0, 2048);
    Computadora c04("ASUS", "Azul", 10000.0, 1024);
    computadoras << c01 << c02 << c03 << c04;
    Computadora c05("Acer", "Amarillo", 12500.0, 1024);
    Computadora *ptr = computadoras.buscar(c05);

    if(ptr != nullptr){
        cout << *ptr << endl;
    }
    else{
        cout << "No existe"<<endl;
    }
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

