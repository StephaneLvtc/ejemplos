#include <iostream>
class Calentador
{
private:
    int temperatura;
public:
    Calentador(); //constructor
    void calentar();
    void enfriar();
    void imprimeTemperatura();
};// es obligatorio al final de la clase

//metodo constructor
Calentador::Calentador()
{
    temperatura = 15;
}

void Calentador::calentar(){ // los dos puntos indican que el metodo es de la clase calentador
    temperatura += 5;
}
void Calentador::enfriar(){ // los dos puntos indican que el metodo es de la clase calentador
    temperatura -= 5;
}
void Calentador::imprimeTemperatura(){
    std::cout<<"La temperatura es: "<< temperatura "\n" ; //std::endl se puede usar en lugar de \n
}
int main()
{
    Calentador c1;
    Calentador c2;
    
    c1.calentar();
    c1.imprimeTemperatura();
    
    c2.enfriar();
    c2.imprimeTemperatura();
}