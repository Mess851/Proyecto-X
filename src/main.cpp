#include <iostream>
#include <string>
#include <iostream>
#include <filesystem>
#include <fstream>
#include <Ventana.hpp>
#include <list>
#include <curses.h>
#include <Mario.hpp>
#include <Bloque.hpp>
#include <Mapa.hpp>
#include <Castillo.hpp>
#include <Arbusto.hpp>
#include <Nube.hpp>

using namespace std;

class Demo{
    private:
    int x;
    int y;
};

int main(int argc, char const *argv[])
{
    Mario* mario = new Mario(5,18);
    Mapa* mapa = new Mapa(2,20);
    Castillo* castillo = new Castillo(100,11);
    Arbusto* arbusto = new Arbusto(20,18);
    Arbusto* arbusto1 = new Arbusto(60,18);
    Nube* nube = new Nube(20, 4);
    Nube* nube1 = new Nube(50, 1);
    Nube* nube2 = new Nube(100, 3);
    Nube* nube3 = new Nube(120, 2);

    Ventana* ventana = new Ventana();

    list<Dibujo*> dibujos;
    dibujos.push_back(mapa);
    dibujos.push_back(castillo);
    dibujos.push_back(arbusto);
    dibujos.push_back(arbusto1);
    dibujos.push_back(nube);
    dibujos.push_back(nube1);
    dibujos.push_back(nube2);
    dibujos.push_back(nube3);
    dibujos.push_back(mario);
 

    list<Actualizable*> actualizables;
    actualizables.push_back(mario);
    actualizables.push_back(mapa);
    actualizables.push_back(castillo);
    actualizables.push_back(arbusto);
    actualizables.push_back(arbusto1);
    actualizables.push_back(nube);
    actualizables.push_back(nube1);
    actualizables.push_back(nube2);
    actualizables.push_back(nube3);

    while(!ventana->DeboCerrar())
    {
        int key = getch();

		if (key == 'a' || key == KEY_LEFT){
			mario->RetrocederX();
		}
		if (key == 'd' || key == KEY_RIGHT){
			mario->AvanzarX();
		}
		
	 	ventana->Dibujar(dibujos);
	 	ventana->Actualizar(actualizables);
    }
    return 0;
}