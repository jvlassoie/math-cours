#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "common.h"


bool checkLetterOrSpace( char *mot ){

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

        if((int)mot[i] == ' '
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


void Encrypt1(char *mot, long int *key){
    
    long int tmpCheckArrayOverFlow;

    char alpha[] = {
    'A',
    'B',
    'C',
    'D',
    'E',
    'F',
    'G',
    'H',
    'I',
    'J',
    'K',
    'L',
    'M',
    'N',
    'O',
    'P',
    'Q',
    'R',
    'S',
    'T',
    'U',
    'V',
    'W',
    'X',
    'Y',
    'Z',
    ' '
    };



    for(int i = 0; i < strlen(mot); i++){


        for(int j = 0; j < sizeof(alpha) ; j++){

            if(alpha[j] == mot[i]){
               
                tmpCheckArrayOverFlow = ((j + *key) < 0)?sizeof(alpha):j;

                mot[i] = alpha[(tmpCheckArrayOverFlow + *key)%sizeof(alpha)];

                break;
            }


        }

     

    }



}
