#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "../common/common.h"
#include "./function.h"



//prototype

void exo11(void);
void prog(void);


int main(void){

    prog();

    return 0;
}




void prog(){



    char lancer[] = "1";

    int t = (int)lancer[0];


    while( t == '1'){

        exo11();

        printf("\n\nRelancer le programme ?\n");
        printf("\n1)Oui\n");
        printf("\n2)Non\n");

        scanner(lancer, sizeof(lancer));

        t = (int)lancer[0];


    }    

}

void exo11(){

    int choix;

    printf("1) Addition de 2 matrices \n");
    printf("2) Multiplication de 2 matrices \n");
    printf("3) Multiplication d'une matrice par un scalaire \n");
    printf("4) Transposition d'une matrice \n");
    printf("\nchoix => ");
    scanf("%d", &choix);
    
    switch (choix)
    {
        case 1:
        drainBuffer();
        additonMatrice();
        break;

        case 2:
        drainBuffer();
        multDeuxMat();
        break;

        case 3:
        drainBuffer();
        multScalaire();
        break;

        case 4:
        drainBuffer();
        transMat();
        break;

    }


}