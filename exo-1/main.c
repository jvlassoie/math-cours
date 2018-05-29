#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "../common/common.h"
#define LEN 80


//prototype

void exo1(void);
void prog(void);


int main(void){

    prog();

    return 0;
}




void prog(){

    char lancer[] = "1";

    int t = (int)lancer[0];


    while( t == '1'){

        exo1();

        printf("\n\nRelancer le programme ?\n");
        printf("\n1)Oui\n");
        printf("\n2)Non\n");

        scanner(lancer, sizeof(lancer));

        t = (int)lancer[0];


    }    
}

void exo1(){

    char key[4] = {0};

    long int keyNumber, cryptNumber;

    char crypt[2] = {0};

    char *mot = NULL;


    mot = (char*)malloc(sizeof(*mot) * (LEN + 1) );

    system("cls");

    printf("*****************************\n");
    printf("*                           *\n");
    printf("*       MATH => EXO-1       *\n");
    printf("*                           *\n");
    printf("*****************************\n\n");

    printf("1) crypter \n");
    printf("\n2) decrypter \n");
    printf("\n=> ");

    scanner(crypt,sizeof(crypt));


    printf("\nEntree votre cle \n");
    printf("\n=> ");

    scanner(key, sizeof(key));

    printf("\nEntree votre mot \n");
    printf("\n=> ");

    scanner(mot, LEN);

    stringToUppercase( mot );          

    keyNumber = strtol(key,NULL, 10);

    printf("\nle mot est %s \n\net la cle %d\n", mot, keyNumber);

    if ( checkLetterOrSpace( mot ) == false) {

        printf("\n les caracteres rentre sont incorrecte \n");
        exit(1);
    }

    cryptNumber = strtol(crypt,NULL,10);

    if(cryptNumber == 2){

        keyNumber = -keyNumber;

        Encrypt1(mot, &keyNumber);

    }else{

        Encrypt1(mot, &keyNumber);


    }

    printf("\nle nouveau mot est [%s]", mot);

    free(mot);
}