#pragma once
#include <Vector.hpp>
#include <Dibujo.hpp>
#include <Actualizable.hpp>

class Mapa : public Dibujo, public Actualizable
{
private:
    /* data */
public:
    Mapa() : Dibujo("mapa") 
    {
        this->posicion = Vector();
    }
    Mapa(int x, int y) : Dibujo("mapa")
    {
        this->posicion.DesplazarX(x);
        this->posicion.DesplazarY(y);
    }
    ~Mapa() {}
};