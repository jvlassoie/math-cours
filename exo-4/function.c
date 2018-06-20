#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>
#include "../common/common.h"
#include "./function.h"


void Encrypt4(){

    double M,Ma,Mb,Mc,Md,Ye = 5,Yr = 247, Xd = 3, Xe = 11, Xr = 15,Yd = 173;

    printf("Entre nombre \n");

    scanf("%lf",&M);

    Ma = fmod(pow(M, Xe),Xr);
    Mb = fmod(pow(Ma, Xd),Xr);

    printf("CSX = %lf\n",Ma);
    printf("CPY = %lf\n",Mb);

    printf("Envoie du message de X a Y \n");

    Mc = fmod(pow(Mb, Ye),Yr);
    Md = fmod(pow(Mc, Yd),Yr);


    printf("CSY = %lf\n",Mc);
    printf("CPX = %lf\n",Md);



}

