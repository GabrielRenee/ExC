/***********************************************************************
*	Um pedreiro, afim de evitar desperdicios, necessita de um programa *
*	que o auxilie a determinar a quantidade de tijolos necessária para *
*	levantar um muro. Sabendo que, para cada tijolo são usadas 150g de *
*	argamassa, desenvolva o programa que calcule a quantidade de tijo- *
*	los e argamassa necessárias para levantar o muro.				   *
************************************************************************/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	
	float aPar,lPar,lTij,aTij, nTij, qArg;
	
	setlocale(LC_ALL,"");
	printf("** PROGRAMA PEDREIRO ** \n\n");
	printf("INFORME OS VALORES EM METROS \n\n");
	
	printf ("Altura da parede: ");
	scanf("%f", &aPar);
	printf ("Largura da parede: ");
	scanf("%f", &lPar);
	printf ("Altura do Tijolo: ");
	scanf("%f", &aTij);
	printf ("Largura do Tijolo: ");
	scanf("%f", &lTij);
	
	nTij = (aPar/aTij) * (lPar/lTij);
	qArg = (nTij * 150)/1000;
	
	printf ("\n Número de tijolos: %.0f", nTij );
	printf ("\n Quantidade de Argamassa: %.0f kgs \n", qArg);
	
	system("pause");	
}
