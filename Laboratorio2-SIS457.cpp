//Juego: Bike Race
#include <iostream>
#include "Moto.h"
#include "Suelo.h"
#include "Temporizador.h"
#include "BotonPausa.h"
#include "BotonReiniciarNivel.h"

using namespace std;

int main()
{
    Moto m1 = Moto(1,10,2,"rojo","basico");
    m1.Acelerar();
    Suelo s1 = Suelo(20,"naranja","circular");
    s1.CambiarForma();
    Temporizador t1 = Temporizador(0,0,0);
    t1.MostrarTiempo();
    BotonPausa bp1 = BotonPausa(10,10,"dos rayas verticales paralelas");
    bp1.Pausar();
    BotonReiniciarNivel brn1 = BotonReiniciarNivel(20,20,"flecha que se apunta a si misma");
    brn1.ReiniciarNivel();

    return 0;
}