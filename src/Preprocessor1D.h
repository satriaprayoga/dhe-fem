/*
 * Preprocessor1D.h
 *
 *  Created on: Jul 6, 2012
 *      Author: satriaprayoga
 */

#ifndef PREPROCESSOR1D_H_
#define PREPROCESSOR1D_H_

#include <fstream>
#include <iostream>
#include <cstdlib>

class Preprocessor1D
{
public:
	Preprocessor1D(const int&,const int&);
	virtual ~Preprocessor1D();
	int readCoordinate(const char* filename);

	int getNumOfCoord() const
	{
		return numOfCoord;
	}

	int getNumOfElement() const
	{
		return numOfElement;
	}

private:
	int numOfCoord;
	int numOfElement;
	double* coordinate;
	int* element;
	double* lumpMass;
	double* geometry;
};

#endif /* PREPROCESSOR1D_H_ */
