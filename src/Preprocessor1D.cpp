/*
 * Preprocessor1D.cpp
 *
 *  Created on: Jul 6, 2012
 *      Author: satriaprayoga
 */

#include "Preprocessor1D.h"

Preprocessor1D::Preprocessor1D(const int& nc, const int& ne):numOfCoord(nc),numOfElement(ne)
{
	coordinate=new double[nc+1];
	element=new int[ne+1];
	lumpMass=new double[nc+1];
	geometry=new double[ne+1];
}

int Preprocessor1D::readCoordinate(const char *filename){
	if(!filename){
		std::cerr<<"error read data. filename is empty\n";
		return -1;
	}
	std::ifstream in(filename);
	if(!in.is_open()){
		std::cerr<<"error read data. cannot read from file source\n";
		return -1;
	}
	for(int i=1;i<=numOfCoord;i++){
		in>>coordinate[i];
		std::clog<<"reading: "<<coordinate[i]<<"\n";
	}
	return 0;
}

Preprocessor1D::~Preprocessor1D()
{
	if(coordinate){
		std::clog<<"removing coordinate data\n";
		delete [] coordinate;
		coordinate=NULL;
	}
	if(element){
		std::clog<<"removing element data\n";
		delete [] element;
		element=NULL;
	}
}

