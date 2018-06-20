#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>
#include "../common/common.h"
#include "./function.h"


void Encrypt4(){

    double M,Ma,Mb,Mc,Md,Xp,Xq,Yp,Yq,Xz,Yz,Ye,Yr, Xd, Xe, Xr,Yd;
    int n;

    intro("4");

    printf("Entre nombre \n");

    scanf("%lf",&M);

    printf("le message non-crypt = %lf\n",M);
    randomInit();    
    
    Xp = nbAleatPrem(3,6);

    do
    {
        Xq = nbAleatPrem(3,6);

    } while (Xp == Xq);



    printf("Xp = %lf\n", Xp );
    printf("Xq = %lf\n", Xq );
    Xr = Xp*Xq;
    printf("Xr = %lf\n", Xr );

    Xz = (Xp-1)*(Xq-1);
    printf("Xz = %lf\n", Xz );

//choix des bornes plus grande que p et q pour etre sur qu il soit premier ET PLUS GRAND QUE EUX

// cle enryptage
    Xe = nbAleatPrem(7,20);

    printf("Xe = %lf\n", Xe );
// cle deryptage

    n = 1;

    while (1)
    {

    //detecter si n est un entier pour sortir de la boucle

        Xd = (float) ( (Xz * n) + 1 ) / Xe;
        
        if (isEntier(Xd) == true){break;}

        n++;

    } 

    printf("bool = %lf\n", isEntier(Xd) );
    printf("n = %lf\n", n );

    printf("Xd = %f\n", Xd );


    randomInit();    
    
    Yp = nbAleatPrem(3,6);

    do
    {
        Yq = nbAleatPrem(3,6);

    } while (Yp == Yq);



    printf("Yp = %lf\n", Yp );
    printf("Yq = %lf\n", Yq );
    Yr = Yp*Yq;
    printf("Yr = %lf\n", Yr );

    Yz = (Yp-1)*(Yq-1);
    printf("Yz = %lf\n", Yz );

//choix des bornes plus grande que p et q pour etre sur qu il soit premier ET PLUS GRAND QUE EUX

// cle enryptage
    Ye = nbAleatPrem(7,20);

    printf("Ye = %lf\n", Ye );
// cle deryptage

    n = 1;

    while (1)
    {

    //detecter si n est un entier pour sortir de la boucle

        Yd = (float) ( (Yz * n) + 1 ) / Ye;
        
        if (isEntier(Yd) == true){break;}

        n++;

    } 

    printf("bool = %lf\n", isEntier(Yd) );
    printf("n = %lf\n", n );

    printf("Yd = %f\n", Yd );


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

