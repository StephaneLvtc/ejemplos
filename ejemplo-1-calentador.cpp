#include <iostream>
class Calentador
{
private:
    int temperatura;
    int incremento;
public:
    Calentador(); //constructor
    void calentar();
    void enfriar();
    void imprimeTemperatura();
    int accedeTemperatura() const; // a los metodos de acceso se les agrega el const
};// es obligatorio al final de la clase

//metodo constructor
Calentador::Calentador()
{
    temperatura = 15;
    incremento = 3;
}

void Calentador::calentar(){ // los dos puntos indican que el metodo es de la clase calentador
    temperatura += 5;
}
void Calentador::enfriar(){ // los dos puntos indican que el metodo es de la clase calentador
    temperatura -= 5;
}
void Calentador::imprimeTemperatura(){
    std::cout<<"La temperatura es: "<< temperatura << std::endl; //std::endl se puede usar en lugar de \n
}
int Calentador::accedeTemperatura() const
{
    return temperatura;
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