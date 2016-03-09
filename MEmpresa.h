/*
 * MEmpresa.h
 *
 *  Created on: 2/3/2016
 *      Author: LuisA
 */

#ifndef MEMPRESA_H_
#define MEMPRESA_H_
#include "MEntrada.h"
#include "MSala.h"
#include "MPelicula.h"
#include <vector>
class MEmpresa {
private:
	vector<MSala>vecsal;
	vector<MPelicula>vecpel;
	/*vector<MEntrada>vecentr;*/
	float acumg;
public:
   int cantsalas = 3; // lo puse para no cambiar en todos lados la cantidad de sala;
	MEmpresa();
	void setSala(int i, MSala ms);
	MSala getSala(int i);
	void setPelicula(int i, MPelicula mp);
	MPelicula getPelicula(int i);
	/*void setEntrada(int i, MEntrada me);
	MEntrada getEntrada(int i);
	int cantEntradas();*/

	int cantSalas();
	int cantPeliculas();
	//void IncluirEntradas(MEntrada me);
	void IncluirSala(MSala ms);
	void IncluirPelicula(MPelicula mp);
  //  float MontoTIngresado(MSala ms, MPelicula mp);
    int BusquedaCodigo(string cod);
    string RetornarCodigosegunsala(int sala);
    int Retornarposirealpelicula(int numsala);
    bool ValidarEntrada( int nsala, int edadp);
    bool ValidarDisponibilidad(int nsala);
    bool ProcesarEntrada(int numsala,int edad, MSala ms, MEntrada me, MPelicula mp); // validacion
///////////////////////////////////////////////////////////////
    float DescMay(int i,MEntrada me);
    float DescMati(int i,MEntrada me);
    float Recargo(int i,MEntrada me);
    	float ValorTotalEntrada(int i,MEntrada me);
float MontoTotIngr();

};

#endif /* MEMPRESA_H_ */
