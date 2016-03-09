/*
 * MEmpresa.cpp
 *
 *  Created on: 2/3/2016
 *      Author: LuisA
 */

#include "MEmpresa.h"

MEmpresa::MEmpresa() {
	// TODO Auto-generated constructor stub
acumg=0;

}

void MEmpresa::setSala(int i, MSala ms) {
	vecsal[i]=ms;
}

MSala MEmpresa::getSala(int i) {
	return vecsal[i];

}

void MEmpresa::setPelicula(int i, MPelicula mp) {
	vecpel[i]=mp;
}

MPelicula MEmpresa::getPelicula(int i) {
	return vecpel[i];
}

/*void MEmpresa::setEntrada(int i, MEntrada me) {
	vecentr[i]=me;
}*/

/*MEntrada MEmpresa::getEntrada(int i) {
	return vecentr[i];
}

int MEmpresa::cantEntradas() {
	return vecentr.size();
}
void MEmpresa::IncluirEntradas(MEntrada me) {
	vecentr.push_back(me);
}*/
int MEmpresa::cantSalas() {
	return vecsal.size();
}

int MEmpresa::cantPeliculas() {
	return vecpel.size();
}



void MEmpresa::IncluirSala(MSala ms) {
	vecsal.push_back(ms);
}

void MEmpresa::IncluirPelicula(MPelicula mp) {
	vecpel.push_back(mp);
}

/*float MEmpresa::MontoTIngresado(MSala ms, MPelicula mp) {
	float acum=0;
	for(int i=0; i<cantEntradas();i++)
		acum+= vecentr[i].ValorTotalEntrada(ms,mp);
	return acum;


}*/
int MEmpresa :: BusquedaCodigo(string cod)
{
    for (int i=0; i<cantPeliculas();++i)
       if (vecpel[i].GetCodigo() == cod)
	      return i;
	   return -1;
}

bool MEmpresa::ValidarEntrada(int nsala, int edadp) {
	if ( edadp > vecpel[Retornarposirealpelicula(nsala)].DeterminarCensura(vecpel[Retornarposirealpelicula(nsala)].getCensura()))
		return true;
	else
		return false;
}

bool MEmpresa::ValidarDisponibilidad(int nsala) {
	if (vecsal[nsala - 1].getCantentradas() <= vecsal[nsala - 1].getCapacsala())

		return true;
		else
			return false;

}

bool MEmpresa::ProcesarEntrada(int numsala,int edad, MSala ms, MEntrada me, MPelicula mp)
{
	if (ValidarEntrada(numsala,edad) && ValidarDisponibilidad(numsala))
	{


		acumg += ValorTotalEntrada(numsala,me);
		vecsal[numsala - 1].ActualizarEntrada();
		return true;
	}
		else{
			return false;
		}

	//validaciones

}

string MEmpresa::RetornarCodigosegunsala(int sala) {
	return vecsal[sala - 1].GetCodigo();
}

int MEmpresa::Retornarposirealpelicula(int numsala) {
	return BusquedaCodigo(RetornarCodigosegunsala(numsala));
}

float MEmpresa::DescMay(int i, MEntrada me) {
	if(me.GetEdad()>60)
			return getPelicula(Retornarposirealpelicula(i)).GetPvp()*0.50;
		else
			return 0;
}

float MEmpresa::DescMati(int i, MEntrada me) {
	if(getSala(i).getTipofuncion()==1)
		return getPelicula(Retornarposirealpelicula(i)).GetPvp() *0.15;
	else
			return 0;
}

float MEmpresa::Recargo(int i, MEntrada me) {
	if(getSala(i).getTiposala()==1)
			return getPelicula(Retornarposirealpelicula(i)).GetPvp()*0.20;
		else
				return 0;
}

float MEmpresa::ValorTotalEntrada(int i, MEntrada me) {
	return getPelicula(Retornarposirealpelicula(i)).GetPvp()-DescMati(i, me)-DescMay(i, me)+Recargo(i, me);
}

float MEmpresa::MontoTotIngr()
{
	return acumg;
}



