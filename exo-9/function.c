#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include "../common/common.h"
#include "./function.h"

void sysEquDeuxInc(double X1,double X2,double Y1,double Y2,double res1,double res2){


	double resX,resY,determinant;

	//utilisation du système de cramer

	 determinant = X1 * Y2 - X2 * Y1;

	 if (determinant == 0);
	 {

	 	printf("Il n'y a pas d unique solution pour x et y\n");
	 	exit(1);
	 }

     resX = (Y1 * res2 - Y2 * res1)/determinant;
     
     resY = (res1 * X2 - res2 * X1)/determinant;



	printf("X = %lf\n", resX);
	printf("Y = %lf\n", resY);

}