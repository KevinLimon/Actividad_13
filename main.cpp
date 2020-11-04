#include<iostream>
#include "ArregloDinamico.h"
#include "computadora.h"

using namespace std;

int main(){
    ArregloDinamico<Computadora> computadoras;

    Computadora c01("Dell", "Verde", 12500.0, 254);
    Computadora c02("Lenovo", "Azul", 17000.0, 1024);
    Computadora c03("Apple", "Azul", 45000.0, 2048);
    Computadora c04("ASUS", "Azul", 10000.0, 1024);
    Computadora c05("Acer", "Amarillo", 12000.0, 128);

    computadoras << c01 << c02 << c03 << c04 << c05;

    Computadora c06("Apple", "Azul", 45000.0, 2048);
    Computadora c07("ASUS", "verde", 45000.0, 2048);

    Computadora *ptr = computadoras.buscar(c07);

    if(ptr != nullptr){
        cout << *ptr << endl;
    }
    else{
        cout << "No existe"<<endl;
    }

    /*ArregloDinamico<Computadora*> ptrs = computadoras.buscar_todos(c05);

    if(ptrs.size() > 0){
        for(size_t i=0;i<ptrs.size();i++){
            Computadora *c = ptrs[i];
            cout << *c <<endl;
        }
    }
    else{
        cout<< "No existen coincidencias"<<endl;
    }*/

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

