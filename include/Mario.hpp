#pragma once 
#include <Vector.hpp>
#include <Dibujo.hpp>
#include <Actualizable.hpp>

class Mario : public Dibujo, public Actualizable
{
private:
    int x,y,direccion_x;
public:
    Mario() : Dibujo("mario") 
    {
        this->posicion = Vector();
    }
    Mario(int x, int y):Dibujo("mario")
    {
        this->posicion.DesplazarX(x);
        this->posicion.DesplazarY(y);
    }
    void AvanzarX()
    {
        if(this->posicion.LeerDireccionX() == -1)
        {
            this->posicion.CambiarDireccionX();
        }
        this->posicion.DesplazarX(1);
    }
    void RetrocederX()
    {
        if(this->posicion.LeerDireccionX() == 1)
        {
            this->posicion.CambiarDireccionX();
        }
        this->posicion.DesplazarX(1);
    }
    Vector LeerPosicion()
    {
        return this->posicion;
    }
    ~Mario() {}
};