#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include "../common/common.h"
#include "./function.h"

void additionDeuxPoly(){

	int i,poldeg1,pol1[10],poldeg2,pol2[10],res[10],polgd;

	printf("Entrer le 1er polynome\n");
	printf("\nQuel est son degre ?\n=> ");
	scanf("%d",&poldeg1);

	for (i = poldeg1; i >= 0; --i)
	{
		printf("Entrer le coefficient de degre %d ?\n=> ",i);
		scanf("%d",&pol1[i]);

	}



	printf("Entrer le 2eme polynome\n");
	printf("\nQuel est son degre ?\n=> ");
	scanf("%d",&poldeg2);

	for (i = poldeg2; i >= 0; --i)
	{
		printf("Entrer le coefficient de degre %d ?\n=> ",i);
		scanf("%d",&pol2[i]);

	}

	polgd = (poldeg1 > poldeg2)?(poldeg1+1):(poldeg2+1);

	for (i = 0; i < polgd; i++)
	{

		res[i] = pol1[i]+pol2[i];

	}
	
	printf("la somme des 2 polynome \n");

	for (i = (polgd-1); i >= 0; --i)
	{

		if (i > 0)
		{

			printf("+ %dX^%d ", res[i],i);

		}else{

			printf("+ %d", res[i]);

		}

	}


}

void multDeuxPoly(){

	int i,j,poldeg1,pol1[10],poldeg2,pol2[10],res[10],polgd;

	printf("Entrer le 1er polynome\n");
	printf("\nQuel est son degre ?\n=> ");
	scanf("%d",&poldeg1);

	for (i = poldeg1; i >= 0; --i)
	{
		printf("Entrer le coefficient de degre %d ?\n=> ",i);
		scanf("%d",&pol1[i]);

	}



	printf("Entrer le 2eme polynome\n");
	printf("\nQuel est son degre ?\n=> ");
	scanf("%d",&poldeg2);

	if(poldeg1 != poldeg2){

		printf("les degres doit etre les memes\n");
		exit(1);
	}

	for (i = poldeg2; i >= 0; --i)
	{
		printf("Entrer le coefficient de degre %d ?\n=> ",i);
		scanf("%d",&pol2[i]);

	}

	polgd = (poldeg1 > poldeg2)?(poldeg1+1):(poldeg2+1);

	printf("Le produit de 2 polynome \n=> ");

	for (i = (polgd-1); i >= 0; --i){

		for (j = (polgd-1); j >= 0; --j)
		{

			if (pol1[i] != 0 && pol2[j] != 0)
			{

				printf("+ %dX^%d ", (pol1[i]*pol2[j]),i+j);

			}


		}
	}

}

void multCoefReelPoly(){


	int i,poldeg1,pol1[10],coefReel,res[10];

	printf("Entrer le coefficient Reel\n=> ");
	scanf("%d",&coefReel);

	printf("\nEntrer le polynome\n");
	printf("\nQuel est son degre ?\n=> ");
	scanf("%d",&poldeg1);

	for (i = poldeg1; i >= 0; --i)
	{
		printf("Entrer le coefficient de degre %d ?\n=> ",i);
		scanf("%d",&pol1[i]);

	}

	for (i = poldeg1; i >= 0; --i){

		if (i > 0)
		{
			printf("+ %dX^%d ", pol1[i]*coefReel,i);
		}else{
			
			printf("+ %d", pol1[i]*coefReel);
		}
	
	}



}