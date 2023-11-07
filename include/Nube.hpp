#pragma once
#include <Vector.hpp>
#include <Dibujo.hpp>
#include <Actualizable.hpp>

class Nube : public Dibujo, public Actualizable
{
private:
    /* data */
public:
    Nube() : Dibujo("nube") 
    {
        this->posicion = Vector();
    }
    Nube(int x, int y) : Dibujo("nube")
    {
        this->posicion.DesplazarX(x);
        this->posicion.DesplazarY(y);
    }
    ~Nube() {}
};