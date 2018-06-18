#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "../common/common.h"
#include "./function.h"



//prototype

void exo5(void);
void prog(void);


int main(void){

    prog();

    return 0;
}




void prog(){



    char lancer[] = "1";

    int t = (int)lancer[0];


    while( t == '1'){

        exo5();

        printf("\n\nRelancer le programme ?\n");
        printf("\n1)Oui\n");
        printf("\n2)Non\n");

        scanner(lancer, sizeof(lancer));

        t = (int)lancer[0];


    }    

}

void exo5(){

    double A,B,C;
    char Astr[10],Bstr[10],Cstr[10];


    intro("5");
    
    printf("\nEntrer les valeurs de l'equation\n");
    
    printf("\n=> A = ");

    scanner(Astr, 10);
    
    printf("\n=> B = ");
    
    scanner(Bstr, 10);

    printf("\n=> C = ");
    
    scanner(Cstr, 10);

    sscanf(Astr, "%lf", &A);
    sscanf(Bstr, "%lf", &B);
    sscanf(Cstr, "%lf", &C);

    equSecondDeg(A,B,C);

}