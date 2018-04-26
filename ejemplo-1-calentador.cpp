#include <iostream>
class Calentador
{
private:
    int temperatura;
    int incremento;
    int min;
    int max;
public:
    Calentador(int min, int max, int temperatura = 0); //constructor 
                                                        // si en la temperatura no me dan un valor toma el valor de cero
    void calentar();
    void enfriar();
    void imprimeCentigrados();
    void imprimeFarenheit() const;
    int accedeTemperatura() const; // a los metodos de acceso se les agrega el const (metodos de solo lectura)
};// es obligatorio al final de la clase

//metodo constructor
Calentador::Calentador( int min, int max, int temperatura)
{
    if(min > max){
        std::cout << "Error en el rango min-max" << std::endl;
        std::exit(EXIT_FAILURE);
        //throw "Error en el rango min-max";
    }
    if(temperatura >= min && temperatura <= max){
        this ->temperatura = temperatura;
    }
    else
    this->temperatura = min;
    incremento = 3;
    this->min = min;
    this->max = max;
}
void Calentador::calentar(){ // los dos puntos indican que el metodo es de la clase calentador
    if(temperatura + incremento <= this->max){
        temperatura += incremento;
    }
}
void Calentador::enfriar(){ // los dos puntos indican que el metodo es de la clase calentador
    if(temperatura - incremento >= this->min){
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
   // try{
        Calentador c1{-10,10};//los parametros van entre llaves
        Calentador c2{30, 0, -10};
        
        c1.calentar();
        c1.imprimeCentigrados();
        c1.imprimeFarenheit();
        
        c2.enfriar();
        c2.imprimeCentigrados();
        c2.imprimeFarenheit();
  //  }
   // catch (const std::runtime_error &e){
   // }
  //  }
}