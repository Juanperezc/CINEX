/*
 * MPelicula.cpp
 *
 *  Created on: 2/3/2016
 *      Author: LuisA
 */

#include "MPelicula.h"

int MPelicula::getCensura() const {
	return censura;
}

void MPelicula::setCensura(int censura) {
	this->censura = censura;
}

int MPelicula::getGenero() const {
	return genero;
}

void MPelicula::setGenero(int genero) {
	this->genero = genero;
}

MPelicula::MPelicula() {
	// TODO Auto-generated constructor stub

}

int MPelicula::DeterminarCensura(int i) {

	switch(i)
	{
	case 1: return 10;
	break;
	case 2: return 14;
	break;
	case 3: return 18;
	break;
	case 4: return 0;
	default:
		return 0;
	}

}

string MPelicula::DeterminarGenero(int i) {

	switch(i)
	{
	case 1: return "Comedia";
	break;
	case 2: return "Drama";
	break;
	case 3: return "Terror";
	break;
	case 4: return "Infantiles";
	break;
	case 5: return "Ciencia Ficcion";
	default:
		return 0;
	}
}
