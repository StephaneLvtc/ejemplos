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
    void operator++();
    void operator--();
    void imprimeCentigrados() const;
    void imprimeFarenheit() const;
    int accedeTemperatura() const; // a los metodos de acceso se les agrega el const (metodos de solo lectura)
    bool operator==(Calentador otro); // Sobrecarga del metodo miembro
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
void Calentador::operator++(){ // los dos puntos indican que el metodo es de la clase calentador
    if(temperatura + incremento <= this->max){
        temperatura += incremento;
    }
}
void Calentador::operator--(){ // los dos puntos indican que el metodo es de la clase calentador
    if(temperatura - incremento >= this->min){
        temperatura -= incremento;
    }
}
void Calentador::imprimeCentigrados() const{
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
bool Calentador::operator==(Calentador otro)
{
     if(this->temperatura==otro.temperatura){
         return true;
     }
     else{
         return false;
     }
}
int main()
{
   // try{
        Calentador c1{-10,10};//los parametros van entre llaves
        Calentador c2{0, 30, 10};
        //c1 == c2 es equivalente a c1.operator==(c2)
        if(c1==c2){
            std::cout <<"Iguales\n" ;
        }
        else {
            std::cout <<"No son Iguales\n";
        }
        //++c1 es equivalente a c1.operator++();
        ++c1;
        c1.imprimeCentigrados();
        c1.imprimeFarenheit();
        
        //--c2 es equivalente a c2.operator--();
        --c2;
        c2.imprimeCentigrados();
        c2.imprimeFarenheit();
  //  }
   // catch (const std::runtime_error &e){
   // }
  //  }
}