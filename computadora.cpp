#include "computadora.h"

Computadora::Computadora()
{

}

Computadora::Computadora(const string &marca, const string &color, float precio, int memoria)
{ 
    this->marca = marca;
    this->color = color;
    this->precio = precio;
    this->memoria = memoria;
}

void Computadora::setMarca(const string &valor)
{
    marca = valor;
}
string Computadora::getMarca()
{
    return marca;
}
void Computadora::setColor(const string &valor)
{
    color = valor;
}
string Computadora::getColor()
{
    return color;
}
void Computadora::setPrecio(float valor)
{
    precio = valor;
}
float Computadora::getPrecio()
{
    return precio;
}
void Computadora::setMemoria(int valor)
{
    memoria = valor;
}
int Computadora::getMemoria()
{
    return memoria;
}