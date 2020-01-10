/***********************************************************************
*	Uma bicicleta possui tr�s marchas b�sicas, sendo que a primeira	   *
*	faz a roda girar 0,5 vezes a cada pedalada. Na segunda marcha, a   *
*	roda gira 1 vez por pedalada. A terceira marcha, faz a roda girar  *
*	2 vezes por pedalada.											   *
*	Desenvolva um programa onde o ciclista informe a dist�ncia do seu  *
*	percurso e calcule quantas pedaladas ser�o necess�ria para comple- *
*	tar o trajeto.													   *
************************************************************************/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	
	setlocale(LC_ALL,"");
	printf("** PROGRAMA DIST�NCIA ** \n\n");
	float distancia, nPed, nGiros, tRoda;
	
	printf ("N�mero de giros: \n");
	scanf("%f", &nGiros);
	printf ("Diametro da roda(metros): \n");
	scanf("%f", &tRoda);
	printf ("Dist�ncia (kilometros): \n");
	scanf("%f", &distancia);
	
	nPed= distancia * 1000 / ((3.1415 * tRoda)/nGiros);
	
	printf ("\n N�mero de pedaladas: %.0f  \n", nPed);
	
	system("pause");
} 
