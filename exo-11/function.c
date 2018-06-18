#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include "../common/common.h"
#include "./function.h"

void additonMatrice(){

	int tailleLigne,tailleCol,i,j,Mat1[10][10],Mat2[10][10],res[10][10];
	char taillelignestr[10],taillecolstr[10];

	printf("Entrer le nombre de lignes et colonnes (pas plus de 4)\n");

	printf("\nLigne(s) = ");
	scanner(taillelignestr,10);
	printf("\nColonne(s) = ");
	scanner(taillecolstr,10);

	sscanf(taillelignestr, "%d", &tailleLigne);
	sscanf(taillecolstr, "%d", &tailleCol);

	if (tailleLigne > 4 || tailleCol > 4 )
	{
		printf("Trop grand\n");
		exit(1);
	}


	printf("\n1ere matrice\n");

	for (i = 0; i < tailleLigne; i++){

		for (j = 0; j < tailleCol; j++){
			printf("=> ");
			scanf("%d", &Mat1[i][j]);
		}
	}

	printf("\n2eme matrice\n");

	for (i = 0; i < tailleLigne; i++){

		for (j = 0; j < tailleCol; j++){

			printf("=> ");
			scanf("%d", &Mat2[i][j]);
		}
	}


	for (i = 0; i < tailleLigne; i++){

		for (j = 0; j < tailleCol; j++){

			res[i][j] = Mat1[i][j] + Mat2[i][j];

		}
	}



	printf("\nLa somme des matrices\n");

	for (i = 0; i < tailleLigne; i++){

		for (j = 0; j < tailleCol; j++){

			printf("%d\t", res[i][j]);

		}

		printf("\n");

	}


}


void multScalaire(){

	int i,j,scalaire,tailleLigne,tailleCol,Mat[10][10];
	char taillelignestr[10],taillecolstr[10];

	printf("Entrer le nombre de lignes et colonnes (pas plus de 4)\n");

	printf("\nLigne(s) = ");
	scanner(taillelignestr,10);
	printf("\nColonne(s) = ");
	scanner(taillecolstr,10);

	sscanf(taillelignestr, "%d", &tailleLigne);
	sscanf(taillecolstr, "%d", &tailleCol);

	if (tailleLigne > 4 || tailleCol > 4 )
	{
		printf("Trop grand\n");
		exit(1);
	}

	printf("\nLe scalaire pour faire le produit\n=> ");
	scanf("%d", &scalaire);

	printf("\nla matrice\n");

	for (i = 0; i < tailleLigne; i++){

		for (j = 0; j < tailleCol; j++){
			printf("=> ");
			scanf("%d", &Mat[i][j]);
		}
	}

	for (i = 0; i < tailleLigne; i++){

		for (j = 0; j < tailleCol; j++){
			Mat[i][j] = scalaire*Mat[i][j];
		}
	}

	printf("\nLe produit de la matrice et d un scalaire\n");

	for (i = 0; i < tailleLigne; i++){

		for (j = 0; j < tailleCol; j++){

			printf("%d\t", Mat[i][j]);

		}

		printf("\n");

	}

}




void transMat(){

	int i,j,tailleLigne,tailleCol,Mat[10][10],MatTrans[10][10];
	char taillelignestr[10],taillecolstr[10];

	printf("Entrer le nombre de lignes et colonnes (pas plus de 4)\n");

	printf("\nLigne(s) = ");
	scanner(taillelignestr,10);
	printf("\nColonne(s) = ");
	scanner(taillecolstr,10);

	sscanf(taillelignestr, "%d", &tailleLigne);
	sscanf(taillecolstr, "%d", &tailleCol);

	if (tailleLigne > 4 || tailleCol > 4 )
	{
		printf("Trop grand\n");
		exit(1);
	}


	printf("\nla matrice\n");

	for (i = 0; i < tailleLigne; i++){

		for (j = 0; j < tailleCol; j++){
			printf("=> ");
			scanf("%d", &Mat[i][j]);
		}
	}

	for (i = 0; i < tailleLigne; i++){

		for (j = 0; j < tailleCol; j++){
			
			MatTrans[j][i] = Mat[i][j];

		}
	}


	printf("\nAffichage de la matrice transpose\n");

	for (j = 0; j < tailleCol; j++){

		for (i = 0; i < tailleLigne; i++){

			printf("%d\t", MatTrans[j][i]);

		}

		printf("\n");

	}


}


void multDeuxMat(){


	int tailleLigneMat1,tailleColMat1,tailleLigneMat2,tailleColMat2,i,j,k,Mat1[10][10],Mat2[10][10],res[10][10];

	printf("Entrer le nombre de lignes et colonnes de la matrice 1 (pas plus de 4)\n");

	printf("\nLigne(s) = ");
	scanf("%d", &tailleLigneMat1);
	printf("\nColonne(s) = ");
	scanf("%d", &tailleColMat1);


	if (tailleLigneMat1 > 4 || tailleColMat1 > 4 )
	{
		printf("Trop grand\n");
		exit(1);
	}


	printf("\n1ere matrice\n");

	for (i = 0; i < tailleLigneMat1; i++){

		for (j = 0; j < tailleColMat1; j++){
			printf("=> ");
			scanf("%d", &Mat1[i][j]);
		}
	}

	printf("\n2eme matrice\n");

	printf("\nEntrer le nombre de lignes et colonnes de la matrice 2 (pas plus de 4)\n");

	printf("\nLigne(s) = ");
	scanf("%d", &tailleLigneMat2);
	printf("\nColonne(s) = ");
	scanf("%d", &tailleColMat2);


	if (tailleLigneMat2 > 4 || tailleColMat2 > 4 )
	{
		printf("Trop grand\n");
		exit(1);
	}



	for (i = 0; i < tailleLigneMat2; i++){

		for (j = 0; j < tailleColMat2; j++){

			printf("=> ");
			scanf("%d", &Mat2[i][j]);
		}
	}


	if (tailleColMat1 != tailleLigneMat2)
	{
		printf("On ne peux pas multiplier ces matrices !\n");
		exit(1);
	}


	for (i = 0; i < tailleLigneMat1; i++){
		for (j = 0; j < tailleColMat2; j++)
		{
			res[i][j]=0;
			for (k = 0; k < tailleColMat1; k++){
				res[i][j] += Mat1[i][k]*Mat2[k][j];
			}
		}
	}


	printf("Le produit des 2 matrices \n");
	for (i = 0; i < tailleLigneMat1; i++)
	{
		for (j = 0; j < tailleColMat2; j++)
			printf("%7d", res[i][j]);
		printf("\n");
	}

}