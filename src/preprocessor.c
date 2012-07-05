/*
 * preprocessor.c
 *
 *  Created on: Jul 6, 2012
 *      Author: satriaprayoga
 */
#include <stdlib.h>
#include <stdio.h>
#include "preprocessor.h"


void init_pre_1d(Pre1D *p1d,void (*premove_func)(double *data)){
	if(!p1d){
		fprintf(stderr, "NULL pointer/n");
		EXIT_FAILURE;
	}
	p1d->numOfCoord=0;
	p1d->numOfElement=0;
	p1d->coord=NULL;
	p1d->element=NULL;
	p1d->l_mass=NULL;
	p1d->remove_data=premove_func;
}

void destroy_pre_1d(Pre1D *p1d){
	if(!p1d){
		fprintf(stderr, "NULL pointer/n");
		EXIT_FAILURE;
	}
	if(p1d->coord!=NULL){
		p1d->remove_data(p1d->coord);
	}
	if(p1d->element!=NULL){
		p1d->remove_data(p1d->element);
	}
	free(p1d);
}
