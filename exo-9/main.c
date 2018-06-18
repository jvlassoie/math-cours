#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "../common/common.h"
#include "./function.h"



//prototype

void exo9(void);
void prog(void);


int main(void){

    prog();

    return 0;
}




void prog(){



    char lancer[] = "1";

    int t = (int)lancer[0];


    while( t == '1'){

        exo9();

        printf("\n\nRelancer le programme ?\n");
        printf("\n1)Oui\n");
        printf("\n2)Non\n");

        scanner(lancer, sizeof(lancer));

        t = (int)lancer[0];


    }    

}

void exo9(){

    double X1,X2,Y1,Y2,res1,res2;
    char X1str[10],X2str[10],Y1str[10],Y2str[10],res1str[10],res2str[10];


    intro("9");

    printf("\nSysteme de 2 equations a 2 inconnues\n\n");

    printf("1ere equation\n\n");

    printf("=> X = ");

    scanner(X1str, 10);

    printf("\n=> Y = ");
    
    scanner(Y1str, 10);

    printf("\n=> le resultat = ");

    scanner(res1str, 10);

    printf("\n2eme equation\n\n");

    printf("\n=> X = ");

    scanner(X2str, 10);

    printf("\n=> Y = ");

    scanner(Y2str, 10);
    
    printf("\n=> le resultat = ");

    scanner(res2str, 10);
    
    sscanf(X1str, "%lf", &X1);
    sscanf(Y1str, "%lf", &Y1);
    sscanf(res1str, "%lf", &res1);
    sscanf(X2str, "%lf", &X2);
    sscanf(Y2str, "%lf", &Y2);
    sscanf(res2str, "%lf", &res2);

    sysEquDeuxInc(X1,X2,Y1,Y2,res1,res2);

}