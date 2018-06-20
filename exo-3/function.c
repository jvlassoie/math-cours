#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>
#include "../common/common.h"
#include "./function.h"




void Encrypt3(){

//arriver a rendre un nb premier aléatoirement

    int p,q,r,e,z,n,M;
    float d;
    double C;
    bool check;

    printf("Entre un nombre \n");
    scanf("%d",&M);
    printf("le message non-crypt = %d\n",M);
    randomInit();    
    
    p = nbAleatPrem(3,6);

    do
    {
        q = nbAleatPrem(3,6);

    } while (p == q);



    printf("p = %d\n", p );
    printf("q = %d\n", q );
    r = p*q;
    printf("r = %d\n", r );

    z = (p-1)*(q-1);
    printf("z = %d\n", z );

//choix des bornes plus grande que p et q pour etre sur qu il soit premier ET PLUS GRAND QUE EUX

// cle enryptage
    e = nbAleatPrem(7,20);

    printf("e = %d\n", e );
// cle deryptage

    n = 1;

    while (1)
    {

    //detecter si n est un entier pour sortir de la boucle

        d = (float) ( (z * n) + 1 ) / e;
        
        if (isEntier(d) == true){break;}

        n++;

    } 

    printf("bool = %d\n", isEntier(d) );
    printf("n = %d\n", n );

    printf("d = %f\n", d );

    C = fmod(pow((float)M,(float)e),(float)r);
    printf("C = %f\n", C);
    printf("M = %lf\n", fmod(pow(C,d),r));

}

