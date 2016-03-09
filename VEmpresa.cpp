/*
 * VEmpresa.cpp
 *
 *  Created on: 2/3/2016
 *      Author: LuisA
 */

#include "VEmpresa.h"

VEmpresa::VEmpresa() {
	// TODO Auto-generated constructor stub

}

void VEmpresa::ReporteSalaCine(vector<string> auxtiposa,
		vector<string> auxtipofu, vector<string> auxcod,
		vector<int> auxcantev, float montotv){
	Limpiar();
	ImprimirEncabezado("REPORTE DE SALAS CINEX METROPOLIS", "==============================");
	for(unsigned int i=0; i<auxtiposa.size(); i++){
		ImprimirNroJustificado(i+1, 5);
		ImprimirLineasBlanco(1);
		ImprimirStringJustificado("Tipo Sala: "+ auxtiposa[i],  10);
		ImprimirStringJustificado("Tipo de funcion: "+ auxtipofu[i],  10);
	    ImprimirLineasBlanco(1);
		ImprimirString("Codigo de la pelicula: ", auxcod[i]);
		ImprimirLineasBlanco(1);
		ImprimirNro("Total entradas vendidas", auxcantev[i]);
	    ImprimirLineasBlanco(1);
	}
	ImprimirNroDecimal("MONTO TOTAL BSF. INGRESADO A LA EMPRESA: ", montotv);
	Pausa();


}
