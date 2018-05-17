#ifndef FIGURA_INCLUIDA
#define FIGURA_INCLUIDA //bandera que avisa si una clase esta duplicada
class Figura 
{
protected:
    float area;
public:
    Figura();
    virtual void calcularArea() = 0; //con esto decimo q este metodo no tiene codigo
                                    //la clase es abstracta  --- Debe ser virtual para añadirle un cero
    void imprimeArea();
};

#endif