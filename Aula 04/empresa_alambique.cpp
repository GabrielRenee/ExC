/************************************************************************************************************
Um alambique possui em seu quadro de funcionários, pessoas especializadas em vendas que recebem seus sálarios
calculados por meio da comissão sobre o valor dos produtos vendidos além do sálario fixo. Tal comissão, varia
também de acordo com o nível do funcionário, como mostra a tabela abaixo:

NIVEL	/	NOME FUNCIONARIO	/ SALARIO FIXO	/ COMISSÃO
----------------------------------------------------------
1				 ZECA				800,00			5%
2 				PEDRO			   1000,00			8%
3				NINO			   1200,00		   10%
4				BIBA			   1500,00		   15%
-----------------------------------------------------------

A Empresa necessita de um programa que auxilie no cálculo do 
sálario final de seus funcionários de acordo com suas vendas.
************************************************************************************************************/

#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<string.h>

int main(){
	
	//declaração das variaveis
	int nivel; //informação base
	float sfixo, sfinal, com, vendas; //salario fixo, salario final, comissao e vendas.
	char nome[6], resp; //colocar sempre um numero a mais do total de letras dos nomes, aqui no caso 6.
	
	setlocale(LC_ALL,"");
	
	do{
	
	
		printf("***** PROGRAMA EMPRESA *****\n\n\n");
	
		//desenvolvimento
	
		printf("Nível do funcionário: ");
		scanf("%d", &nivel);
	
		if(nivel == 1){
			sfixo = 800;
			com = 0.05;
			strcpy(nome, "Zeca");
		
		}else if(nivel == 2){
			sfixo = 1000;
			com = 0.08;
			strcpy(nome, "Pedro");
		
		}else if(nivel == 3) {
			sfixo = 1200;
			com = 0.1;
			strcpy(nome, "Nino");
		
		}else if(nivel == 4) {
			sfixo = 1500;
			com = 0.15;
			strcpy(nome, "Biba");
		
		}else{
			printf("Dados inválidos\n\n");
			//return 0; // return 0 ou exit(0) -> sai do programa.	
		}
	
	
	
	
	
		if(nivel >= 1 && nivel <= 4){
		
	
		system("cls");
		printf("***** PROGRAMA EMPRESA *****\n\n\n");
		printf("Identificação: %d\n\n", nivel);
		printf("Funcionário: %s\n", nome);
		printf("Salário-Fixo: R$%.2f\n", sfixo);
		printf("Comissão: %.0f%%\n\n", com*100);
	
		printf("Total de Vendas: R$ ");
		scanf("%f", &vendas);
	
		sfinal = sfixo + (vendas * com);
	
		printf("\n\n");
		printf("Salário Final: R$ %.2f", sfinal);
	
	
		printf("\n\n");
		
		}
		
		
		
		
		printf("Deseja efetuar nova consulta? (s/n) ");
		scanf("%s", &resp);
		
		system("cls");
		
	}while(resp == 's');
	
	system("pause");
	
} //fechando int main

