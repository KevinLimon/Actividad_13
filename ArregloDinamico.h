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
    size_t size();
    string operator[](size_t a)
    {
        return ad[a];
    }
private:
    void expandir();
};


#endif