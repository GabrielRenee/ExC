/****************************************************************** 
*	Uma agencia de viagens possui 3 onibus em sua frota           *
*	que fazem 3 destinos diferentes, variando o valor             *
*	das passagens:                                                *
*	A - SP -> RJ - R$ 75,00                                       *
*	B - SP -> BH - R$ 90,00                                       *
*	C - SP -> AC - R$ 250,00                                      *
*	Cada ônibus é equipado com 42 poltronas, sendo que            *
*	as 10 primeiras são classificadas como setor LUXO,            *
*	e as demais setor econômico. Poltronas do setor               *
*	Luxo custam 25% acima do preço convencional.		          *
*	                                                              *
*	O usuário necessita de uma aplicação que permita fazer        *
*	o gerenciamento da venda das passagens identificando          *
*	o destino de cada passageiro, registrando valores em          *
*	dinheiro em caixa e validando qualquer possibilida que        *
*	evite o conflito na venda das passagens. Dessa forma          *
*	deverá ser desenvolvido um programa que permita o usuário     *
*	trabalhar em suas funções:                                    *
*	                                                              *   
*	- Efetivar a venda de passagens                               * 
*	- Mapeamento dos ônibus                                       *
*	- Relátório de vendas e caixa                                 *
*	                                                              *
*	Desenvolva um program que melhor soluciona o problema descrito*
*	acima.														  *
*******************************************************************/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include <conio.h>

int onibA[42],onibB[42],onibC[42];
int i;
float total,valor, caixa=0;
void esvaziarOnibus(){
	
	
	for(i=0;i<42;i++){
		onibA[i]= 0;
		onibB[i]= 0;
		onibC[i]= 0;
	}
}

void gerarRelatorio(){
	int ocupA=0,ocupB=0,ocupC=0, dispA=0,dispB=0,dispC=0;
	
	for(i=0;i<42;i++){
		if(onibA[i]==0){
			dispA++;
		}else{
			ocupA++;
		}
		if(onibB[i]==0){
			dispB++;
		}else{
			ocupB++;
		}
		if(onibC[i]==0){
			dispC++;
		}else{
			ocupC++;
		}
	}
	system("cls");
	printf("## RELATÓRIO DE VENDAS ##\n\n");
	printf("Destino: Rio de Janeiro: \n");
	printf("Total de passageiros: %d\n",ocupA);
	printf("Poltronas livres: %d\n\n",dispA);
	
	printf("Destino: Belo Horizonte: \n");
	printf("Total de passageiros: %d\n",ocupB);
	printf("Poltronas livres: %d\n\n",dispB);
	
	printf("Destino: Acre: \n");
	printf("Total de passageiros: %d\n",ocupC);
	printf("Poltronas livres: %d\n\n",dispC);
		
	printf("----- Total em caixa -----\n");
	printf("Valor: R$ %.2f", caixa);
		
	getch();
	system("cls");
}

void mostrarOnibus(int tmpOnib[]){
	char status[10];
	for(i=0;i<42;i++){
		if (tmpOnib[i] == 0){
			strcpy(status,"Vazio");
		}else{
			strcpy(status,"Ocupado");
		}
		if(i%2==0){
			printf("Poltrona %d - %s\t", i+1, status);
		}else{
			printf("Poltrona %d - %s\n", i+1, status);
		}
	}
	getch();
	system("cls");	
}

int montarMenu(){
	int menu;
	printf("Entre com a opção desejada:\n\n");
	printf("1 - Realizar Venda\n");
	printf("2 - Vizualizar Frotas\n");
	printf("3 - Relatório de Vendas\n");
	printf("4 - Sair \n\n");
	printf("Opção: ");
	scanf("%d",&menu);
	return menu;
}

int efetuarVenda(int tmpOnib[], int tmpPolt){
	if (tmpOnib[tmpPolt-1] == 1){
		return -1;
	}else if((tmpPolt-1) > 41){
		return -2;
	}
	else{
		if((tmpPolt-1) < 10){
			total = valor * 1.25;
		}else{
			total = valor;
		}
			caixa += total;
			printf("Total à pagar: R$ %.2f\n",total);
			tmpOnib[tmpPolt-1] = 1;
		}
		return 1;
	}

void exibirDestinos(){
	system("cls");
	printf("---------------------------------DESTINOS-----------------------------------\n");
	printf("Rio de Janeiro(A)\t\tBelo horizonte(B)\t\tAcre(C)\n");
	printf("R$ 75,00\t\t\tR$ 90,00\t\t\tR$ 250,00\n");
	printf("----------------------------------------------------------------------------");
	printf("\nPoltronas luxo(1 a 10) - 25%% a mais\n");
}
int main(){
	int opcao, polt;
	char codOnibus;
	int statusVenda;
	setlocale(LC_ALL,"");
	esvaziarOnibus();
	do{
	
	printf("**PROGRAMA AGÊNCIA DE VIAGENS**\n\n");
	opcao = montarMenu();
	switch(opcao){
		case 1:
			exibirDestinos();
			printf("Entre com o destino:");
			scanf("%s",&codOnibus);
			printf("Entre com o numero da poltrona:");
			scanf("%d",&polt);
			if(codOnibus == 'a'){
				valor = 75;
				statusVenda = efetuarVenda(onibA,polt);
			}else if(codOnibus == 'b'){
				valor = 90;
				statusVenda = efetuarVenda(onibB,polt);
			}else if(codOnibus == 'c'){
				valor = 250;
				statusVenda = efetuarVenda(onibC,polt);
			}else{
				printf("Destino  Inválido\n");
				break;
			}
			if (statusVenda == 1){
				printf("Venda efetuada");
				getch();
			}else if(statusVenda == -1){
				printf("Poltrona Ocupada!");
				getch();
			}else if(statusVenda == -2){
				printf("Poltrona Inexistente");
				getch();
			}
		case 2:
			system("cls");
			printf("Entre com o código do ônibus: ");
			scanf("%s", &codOnibus);
			printf("\n\n");
			if(codOnibus == 'a'){
				printf("## ÔNIBUS A - DESTINO RIO DE JANEIRO ##\n");
				mostrarOnibus(onibA);
			}else if(codOnibus == 'b'){
				printf("## ÔNIBUS B - DESTINO BELO HORIZONTE ##\n");
				mostrarOnibus(onibB);
			}else if(codOnibus == 'c'){
				printf("## ÔNIBUS C - DESTINO ACRE ##\n");
				mostrarOnibus(onibC);
			}else{
				printf("Código Inválido\n");
			}
		break;
		case 3:
			gerarRelatorio();
		break;
		default:
			printf("## Opção Inválida! ##");
			_sleep(300);
	}
	system("cls");
	}while(opcao != 4);
	
}

