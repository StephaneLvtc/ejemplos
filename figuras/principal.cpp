#include "figura.h"
#include "circulo.h"
int main()
{
    /*
    Figura f1;
    f1.calcularArea();
    f1.imprimeArea();
    */
    Circulo c1{10};
    //c1.calcularArea();
    //c1.imprimeArea();
    
    Figura *f2; //apunatador
    f2 = &c1; //figura apunta a direccion de circulo
    f2->calcularArea(); 
    f2->imprimeArea();
}