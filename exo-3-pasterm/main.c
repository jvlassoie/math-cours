#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "../common/common.h"
#include "./function.h"
#define LENMOT 80


//prototype

void exo3(void);
void prog(void);


int main(void){

    prog();

    return 0;
}




void prog(){



    char lancer[] = "1";

    int t = (int)lancer[0];


    while( t == '1'){

        exo3();

        printf("\n\nRelancer le programme ?\n");
        printf("\n1)Oui\n");
        printf("\n2)Non\n");

        scanner(lancer, sizeof(lancer));

        t = (int)lancer[0];


    }    

}

void exo3(){
Encrypt3();
/*    char key[LENKEY];


    char crypt[2] = {0};

    char *mot = NULL;


    mot = (char*)malloc(sizeof(*mot) * (LENMOT + 1) );

    intro("3");


    printf("1) crypter \n");
    printf("\n2) decrypter \n");
    printf("\n=> ");

    scanner(crypt,sizeof(crypt));

 
    printf("\nEntree votre phrase \n");
    printf("\n=> ");

    scanner(mot, LENMOT + 1);



    cryptNumber = strtol(crypt,NULL,10);

    if(cryptNumber == 2){

        //decrypt

    }else{

        //encrypt


    }

    printf("\nla nouvelle phrase est [%s]", mot);


    free(mot);*/
}