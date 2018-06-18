#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>
#include "../common/common.h"
#include "./function.h"


void randomInit(){
  srand(time(NULL));
}

int nbAleat(int MIN,int MAX){

    /*srand(time(NULL));*/

    return rand()%(MAX-MIN+1)+MIN;
}

int nbAleatPrem(int MIN,int MAX){
    int nbaleat = nbAleat(MIN,MAX);

    while(isNBpremier(nbaleat) == false){

        nbaleat = nbAleat(MIN,MAX);

    }

    return nbaleat;
}

//le franglais :p
bool isNBpremier(int nbTest){


   for (int i = 2; i < nbTest - 1; ++i)
   {

    if (nbTest%i == 0)
    {
      return false;
  }

}

return true;

}

long long int power(int x, unsigned int n) {
  long long int y = 1;
   unsigned int m = 1;
   while (m <= n) {
      y *= x;
      m++;
   }
   return y;
}

bool isEntier(float nb){

printf("%f\n", nb);
    if (nb - (int)nb == 0.0)
    {
        return true;
    }

    return false;
}


void Encrypt3(){

//arriver a rendre un nb premier aléatoirement

    int p,q,r,e,z,n,M;
    float d;
    bool check;

    M= 11;
    printf("le message non-crypt = %d\n",M);
    randomInit();    
    
    p = nbAleatPrem(10,20);

    do
    {
        q = nbAleatPrem(10,20);

    } while (p == q);


    printf("p = %d\n", p );
    printf("q = %d\n", q );
    r = p*q;
    printf("r = %d\n", r );

    z = (p-1)*(q-1);
    printf("z = %d\n", z );

//choix des bornes plus grande que p et q pour etre sur qu il soit premier ET PLUS GRAND QUE EUX

// cle enryptage
    e = nbAleatPrem(20,30);

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
    /*double C = pow((double)M,(double)e);*/
/*    long long int C = power(M,e)%r;*/
/*    printf("power = %f\n", C);*/

    printf("power = %lf\n", fmod(powl((float)M,(float)e),r));
/*    printf("le message encrypter est = %d\n", C);*/
    /*printf("le message encrypter est = %d\n", (int)d);
    printf("le message decrypter est = %d\n", (power(C,(int)d)%r));
*/

}

