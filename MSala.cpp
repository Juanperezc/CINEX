/*
 * MSala.cpp
 *
 *  Created on: 2/3/2016
 *      Author: LuisA
 */

#include "MSala.h"

int MSala::getCapacsala() const {
	return capacsala;
}

void MSala::setCapacsala(int capacsala) {
	this->capacsala = capacsala;
}

int MSala::getTipofuncion() const {
	return tipofuncion;
}

void MSala::setTipofuncion(int tipofuncion) {
	this->tipofuncion = tipofuncion;
}

int MSala::getTiposala() const {
	return tiposala;
}

void MSala::setTiposala(int tiposala) {
	this->tiposala = tiposala;
}

MSala::MSala() {
	// TODO Auto-generated constructor stub
cantentradas=0;

}



string MSala::DeterminartipoS(int i) {
	switch(i)
	{
	case 1:
		return "Premiun"; break;
	case 2:
		return "Normal"; break;
	default:
		return 0;
	}
}

int MSala::getCantentradas() const
{
    return cantentradas;
}

void MSala::ActualizarEntrada(){
	cantentradas++;
}

string MSala::Determinartipof(int i) {
	switch(i)
		{
		case 1:
			return "Matine"; break;
		case 2:
			return "Vespertina"; break;
		default:
			return 0;
		}
}
