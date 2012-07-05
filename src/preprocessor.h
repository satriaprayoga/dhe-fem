/*
 * preprocessor.h
 *
 *  Created on: Jul 6, 2012
 *      Author: satriaprayoga
 */

#ifndef PREPROCESSOR_H_
#define PREPROCESSOR_H_

#include <stdlib.h>

typedef struct Coord2D{
	double x;
	double y;
}Coord2D;

typedef struct Pre1D{
	int numOfCoord;
	int numOfElement;
	double *coord;
	double *element;
	double *l_mass;
	void (*remove_data)(double *data);
}Pre1D;

void init_pre_1d(Pre1D *p1d, void (*premove_func)(double *data));
void destroy_pre_1d(Pre1D *p1d);
int read_coord(Pre1D *p1d,const char *filename);
int read_element(Pre1D *p1d,const char *filename);

#endif /* PREPROCESSOR_H_ */
