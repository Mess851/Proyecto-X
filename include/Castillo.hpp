#pragma once
#include <Vector.hpp>
#include <Dibujo.hpp>
#include <Actualizable.hpp>

class Castillo : public Dibujo, public Actualizable
{
private:
    /* data */
public:
    Castillo() : Dibujo("castillo") 
    {
        this->posicion = Vector();
    }
    Castillo(int x, int y) : Dibujo("castillo")
    {
        this->posicion.DesplazarX(x);
        this->posicion.DesplazarY(y);
    }
    ~Castillo() {}
};