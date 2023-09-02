#include <iostream>
#include <Mascota.hpp>

int main(int argc, char const *argv[])
{
    std::cout << "Juego de Mascotas" << std::endl;

    Mascota m1,m2,m3;

    m1.EstablecerNombre("Rudeus");
    m2.EstablecerNombre("Rengar");
    m3.EstablecerNombre("Zeus");

    m1.DecirNombre();
    m2.DecirNombre();
    m3.DecirNombre();

    return 0;
}