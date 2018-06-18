#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>
#include "common.h"


void intro(char *exo){

    system("cls");

    printf("*****************************\n");
    printf("                             \n");
    printf("        MATH => EXO-%s       \n", exo);
    printf("                             \n");
    printf("*****************************\n\n");


}




void stringToUppercase( char *mot )  {

    for(int i = 0; i < strlen(mot); i++){

        // remplace saut de ligne par le null de fin de string

        if((int)mot[i] == '\n'){

            mot[i] = '\0';

        }

        // stop si fin de string
        
        if((int)mot[i] == '\0'){

            break;

        }

        // mettre en majuscule si char en MAJ

        if((int)mot[i] >= 'a' && (int)mot[i] <= 'z'){

            mot[i] = (char)((int)mot[i] - 32);


        }


    } 

} 

void drainBuffer(){
    int a = 0;
    while (a != '\n' && a != EOF)
    {
        a = getchar();
    }
}

int scanner(char *string, int taille){
    char *positionEntree = NULL;

    if (fgets(string, taille, stdin) != NULL)
    {
        positionEntree = strchr(string, '\n');
        if (positionEntree != NULL)
        {
            *positionEntree = '\0';
        }
        else
        {
            drainBuffer();
        }
        return 1;
    }
    else
    {
        drainBuffer();
        return 0;
    }
}









