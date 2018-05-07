# include <iostream>
class Fraccion
{
private: 
    int den;
    int num;
public:
    Fraccion(int num,int den); //Constructor
    Fraccion operator+(Fraccion otra);
    Fraccion operator -(Fraccion otra);
    Fraccion operator *(Fraccion otra);
    void imprimeFraccion();
};
//Constructor
Fraccion::Fraccion( int num, int den)
{
    this->num = num;
    this->den = den;
}
//Suma
Fraccion Fraccion::operator+(Fraccion f2)
{
   Fraccion f3{0,0};
   f3.den = this->den * f2.den;
   f3.num = (this->num * f2.den) + (this->den * f2.num); 
   return f3;
}
//Resta
Fraccion Fraccion::operator-(Fraccion f2)
{
   Fraccion f3{0,0};
   f3.den = this->den * f2.den;
   f3.num = (this->num * f2.den) - (this->den * f2.num); 
   return f3;
}
//Multiplicacion
Fraccion Fraccion::operator*(Fraccion f2)
{
   Fraccion f3{0,0};
   f3.den = this->den * f2.den;
   f3.num = this->num * f2.num; 
   return f3;
}
void Fraccion::imprimeFraccion()
{
    std::cout<<"Numerador: " << this->num << std::endl; //std::endl se puede usar en lugar de \n
    std::cout<<"Denominador: " << this->den << std::endl;
}

int main()
{
    Fraccion f3{0,0};
    Fraccion f1{3,4};
    Fraccion f2{1,2};
    f3 = f1.operator+(f2);
    f3.imprimeFraccion();
    f3 = f1.operator-(f2);
    f3.imprimeFraccion();
    f3 = f1.operator*(f2);
    f3.imprimeFraccion();
}