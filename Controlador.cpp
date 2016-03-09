/*
 * Controlador.cpp
 *
 *  Created on: 2/3/2016
 *      Author: LuisA
 */

#include "Controlador.h"

Controlador::Controlador() {
	chequeopeli=false;
	chequeosala=false;
	chequeoentrada=false;

}
void Controlador::CargarPeliculas() {
	vemp.Limpiar();
if (!chequeopeli){
	int resp;
string cod;
int genero;
int censura;
float pvp;
MPelicula mp;
do{
cod=vemp.LeerString("\n Codigo: ");
if (memp.BusquedaCodigo(cod) != -1)
	        {
		do
			        			{
	            vemp.ImprimirMensaje ("\n El Codigo ya existe en la base de datos: \n");
	            vemp.Pausa();
	        	cod=vemp.LeerString("\n Codigo: ");
	        			}while(memp.BusquedaCodigo(cod) != -1);
	        }

	genero=vemp.LeerValidarNro("\n Genero: (1. Comedia, 2. Drama, 3. Terror, 4. Infantiles y 5.Ciencia Ficcion),",1,5);
	censura=vemp.LeerValidarNro("\n Censura (1.>10 anos, 2. >14 anos, 3. >18 anos y 4. Sin censura): ",1,4);
    pvp=vemp.LeerNroDecimal("\n Pvp: ");
mp.SetCodigo(cod);
mp.setGenero(genero);
mp.setCensura(censura);
mp.SetPvp(pvp);
memp.IncluirPelicula(mp);
chequeopeli=true;
resp = vemp.LeerValidarNro("\n Desea procesar otra Pelicula? (1)Si (2)No : ", 1, 2);
	}while(resp==1);


}
else{
	vemp.ImprimirMensaje("\n LAS PELICULAS YA FUERON LLENADAS!! \n");
vemp.Pausa();
}
}
void Controlador::CargarSalas() {
	vemp.Limpiar();
	if(chequeosala){
		vemp.ImprimirMensaje("\n LAS SALAS YA ESTAN LLENAS \n");
	vemp.Pausa();
	}
	else
	{
		ReportePeli();// llama al reporte peli
        int capi=100,capj=200;
		int tiposal;
		string codigo;
		int tipfuncion;
		int capacidad;
		MSala ms;
		for(int i=1; i<=memp.cantsalas;i++){
		vemp.ImprimirNro("\n Numero de la sala (1....6): ", i);
		codigo=vemp.LeerString("\n Codigo: ");
		if (memp.BusquedaCodigo(codigo) == -1){
			do
						        			{
				            vemp.ImprimirMensaje ("\n El Codigo no existe en la base de datos: \n");
				            vemp.Pausa();

				        		codigo=vemp.LeerString("\n Codigo: ");
				        			}while(memp.BusquedaCodigo(codigo) == -1);
		}
		tiposal=vemp.LeerValidarNro("\n Tipo de sala (1.Premium y 2. Normal): ",1,2);
		tipfuncion=vemp.LeerValidarNro("\n Tipo de funcion: (1. Matine y 2.Vespertina)",1,2);

		capacidad=vemp.LeerValidarNro("\n Capacidad (100, 200) : ",capi,capj);
		ms.setTiposala(tiposal);
		ms.SetCodigo(codigo);
		ms.setTipofuncion(tipfuncion);
		ms.setCapacsala(capacidad);
		memp.IncluirSala(ms);


	}
		chequeosala=true;
	}

}



void Controlador::ProcesarEntradas() {
	vemp.Limpiar();

	MSala ms;
	MEntrada me;
	MPelicula mp;
	if (chequeosala && chequeopeli){

		int edad;
		int numsala;
		int resp;
		do{
		edad=vemp.LeerNro("Edads");
		numsala=vemp.LeerValidarNro("Numero de la sala: (1...6): ",1,memp.cantSalas());
		cout<<(memp.ValidarEntrada(numsala,edad))<<endl;
		cout<<(memp.ValidarDisponibilidad(numsala))<<endl;
		me.SetEdad(edad);
		me.setNumsala(numsala);
		if (memp.ProcesarEntrada(numsala,edad,ms,me,mp)){ // validacion 1

		vemp.ImprimirMensaje("\n SE VENDIO LA ENTRADA!");
	    chequeoentrada=true;
	    resp = vemp.LeerValidarNro("\n Desea procesar otra Entrada? (1)Si (2)No : ", 1, 2);
		}
		else{
		vemp.ImprimirMensaje("\n NO TIENE LA EDAD SUFICIENTE O NO HAY DISPONIBILIDAD!");
        vemp.Pausa();
		}
		//else // else validacion 1
		//{
		//	vemp.ImprimirMensaje("\n NO TIENE LA EDAD SUFICIENTE PARA VER LA PELICULA!");
		//}


		}while(resp== 1);


	}
	else{
		vemp.ImprimirMensaje("FALTAN SALAS O PELICULAS POR LLENAR \n");
		vemp.Pausa();
	}


}

void Controlador::ReporteCinex() {
	vemp.Limpiar();
	if (chequeosala && chequeopeli && chequeoentrada){
	MSala ms;
	MPelicula mp;
vector<string> tiposal;
vector<string> tipofun;
vector<string> codp;
vector<int> cantent;
for (int i=0;i<memp.cantSalas();i++){
tiposal.push_back(memp.getSala(i).DeterminartipoS(memp.getSala(i).getTiposala()));
tipofun.push_back(memp.getSala(i).Determinartipof(memp.getSala(i).getTipofuncion()));
codp.push_back(memp.getSala(i).GetCodigo());
cantent.push_back(memp.getSala(i).getCantentradas());
}
vemp.ReporteSalaCine(tiposal,tipofun,codp,cantent,memp.MontoTotIngr());
vemp.Pausa();
	}
	else
	{
		vemp.ImprimirMensaje("\n AUN NO HAY ENTRADAS VENDIDAS \n");
		vemp.Pausa();
	}
}

void Controlador::ReportePeli() {

	vector<string> codigop;
	for(int i =0;i<memp.cantPeliculas();i++){

		 codigop.push_back(memp.getPelicula(i).GetCodigo());


	}
	vpel.ReportePeli(codigop);

}
