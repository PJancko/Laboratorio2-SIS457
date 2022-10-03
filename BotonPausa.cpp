#include "BotonPausa.h"

BotonPausa::BotonPausa(int ux, int uy, string f)
{
	ubicacionX = ux;
	ubicacionY = uy;
	forma = f;
}

void BotonPausa::Pausar()
{
	cout << "Esta pausando!" << endl;
}
