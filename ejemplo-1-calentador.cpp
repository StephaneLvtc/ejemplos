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
    void imprimeCentigrados();
    void imprimeFarenheit() const;
    int accedeTemperatura() const; // a los metodos de acceso se les agrega el const (metodos de solo lectura)
};// es obligatorio al final de la clase

//metodo constructor
Calentador::Calentador()
{
    temperatura = 15;
    incremento = 3;
}

void Calentador::calentar(){ // los dos puntos indican que el metodo es de la clase calentador
    if(temperatura + incremento <= 30){
        temperatura += incremento;
    }
}
void Calentador::enfriar(){ // los dos puntos indican que el metodo es de la clase calentador
    if(temperatura - incremento >= -10){
        temperatura -= incremento;
    }
}
void Calentador::imprimeCentigrados(){
    std::cout<<"La temperatura es: "<< temperatura << std::endl; //std::endl se puede usar en lugar de \n
}
void Calentador::imprimeFarenheit() const { // no puedo modificar variables de instancia en los metodos que contienen const
    std::cout << "La temperatura es " <<temperatura * 1.8 +32 
                << " °F" <<  std::endl;
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
    c1.imprimeCentigrados();
    c1.imprimeFarenheit();
    
    
    c2.enfriar();
    c2.imprimeCentigrados();
    c2.imprimeFarenheit();
}