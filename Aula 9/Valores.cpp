/*
	Desenvolva um programa onde o usuario digite
	10 valores, e exiba os valores digitados na 
	ordem inversa
*/

#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<string.h>

int main(){
	setlocale(LC_ALL,"");
	int valores[10], i;
	printf("Digite dez valores \n");
	for(i=0;i<10;i++){
		printf("%d° valor: ", i+1);
		scanf("%d",&valores[i]);
	}
	for(i=9;i>=0;i--){
		printf("%d - ", valores[i]);
	}
	
}
