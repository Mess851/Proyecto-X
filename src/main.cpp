#include <iostream>
#include <string>
#include <iostream>
#include <filesystem>
#include <fstream>
#include <Ventana.hpp>
#include <list>
#include <curses.h>
#include <Mario.hpp>

using namespace std;

class Demo{
    private:
    int x;
    int y;
};

int main(int argc, char const *argv[])
{
    Mario* mario = new Mario(10,5);

    Ventana* ventana = new Ventana();

    list<Dibujo*> dibujos;
    dibujos.push_back(mario);

    list<Actualizable*> actualizables;
    actualizables.push_back(mario);

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