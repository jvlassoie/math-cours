#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include "../common/common.h"
#include "./function.h"

double DetGlobTrois(double X1,double X2,double X3,double Y1,double Y2,double Y3,double Z1,double Z2,double Z3){


return X1*((Y2*Z3)-(Y3*Z2))-Y1*((X2*Z3)-(X3*Z2))+Z1*((X2*Y3)-(X3*Y2));


}

double DetXTrois(double res1,double res2,double res3,double Y1,double Y2,double Y3,double Z1,double Z2,double Z3){


return res1*((Y2*Z3)-(Y3*Z2))-Y1*((res2*Z3)-(res3*Z2))+Z1*((res2*Y3)-(res3*Y2));


}


double DetYTrois(double X1,double X2,double X3,double res1,double res2,double res3,double Z1,double Z2,double Z3){


return X1*((res2*Z3)-(res3*Z2))-res1*((X2*Z3)-(X3*Z2))+Z1*((X2*res3)-(X3*res2));


}


double DetZTrois(double X1,double X2,double X3,double Y1,double Y2,double Y3,double res1,double res2,double res3){


return X1*((Y2*res3)-(Y3*res2))-Y1*((X2*res3)-(X3*res2))+res1*((X2*Y3)-(X3*Y2));


}

void sysEquTroisInc(double X1,double X2,double X3,double Y1,double Y2,double Y3,double Z1,double Z2,double Z3,double res1,double res2,double res3){

	double X,Y,Z,DX,DY,DZ,D,determinant;

	//utilisation du système de cramer
	//D determinant general du system = X1*((Y2*Z3)-(Y3*Z2))-Y1*((X2*Z3)-(X3*Z2))+Z1*((X2*Y3)-(X3*Y2))
	//les autres determinants sont calculer en remplacant leur emplacements dans la matrice par le vecteur des resultats
	//DX/D
	//DY/D
	//DZ/D


	 determinant = DetGlobTrois(X1,X2,X3,Y1,Y2,Y3,Z1,Z2,Z3);

	 DX = DetXTrois(res1,res2,res3,Y1,Y2,Y3,Z1,Z2,Z3);
	 DY = DetYTrois(X1,X2,X3,res1,res2,res3,Z1,Z2,Z3);
	 DZ = DetZTrois(X1,X2,X3,Y1,Y2,Y3,res1,res2,res3);

	 X = DX/determinant;
	 Y = DY/determinant;
	 Z = DZ/determinant;

	 printf("\nX = %lf\n", X);
	 printf("\nY = %lf\n", Y);
	 printf("\nZ = %lf\n", Z);


}