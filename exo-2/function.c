#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "../common/common.h"
#include "./function.h"

bool checkLetterOrZero( char *mot ){

 bool test;

 for(int i = 0; i < strlen(mot); i++){

        // remplace saut de ligne par le null de fin de string

    if((int)mot[i] == '\n'){

        mot[i] = '\0';
        
    }


        // stop si fin de string

    if((int)mot[i] == '\0'){

        break;

    }

        // revoie une erreur si un char n'est pas une lettre ni un space

    if((int)mot[i] == '0'
        || (int)mot[i] >= 'a'
        && (int)mot[i] <= 'z'
        || ((int)mot[i] >= 'A'
            && (int)mot[i] <= 'Z')
        ){ 

        test = true;

}else{

    test = false;
    break;
}


} 

return test;

}

void Encrypt2(char *mot, long int *key){

    int ecart = 8;
    int nbComp = 0;
    int compteur = 0;
    int compteurPaquet = 0;
    char keyString[8] = "";
    char *stringEncrypt = NULL;

    stringEncrypt = (char*)malloc(sizeof(*stringEncrypt) * (80 + 1) );


    snprintf(keyString, ecart + 1,"%d", *key);
    


    if (strlen(mot)%8 > 0){

        nbComp = ecart - strlen(mot)%8;

    }

    while( nbComp > 0){

        strcat(mot, "0");

        nbComp--;
    }

    strcpy(stringEncrypt, mot);


    for(int i = 0; i < strlen(mot); i++){


        compteur = (compteur ==  ecart)? 0 : compteur;

        // -1 pour start 0
        *(mot + i) = stringEncrypt[((int)keyString[compteur] - '0' - 1) + compteurPaquet];


        compteur++;

        compteurPaquet = (compteur == ecart)?compteurPaquet+ecart:compteurPaquet;


    }   


    free(stringEncrypt);

}


void Decrypt2(char *mot, long int *key){


    int ecart = 8;
    int nbComp = 0;
    int compteur = 0;
    int compteurPaquet = 0;
    char keyString[8] = "";
    char *stringEncrypt = NULL;

    stringEncrypt = (char*)malloc(sizeof(*stringEncrypt) * (80 + 1) );


    snprintf(keyString, ecart + 1,"%d", *key);
    


    if (strlen(mot)%8 > 0){

        nbComp = ecart - strlen(mot)%8;

    }

    while( nbComp > 0){

        strcat(mot, "0");

        nbComp--;
    }

    strcpy(stringEncrypt, mot);


    for(int i = 0; i < strlen(mot); i++){


        compteur = (compteur ==  ecart)? 0 : compteur;
        
        // -1 pour start 0
        // mot + cle chiffre (+ compteurPaquet) = stringEncrypt[incremente]
        *(mot + ((int)keyString[compteur] + compteurPaquet - '0' - 1)) = stringEncrypt[i];


        compteur++;

        compteurPaquet = (compteur == ecart)?compteurPaquet+ecart:compteurPaquet;


    }   


    free(stringEncrypt);

}

bool AuthKeyEight(char *key){

    for (int i = 0; i < strlen(key); ++i)
    {

        if ((int)key[i] < '1' || (int)key[i] > '8')
        {
            return false;
        }

        return true;
    }


}