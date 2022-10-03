#pragma once
#include <iostream>
using namespace std;
class BotonReiniciarNivel
{
private:
	int ubicacionX;
	int ubicacionY;
	string forma;
public:
	BotonReiniciarNivel(int ux, int uy, string f);
	void ReiniciarNivel();
	void setUbicacionX(int ux) {
		ubicacionX = ux;
	}
	int getUbicacionX() {
		return ubicacionX;
	}
	void setUbicacionY(int uy) {
		ubicacionY = uy;
	}
	int getUbicacionY() {
		return ubicacionY;
	}
	void setForma(int f) {
		forma = f;
	}
	string getForma() {
		return forma;
	}
};

