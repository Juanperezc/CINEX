/*
 * VPelicula.cpp
 *
 *  Created on: 2/3/2016
 *      Author: LuisA
 */

#include "VPelicula.h"
void VPelicula::ReportePeli(vector<string> auxcodpeli) {
    ImprimirStringJustificado("PELICULAS CARGADAS",60);
    ImprimirLineasBlanco(1);
    ImprimirStringJustificado("=============================",60);
    ImprimirLineasBlanco(2);

	ImprimirStringJustificado("Codigo", 12);

    ImprimirLineasBlanco(1);
	for(unsigned int i=0;i<auxcodpeli.size();i++){
		ImprimirNroJustificado(i+1,10);
		ImprimirStringJustificado(auxcodpeli[i],12);
	    ImprimirLineasBlanco(1);
	}
	Pausa();
}

VPelicula::VPelicula() {
	// TODO Auto-generated constructor stub

}

