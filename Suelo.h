#pragma once
#include <iostream>
using namespace std;
class Suelo
{
private:
	int tamanio;
	string color;
	string forma;
public:
	Suelo(int t, string c, string f);
	void CambiarForma();
	void setTamanio(int t) {
		tamanio = t;
	}
	int getTamanio() {
		return tamanio;
	}
	void setColor(string c) {
		color = c;
	}
	string getColor() {
		return color;
	}
	void setForma(string f) {
		forma = f;
	}
	string getForma() {
		return forma;
	}
};

