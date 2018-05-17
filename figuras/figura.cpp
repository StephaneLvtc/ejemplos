#include <iostream>
#include "figura.h"

Figura::Figura()
{
    area=0;
}
/*
void Figura::calcularArea()
{
    std::cout<<"No se como calcular el area :(\n";
}
*/
void Figura::imprimeArea()
{
    std::cout<<"El área es "<<area<<"\n";
}