/*
 * MSala.h
 *
 *  Created on: 2/3/2016
 *      Author: LuisA
 */

#ifndef MSALA_H_
#define MSALA_H_
#include "MArticulo.h"
#include <vector>

class MSala: public MArticulo {
private:
int	tiposala;
int tipofuncion;
int capacsala;
int cantentradas;

public:
MSala();
	int getCapacsala() const;
	void setCapacsala(int capacsala);
	int getTipofuncion() const;
	void setTipofuncion(int tipofuncion);
	int getTiposala() const;
	void setTiposala(int tiposala);

	string DeterminartipoS(int i);
	string Determinartipof(int i);
    int getCantentradas() const;
    void ActualizarEntrada();

};

#endif /* MSALA_H_ */
