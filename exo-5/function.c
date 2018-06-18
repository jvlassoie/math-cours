#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include "../common/common.h"
#include "./function.h"

void equSecondDeg(double A,double B,double C){

    double delta,res,res2;

    delta = pow(B,2) - 4*A*C;
    printf("L equation => %.lfX2 + %.lfX + %.lf\n\n",A,B,C);
    printf("DELTA = %lf\n\n", delta);
    if (delta < 0){
        printf("il n'y a aucune solution\n\n");
    }else if(delta == 0){
        res = -B/(2*A);
        printf("il y a une seule solution\n\n");
        printf("=> x = %lf\n",res);


    }else if (delta > 0){
        res = (-B-sqrt(delta))/(2*A);
        res2 = (-B+sqrt(delta))/(2*A);
        printf("il y a deux solutions\n\n");

        printf("=> x1 = %lf \n", (res < res2)?res:res2);

        printf("=> x2 = %lf \n", (res > res2)?res:res2);
    
    }

}