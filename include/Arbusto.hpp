#pragma once
#include <Vector.hpp>
#include <Dibujo.hpp>
#include <Actualizable.hpp>

class Arbusto : public Dibujo, public Actualizable
{
private:
    /* data */
public:
    Arbusto() : Dibujo("arbusto") 
    {
        this->posicion = Vector();
    }
    Arbusto(int x, int y) : Dibujo("arbusto")
    {
        this->posicion.DesplazarX(x);
        this->posicion.DesplazarY(y);
    }
    ~Arbusto() {}
};