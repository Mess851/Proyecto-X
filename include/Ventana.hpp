#pragma once
#include <curses.h>
#include <unistd.h>
#include <Actualizable.hpp>
#include <list>
#include <Dibujo.hpp>

using namespace std;

class Ventana
{
private:
    int x, y;
    bool cerrar;

public:
    Ventana()
    {
        // Inicializar pantalla
        initscr();

        // Eliminar cursor de pantalla
        noecho();
        curs_set(FALSE);

        // No bloquear consola
        cbreak();
        timeout(10);
        keypad(stdscr, TRUE);

        // Inicializar clase
        getmaxyx(stdscr, y, x);
        cerrar = false;
    }
    void Actualizar(list<Actualizable *> listaActualizables)
    {
        // getch();
        for (auto &&iterador : listaActualizables)
        {
            iterador->Actualizar();
        }
    }

    void Dibujar(list<Dibujo *> listaDibujar)
    {
        clear();

        //box(stdscr, '|', '-');
        for (auto &&dibujo : listaDibujar)
        {
            dibujo->Dibujar();
        }

        refresh();
    }
    bool DeboCerrar()
    {
        return this->cerrar;
    }
    void Cerrar()
    {
        this->cerrar = true;
    }
    ~Ventana()
    {
        keypad(stdscr, FALSE);
        endwin();
    }
};