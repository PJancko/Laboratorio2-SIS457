#include "Suelo.h"

Suelo::Suelo(int t, string c, string f)
{
	tamanio = t;
	color = c;
	forma = f;
}

void Suelo::CambiarForma()
{
	cout << "El suelo cambio de forma!" << endl;
}
