#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "../common/common.h"
#include "./function.h"



//prototype

void exo10(void);
void prog(void);


int main(void){

    prog();

    return 0;
}




void prog(){



    char lancer[] = "1";

    int t = (int)lancer[0];


    while( t == '1'){

        exo10();

        printf("\n\nRelancer le programme ?\n");
        printf("\n1)Oui\n");
        printf("\n2)Non\n");

        scanner(lancer, sizeof(lancer));

        t = (int)lancer[0];


    }    

}

void exo10(){

    double X1,X2,X3,Y1,Y2,Y3,Z1,Z2,Z3,res1,res2,res3;
    char X1str[10],X2str[10],X3str[10],Y1str[10],Y2str[10],Y3str[10],Z1str[10],Z2str[10],Z3str[10],res1str[10],res2str[10],res3str[10];


    intro("10");

    printf("\nSysteme de 3 equations a 3 inconnues\n\n");

    printf("1ere equation\n\n");

    printf("=> X = ");

    scanner(X1str, 10);

    printf("\n=> Y = ");
    
    scanner(Y1str, 10);

    printf("\n=> Z = ");
    
    scanner(Z1str, 10);

    printf("\n=> le resultat = ");

    scanner(res1str, 10);

    printf("\n2eme equation\n\n");

    printf("\n=> X = ");

    scanner(X2str, 10);

    printf("\n=> Y = ");

    scanner(Y2str, 10);

    printf("\n=> Z = ");
    
    scanner(Z2str, 10);
    
    printf("\n=> le resultat = ");

    scanner(res2str, 10);

    printf("\n3eme equation\n\n");

    printf("\n=> X = ");

    scanner(X3str, 10);

    printf("\n=> Y = ");

    scanner(Y3str, 10);

    printf("\n=> Z = ");
    
    scanner(Z3str, 10);
    
    printf("\n=> le resultat = ");

    scanner(res3str, 10);
    
    sscanf(X1str, "%lf", &X1);
    sscanf(Y1str, "%lf", &Y1);
    sscanf(Z1str, "%lf", &Z1);
    sscanf(res1str, "%lf", &res1);
    sscanf(X2str, "%lf", &X2);
    sscanf(Y2str, "%lf", &Y2);
    sscanf(Z2str, "%lf", &Z2);
    sscanf(res2str, "%lf", &res2);
    sscanf(X3str, "%lf", &X3);
    sscanf(Y3str, "%lf", &Y3);
    sscanf(Z3str, "%lf", &Z3);
    sscanf(res3str, "%lf", &res3);


    sysEquTroisInc(X1,X2,X3,Y1,Y2,Y3,Z1,Z2,Z3,res1,res2,res3);

}