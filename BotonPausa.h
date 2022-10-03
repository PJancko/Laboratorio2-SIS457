#pragma once
#include <iostream>
using namespace std;
class BotonPausa
{
private:
	int ubicacionX;
	int ubicacionY;
	string forma;
public:
	BotonPausa(int ux, int uy, string f);
	void Pausar();
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
	void setForma(string f) {
		forma = f;
	}
	string getForma() {
		return forma;
	}
};

