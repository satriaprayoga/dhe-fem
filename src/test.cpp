/*
 * test.cpp
 *
 *  Created on: Jul 6, 2012
 *      Author: satriaprayoga
 */


#include <iostream>
#include "Preprocessor1D.h"

using namespace std;

int main(int argc,char *argv[]){
	Preprocessor1D *p1d=new Preprocessor1D(3,3);
	int stat=p1d->readCoordinate("test.dat");
	if(stat==-1)
		cout<<"reading data in error status"<<endl;
	delete p1d;
	return 0;
}

