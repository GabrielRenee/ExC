/***********************************************************************
*	Uma bicicleta possui três marchas básicas, sendo que a primeira	   *
*	faz a roda girar 0,5 vezes a cada pedalada. Na segunda marcha, a   *
*	roda gira 1 vez por pedalada. A terceira marcha, faz a roda girar  *
*	2 vezes por pedalada.											   *
*	Desenvolva um programa onde o ciclista informe a distância do seu  *
*	percurso e calcule quantas pedaladas serão necessária para comple- *
*	tar o trajeto.													   *
************************************************************************/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	
	setlocale(LC_ALL,"");
	printf("** PROGRAMA DISTÂNCIA ** \n\n");
	float distancia, nPed, nGiros, tRoda;
	
	printf ("Número de giros: \n");
	scanf("%f", &nGiros);
	printf ("Diametro da roda(metros): \n");
	scanf("%f", &tRoda);
	printf ("Distância (kilometros): \n");
	scanf("%f", &distancia);
	
	nPed= distancia * 1000 / ((3.1415 * tRoda)/nGiros);
	
	printf ("\n Número de pedaladas: %.0f  \n", nPed);
	
	system("pause");
} 
