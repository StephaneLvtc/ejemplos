#include <iostream>

template <typename Tipo>
class Pila
{
private:
    int tope;+
    Tipo *arreglo;
    int max;
public:
    Pila(int tam); //constructor
    ~Pila(); //destructor se usa para liberar memoria
    void push(Tipo dato);
    Tipo pop();
};
template <typename Tipo>
Pila::Pila(int tam)
{
    this->tope=0;
    max=tam;
    arreglo = new Tipo[max]; // Es un arreglo dinamico por eso es new
}
template <typename Tipo>
Pila::~Pila()
{
    delete [] arreglo;
}
template <typename Tipo>
void Pila<Tipo>::push(Tipo dato)
{
}
template <typename Tipo>
Tipo Pila<Tipo>::pop()
{
}
int main()
{
    //Pila<Persona> miPila{5};
    Pila <int> miPila{5};
    miPila.push(3);
    miPila.push(7);
    
    int x = miPila.pop();
    std::cout <<x<< "\n";
    int x = miPila.pop();
    std::cout <<x<< "\n";
    int x = miPila.pop();
    std::cout <<x<< "\n";
}