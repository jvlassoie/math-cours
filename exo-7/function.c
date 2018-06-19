#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include "../common/common.h"
#include "./function.h"

void diaVenn(){

	int nbz,i;
	char atr[10][10];

	printf("Diagramme compose de 3 cercles => A, B, C\n");
	printf("A          B\n");
	printf("     AB     \n");
	printf("     ABC    \n");
	printf(" AC      BC \n");
	printf("      C     \n");

	printf("combien de zones ?\n=>");
	scanf("%d",&nbz);
	printf("\nEntrer les zones\n");
	for (i = 0; i < nbz; i++)
	{
		printf("\n=> ");
		scanf("%s",atr[i]);
	}

	for (i = 0; i < nbz; i++)
	{
		printf("+ %s ",atr[i]);
	}

	printf("\n");
	
	for (i = 0; i < nbz; i++)
	{
		dialEns(atr[i]);
	}

}

void dialEns(char chaine[]){

	if (strcmp(chaine,"A") == 0)
	{
		printf("La partie gauche du cercle A est selectionnee\n");	
	}else if (strcmp(chaine,"B") == 0){

		printf("La partie droite du cercle B est selectionnee\n");	
		
	}else if (strcmp(chaine,"AB") == 0){

		printf("La partie centrale entre A et B est selectionnee\n");	
		
	}else if (strcmp(chaine,"ABC") == 0){

		printf("La partie centrale entre A,B et C est selectionnee\n");	

	}else if (strcmp(chaine,"AC") == 0){
		
		printf("La partie centrale gauche entre A et C est selectionnee\n");	

	}else if (strcmp(chaine,"BC") == 0){

		printf("La partie centrale droite entre A et C est selectionnee\n");	

	}else if (strcmp(chaine,"C") == 0){

		printf("La partie en bas du cercle C est selectionnee\n");	

	}
}