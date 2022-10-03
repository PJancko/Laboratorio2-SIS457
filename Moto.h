#pragma once
#include <iostream>
using namespace std;
class Moto
{private:
	int tamanio;
	int velocidad;
	int resistencia;
	string color;
	string forma;
public:
	Moto(int t, int v, int r, string c, string f);
	void Acelerar();
	void Frenar();
	void RotarAdelante();
	void RotarAtras();
	void setTamanio(int t) {
		tamanio = t;
	}
	int getTamanio() {
		return tamanio;
	}
	void setVelocidad(int v) {
		velocidad = v;
	}
	int getVelocidad() {
		return velocidad;
	}
	void setResistencia(int r) {
		resistencia = r;
	}
	int getResistencia() {
		return resistencia;
	}
	void getColor(string c) {
		color = c;
	}
	string setColor() {
		return color;
	}
	void setForma(string f) {
		forma = f;
	}
	string getForma() {
		return forma;
	}


};

