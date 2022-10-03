#include "Moto.h"

Moto::Moto(int t, int v, int r, string c, string f)
{
	tamanio = t;
	velocidad = v;
	resistencia = r;
	color = c;
	forma = f;
}

void Moto::Acelerar()
{
	cout << "Esta acelerando!" << endl;
}

void Moto::Frenar()
{
	cout << "Esta frenando!" << endl;
}

void Moto::RotarAdelante()
{
	cout << "Esta rotando hacia adelante!" << endl;
}

void Moto::RotarAtras()
{
	cout << "Esta rotando hacia atras!" << endl;
}
