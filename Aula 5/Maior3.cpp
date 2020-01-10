/*
	Desenvolva um programa onde o usuário informe 3 inteiros distintos, 
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
		
		printf("Informe o primeiro número inteiro: ");
		scanf("%d",&a);
		printf("Informe o segundo número inteiro: ");
		scanf("%d",&b);
		printf("Informe o terceiro número inteiro: ");
		scanf("%d",&c);
		
		if(a > b && a > c){
			printf("Este é o maior número: %d", a);
		}
		else if(b > c && b > a){
			printf("Este é o maior número: %d", b);
		}
		else{
			printf("Este é o maior número: %d", c);
		}
		
		printf("\n Deseja efetuar nova consulta? (s/n) ");
		scanf("%s", &resp);
		
		system("cls");
	}
	while(resp == 's');
	system("pause");			
}
