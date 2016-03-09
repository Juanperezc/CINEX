/*
 * Controlador.h
 *
 *  Created on: 2/3/2016
 *      Author: LuisA
 */

#ifndef CONTROLADOR_H_
#define CONTROLADOR_H_
#include "MEmpresa.h"
#include "VEmpresa.h"
#include "VPelicula.h"
class Controlador {
private:
	MEmpresa memp;
	VEmpresa vemp;
    VPelicula vpel;
	bool chequeosala, chequeopeli,chequeoentrada;
public:
	Controlador();
	void CargarSalas();
	void CargarPeliculas();
	void ProcesarEntradas();
	void ReporteCinex();
	void ReportePeli();
};

#endif /* CONTROLADOR_H_ */
