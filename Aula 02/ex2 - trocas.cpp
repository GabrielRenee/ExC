/*************************************************
*					Exercicio 2                  *
*												 *
* Desenvolva um programa onde o usuário informe  *
* dois valores inteiros, armazenando-os respecti *
* -vamente nas váriaveis A e B					 *
* Faça um algoritmo que troque o valor das varia-*
* veis.										     *
**************************************************/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	
	int a,b,aux;
	
	setlocale(LC_ALL,"");
	printf("** PROGRAMA TROCAS ** \n\n");
	
	printf("Insira o primeiro valor: \n");
	scanf("%d",&a);
	
	printf("Insira o segundo valor: \n");
	scanf("%d", &b);
	
	//efetuando trocas
	aux = a;
	a = b;
	b = aux;
	
	printf("\n\nValor final de A: %d", a);
	printf("\n\nValor final de B: %d \n\n", b);
	system("pause");
}
