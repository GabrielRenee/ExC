/*
	Desenvolva um algoritmo onde o usuário informe um valor
	e seja exibido o respectivo elemento gerado a partir da
	sequencia de Fibonacci.
	Ex.
	Entrada: 10
	Sequencia: 0 1 1 2 3 5 8 13 21 **34**
	Saída: 34
*/
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	int entrada, i, seqant = 0, seq = 1, atual, resp;
	
	setlocale(LC_ALL,"");
	printf("Digite a posição da sequência que deseja: \n");
	scanf("%d",&entrada);
	if (entrada == 1){
		resp = seqant;
	}else if(entrada == 2){
		resp = seq;
	}else{
		for (i = 1; i <= entrada-2; i++){
			atual = seqant + seq;
			seqant = seq;
			seq = atual;
		}
		resp = atual;
	}
	printf("\n O %d° elemento da sequência é %d", entrada, resp);	
}
