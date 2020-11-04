#ifndef COMPUTADORA_H
#define COMPUTADORA_H
#include<iostream>
#include <iomanip>
using namespace std;

class Computadora
{
    string marca;
    string color;
    float precio;
    int memoria;

public:
    Computadora();
    Computadora(const string &marca, const string &color, float precio, int memoria);
    void setMarca(const string &valor);
    string getMarca();
    void setColor(const string &valor);
    string getColor();
    void setPrecio(float valor);
    float getPrecio();
    void setMemoria(int valor);
    int getMemoria();

    friend ostream& operator<<(ostream &out, const Computadora &c)
    {
        out<<left;
        out << setw(10) << c.marca;
        out << setw(10) << c.color;
        out << setw(10) << c.precio;
        out << setw(10) << c.memoria;
        out << endl;
        return out;
    }
    friend istream& operator>>(istream &in, Computadora &c)
    {
        cout<<"Marca: ";
        getline(cin, c.marca);
        cout<<"Color: ";
        getline(cin, c.color);
        cout<<"Precio: ";
        cin >> c.precio;
        cout<<"Memoria: ";
        cin >> c.memoria;
        return in;
    }
};


#endif