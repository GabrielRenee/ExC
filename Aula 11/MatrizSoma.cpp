/****************************************************************
*	Desenvolva um programa onde o usuario preencha duas matrizes*
*	3x3 e ao término exiba a matriz soma das duas               *
*****************************************************************/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
int matA[3][3], matB[3][3],matC[3][3], i, j;
void preencherMatriz(int tmpMat[3][3]){
	printf("Preenchendo matriz:\n");
	for (i=0;i<3;i++){
		for(j=0;j<3;j++){
			printf("Matriz[%d][%d]: ", i,j);
			scanf("%d",&tmpMat[i][j]);
		}
	}
	printf("Matriz preenchida!");
}
void somar(){
	for (i=0;i<3;i++){
		for(j=0; j < 3; j++){
			matC[i][j]= matA[i][j] + matB[i][j];
		}
	}
}
void exibirMatriz(int tmpMat[3][3]){
	printf("\n\n -- Exibindo matriz --\n\n");
	for (i=0;i<3;i++){
		for(j=0;j<3;j++){
			printf("\t%d\t||",
			tmpMat[i][j]);
		}
		printf("\n==================================================\n");
	}
}

int main(){
	printf("** Soma de matrizes **\n\n");
	preencherMatriz(matA);
	printf("\n\n");
	preencherMatriz(matB);
	somar();
	printf("\n----------------\n");
	exibirMatriz(matC);
}
