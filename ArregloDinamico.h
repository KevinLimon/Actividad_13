#ifndef ARREGLODINAMICO_H
#define ARREGLODINAMICO_H
#include <iostream>

using namespace std;

template <class T>
class ArregloDinamico
{
    T *ad ;
    size_t tamo;
    size_t cont;
    const static size_t MAX = 10;

public:
    ArregloDinamico();
    ~ArregloDinamico();
    void insertar_final(const T& s);
    void insertar_inicio(const T& s);
    void insertar(const T& s, size_t d);
    void eliminar_final();
    void eliminar_inicio();
    void eliminar(size_t d);
    void mostrar();
    T* buscar(const T& s);
    ArregloDinamico<T*>buscar_todos(const T& s);
    size_t size();
    T operator[](size_t a)
    {
        return ad[a];
    }
    friend ArregloDinamico<T>& operator<<(ArregloDinamico<T> &a, const T& s)
    {
        a.insertar_final(s);
        return a;
    }
private:
    void expandir();
};

template<class T>
ArregloDinamico<T>::ArregloDinamico()
{
    ad = new T[MAX];
    cont = 0;
    tamo = MAX;
}

template<class T>
ArregloDinamico<T>::~ArregloDinamico()
{
    delete[] ad;
}

template<class T>
void ArregloDinamico<T>::insertar_final(const T& s)
{
    if (cont==tamo){
        expandir();
    }
    ad[cont] = s;
    cont ++;
}

template<class T>
void ArregloDinamico<T>::insertar_inicio(const T& s)
{
    if (cont==tamo){
        expandir();
    }
    for (size_t i=cont; i>0;i--)
    {
        ad[i] = ad[i-1];
    }
    ad[0] = s;
    cont++;
}

template<class T>
void ArregloDinamico<T>::insertar(const T& s, size_t d)
{
    if (d >= cont){
        cout<<"Posicion no valida"<<endl;
        return;
    }
    if (cont==tamo){
        expandir();
    }
    for(size_t i = cont;i>d;i--){
        ad[i] = ad[i-1];
    }
    ad[d] = s;
    cont++;
}

template<class T>
void ArregloDinamico<T>::eliminar_final()
{
    if(cont == 0){
        cout<<"Arreglo vacio"<<endl;
        return;
    }
    cont--;
}

template<class T>
void ArregloDinamico<T>::eliminar_inicio()
{
    if(cont == 0){
        cout<<"Arreglo vacio"<<endl;
        return;
    }
    for(size_t i=0;i<cont-1;i++){
        ad[i] = ad[i+1];
    }
    cont--;
}

template<class T>
void ArregloDinamico<T>::eliminar(size_t d)
{
    if(cont == 0){
        cout<<"Arreglo vacio"<<endl;
        return;
    }
    for(size_t i=d;i<cont-1;i++){
        ad[i] = ad[i+1];
    } 
    cont--;
}

template<class T>
T* ArregloDinamico<T>::buscar(const T& s)
{
    for(size_t i=0;i<cont;i++){
        if(s == ad[i]){
            return &ad[i];
        }
    }
    return nullptr;
}

template<class T>
ArregloDinamico<T*> ArregloDinamico<T>::buscar_todos(const T& s)
{
    ArregloDinamico<T*> ptrs;
    for(size_t i=0;i<cont;i++){
        if(s == ad[i]){
            ptrs.insertar_final(&ad[i]);
        }
    }
    return ptrs;
}

template<class T>
void ArregloDinamico<T>::mostrar()
{
    for(size_t i=0;i<cont;i++){
        cout<<ad[i]<<" ";
    }
    cout<<endl;
}

template<class T>
size_t ArregloDinamico<T>::size()
{
    return cont;
}

template<class T>
void ArregloDinamico<T>::expandir()
{
    /*string *nv = new T[tamo+MAX];
    for(size_t i=0;i <cont; i++){
        nv[i] = ad[i];
    }
    delete[] ad;
    ad = nv;*/
    tamo = tamo + MAX;
}

#endif