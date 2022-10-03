#include "Temporizador.h"

Temporizador::Temporizador(int h, int m, int s)
{
	hora = h;
	minuto = m;
	segundo = s;
}

void Temporizador::MostrarTiempo()
{
	cout << "Mostrando el tiempo!" << endl;
}
