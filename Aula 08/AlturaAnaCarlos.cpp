/****************************************************************
*	Ana possui 1,12 de altura e cresce 3 cm por ano,			*
*	enquanto carlos, seu irmão, possui 82 cm de altura,			*
*	e cresce 5 cm por ano, Desenvolva um programa que calcule	*
*	quantos anos são necessários para que carlos ultrapasse ana *
*	e mostre a altura dos dois									*
*****************************************************************/
#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<string.h>

int main(){
	float altAna, altCarlos;
	int anos;
	altAna = 1.12;
	altCarlos = 0.82;
	while (altCarlos < altAna){
		altAna += 0.03;
		altCarlos += 0.05;
		anos++;
	}
	printf("Altura Ana: %.2f\n", altAna);
	printf("Altura Carlos: %.2f\n", altCarlos);
	printf("Anos: %d\n",anos);	
}
