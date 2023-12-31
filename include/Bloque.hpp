#pragma once
#include <Vector.hpp>
#include <Dibujo.hpp>
#include <Actualizable.hpp>

class Bloque : public Dibujo, public Actualizable
{
private:
    
public:
    Bloque() : Dibujo("bloque") 
    {
        this->posicion = Vector();
    }
    Bloque(int x, int y) : Dibujo("bloque")
    {
        this->posicion.DesplazarX(x);
        this->posicion.DesplazarY(y);
    }
    void Actualizar()
    {
        //this->posicion.DesplazarX(1);
    }
    ~Bloque() {}
};