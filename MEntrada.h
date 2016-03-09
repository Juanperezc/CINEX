/*
 * MEntrada.h
 *
 *  Created on: 2/3/2016
 *      Author: LuisA
 */

#ifndef MENTRADA_H_
#define MENTRADA_H_
#include "MPersona.h"

class MEntrada :public MPersona{
private:
	int numsala;
public:
	MEntrada();
	int getNumsala() const;
	void setNumsala(int numsala);
};

#endif /* MENTRADA_H_ */
