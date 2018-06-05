#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "../common/common.h"
#define LENMOT 80
#define LENKEY 8


//prototype

void exo2(void);
void prog(void);


int main(void){

    prog();

    return 0;
}




void prog(){



    char lancer[] = "1";

    int t = (int)lancer[0];


    while( t == '1'){

        exo2();

        printf("\n\nRelancer le programme ?\n");
        printf("\n1)Oui\n");
        printf("\n2)Non\n");

        scanner(lancer, sizeof(lancer));

        t = (int)lancer[0];


    }    

}

void exo2(){

    char key[LENKEY];

    long int keyNumber, cryptNumber;

    char crypt[2] = {0};

    char *mot = NULL;


    mot = (char*)malloc(sizeof(*mot) * (LENMOT + 1) );

    intro("2");


    printf("1) crypter \n");
    printf("\n2) decrypter \n");
    printf("\n=> ");

    scanner(crypt,sizeof(crypt));

    do{

        printf("\nEntree votre cle de 8 chiffres entre 1 et 8\n");
        printf("\n=> ");

        scanner(key, LENKEY + 1);

    }while( strlen(key) < LENKEY  || strlen(key) > LENKEY || AuthKeyEight(key) == false);

    printf("\nEntree votre mot \n");
    printf("\n=> ");

    scanner(mot, LENMOT + 1);

    stringToUppercase( mot );          

    keyNumber = strtol(key,NULL, 10);

    printf("\nle mot est %s \n\net la cle %d\n", mot, keyNumber);

    if ( checkLetterOrZero( mot ) == false) {

        printf("\n les caracteres rentre sont incorrecte \n");
        exit(1);
    }

    cryptNumber = strtol(crypt,NULL,10);

    if(cryptNumber == 2){


        Decrypt2(mot, &keyNumber);

    }else{

        Encrypt2(mot, &keyNumber);


    }

    printf("\nle nouveau mot est [%s]", mot);


    free(mot);
}