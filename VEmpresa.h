/*
 * VEmpresa.h
 *
 *  Created on: 2/3/2016
 *      Author: LuisA
 */

#ifndef VEMPRESA_H_
#define VEMPRESA_H_
#include "VGeneral.h"
#include <vector>
using namespace std;

class VEmpresa :public VGeneral{
public:
	VEmpresa();
	void ReporteSalaCine(vector<string>auxtiposa,
						vector<string>auxtipofu,
						vector<string>auxcod,
						vector<int> auxcantev,
						float montotv);
};

#endif /* VEMPRESA_H_ */
