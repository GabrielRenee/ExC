/*
	Desenvolva um programa onde o usu�rio informe 3 inteiros distintos, 
	e o programa identifique o maior deles
*/

#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<string.h>

int main(){
	
	int a,b,c;
	char resp;
	setlocale(LC_ALL,"");
	do{
		printf("*** Programa Maior *** \n");
		
		printf("Informe o primeiro n�mero inteiro: ");
		scanf("%d",&a);
		printf("Informe o segundo n�mero inteiro: ");
		scanf("%d",&b);
		printf("Informe o terceiro n�mero inteiro: ");
		scanf("%d",&c);
		
		if(a > b && a > c){
			printf("Este � o maior n�mero: %d", a);
		}
		else if(b > c && b > a){
			printf("Este � o maior n�mero: %d", b);
		}
		else{
			printf("Este � o maior n�mero: %d", c);
		}
		
		printf("\n Deseja efetuar nova consulta? (s/n) ");
		scanf("%s", &resp);
		
		system("cls");
	}
	while(resp == 's');
	system("pause");			
}
