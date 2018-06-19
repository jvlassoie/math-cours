#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include "../common/common.h"
#include "./function.h"


void treeBin(){

	int i,j,taille,suiteNb[100];

	printf("Entrer la taille de la suite de nombre \n=> ");
	scanf("%d",&taille);

	printf("Entrer les nombre un a un\n");
	for (i = 0; i < taille; i++)
	{
		printf("\n=> ");
		scanf("%d",&suiteNb[i]);

	}


	//trier le tableau par ordre croissant

	for (i = 0; i < taille; i++)                     
	{
		for (j = 0; j < taille; j++)      
		{
			if (suiteNb[j] > suiteNb[i])                
			{
				int tmp = suiteNb[i];        
				suiteNb[i] = suiteNb[j];            
				suiteNb[j] = tmp;             
			}
		}
	}


	printf("<%d>\n", suiteNb[0]);

	for (i = 0; i < taille; i++)
	{

		if ((2*i+1) <= taille-1)
		{
			printf("<%d> ----> <%d>\n", suiteNb[i],suiteNb[2*i+1]);
		}
		if ((2*i+2) <= taille-1)
		{
			printf("<%d> ----> <%d>\n", suiteNb[i],suiteNb[2*i+2]);
		}

	}

}