#pragma once
#include <iostream>
using namespace std;
class Temporizador
{
private:
	int hora;
	int minuto;
	int segundo;
public:
	Temporizador(int h, int m, int s);
	void MostrarTiempo();
	void setHora(int h) {
		hora = h;
	}
	int getHora() {
		return hora;
	}
	void seMinuto(int m) {
		minuto = m;
	}
	int getMinuto() {
		return minuto;
	}
	void setSegundo(int s) {
		segundo = s;
	}
	int getSegundo() {
		return segundo;
	}
};

