/*
	Faça um algoritmo que leia a idade de uma pessoa expressa em anos, 
	meses e dias e escreva a idade dessa pessoa expressa apenas em dias. 
	Considerar ano com 365 dias e mês com 30 dias. 
*/
#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<string.h>
#include<time.h>

int main(){
	
	int dia,mes,ano, diastotal;
	char resp;
	setlocale(LC_ALL,"");
	do{
		printf("*** Programa idade em dias ***\n\n");
		printf("Digite sua idade em dias: ");
		scanf("%d",&dia);
		printf("Digite sua idade em meses: ");
		scanf("%d",&mes);
		printf("Digite sua idade em anos: ");
		scanf("%d",&ano);
		
		diastotal = dia + (mes*30) + (ano*365);
		
		printf("Você possui %d dias de vida", diastotal);
		
		printf("\n Deseja efetuar nova consulta? (s/n) ");
		scanf("%s", &resp);
		
		system("cls");
	}while (resp == 's');
}
