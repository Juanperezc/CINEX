/*
 * VSala.h
 *
 *  Created on: 2/3/2016
 *      Author: LuisA
 */

#ifndef VPELICULA_H_
#define VPELICULA_H_
#include "VGeneral.h"
#include <vector>
class VPelicula: public VGeneral{

public:
	void ReportePeli(vector<string> auxcodpeli);
	VPelicula();
};

#endif /* VPELICULA_H_ */
