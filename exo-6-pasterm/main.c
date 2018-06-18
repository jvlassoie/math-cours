#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "../common/common.h"
#include "./function.h"



//prototype

void exo6(void);
void prog(void);


int main(void){

    prog();

    return 0;
}




void prog(){



    char lancer[] = "1";

    int t = (int)lancer[0];


    while( t == '1'){

        exo6();

        printf("\n\nRelancer le programme ?\n");
        printf("\n1)Oui\n");
        printf("\n2)Non\n");

        scanner(lancer, sizeof(lancer));

        t = (int)lancer[0];


    }    

}

void exo6(){

    intro("6");

}