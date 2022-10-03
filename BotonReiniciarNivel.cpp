#include "BotonReiniciarNivel.h"

BotonReiniciarNivel::BotonReiniciarNivel(int ux, int uy, string f)
{
	ubicacionX = ux;
	ubicacionY = uy;
	forma = f;
}

void BotonReiniciarNivel::ReiniciarNivel()
{
	cout << "Se reinicio el nivel!" << endl;
}
