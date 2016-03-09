/*
 * MPelicula.h
 *
 *  Created on: 2/3/2016
 *      Author: LuisA
 */

#ifndef MPELICULA_H_
#define MPELICULA_H_
#include <string>
#include "MArticulo.h"
using namespace std;

class MPelicula :public MArticulo {
private:
	int genero;
	int censura;
public:
	MPelicula();
	int getCensura() const;
	void setCensura(int censura);
	int getGenero() const;
	void setGenero(int genero);
	int DeterminarCensura(int i);
	string DeterminarGenero(int i);
};

#endif /* MPELICULA_H_ */
