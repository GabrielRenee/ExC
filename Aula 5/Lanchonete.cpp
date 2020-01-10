/*
	Uma lanchonete possui em seu cardapio,uma variedade de lanches, 
	que variam de pre�o de acordo com a tabela abaixo:
	
	Cod		Lanche		Pre�o
	001		P�o Chapa	2,50
	002		Bauru		3,50
	003		Dog			5,00
	004		X-Burguer	6,50
	005		X-tudo		10,00
	
	Al�m dos lanches o cliente pode solicitar um acompanhamento 
	seguindo a lista:
	
	Cod		Acompanhamento		Pre�o
	001		Fritas				5,00
	002		Polenta				7,00
	003		Camar�o				12,00
	
	e por fim a bebida:
	
	Cod		Bebidas			Pre�o
	001		�gua			2,00
	002		Pingado			3,00
	003		Refrigerante	5,00
	
	Desenvolva um programa que permita o cliente optar por 
	cada um dos itens acima e montar o seu combo,
	informando ao fim o valor total da compra.
*/

#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<string.h>
 
int main(){
	
	int lanc, acom, bebi;
	char nomeLanc[20], nomeAcom[20], nomeBebi[20], resp;
	do{
		float total = 0;
		setlocale(LC_ALL,"");
		printf("*** Programa Lanchonete ***\n\n");	
		printf("C�digo\t\tLanche\t\tPre�o\n");
		printf("1\t\tP�o Chapa\tR$ 2,50\n");
		printf("2\t\tBauru\t\tR$ 3,50\n");
		printf("3\t\tDog\t\tR$ 5,00\n");
		printf("4\t\tX-Burguer\tR$ 6,50\n");
		printf("5\t\tX-tudo\t\tR$ 10,00\n");
		printf("Digite o c�digo do lanche: ");
		scanf("%d", &lanc);
		system("cls");
		
		printf("*** Programa Lanchonete ***\n\n");	
		printf("C�digo\t\tAcompanhamento\t\tPre�o\n");
		printf("1\t\tFritas\t\t\tR$ 5,00\n");
		printf("2\t\tPolenta\t\t\tR$ 7,00\n");
		printf("3\t\tCamar�o\t\t\tR$ 12,00\n");
		printf("Digite o c�digo do acompanhamento: ");
		scanf("%d", &acom);
		system("cls");
		
		printf("*** Programa Lanchonete ***\n\n");	
		printf("C�digo\t\tBebida\t\tPre�o\n");
		printf("1\t\t�gua\t\tR$ 2,00\n");
		printf("2\t\tPingado\t\tR$ 3,00\n");
		printf("3\t\tRefrigerante\tR$ 5,00\n");
		printf("Digite o c�digo do acompanhamento: ");
		scanf("%d", &bebi);
		system("cls");
			
		if (lanc == 1){
			strcpy(nomeLanc, "P�O NA CHAPA");
			total += 2.50;
		}else if(lanc == 2){
			strcpy(nomeLanc, "BAURU");
			total += 3.50;
		}else if(lanc == 3){
			strcpy(nomeLanc, "DOG");
			total += 5.00;
		}else if(lanc == 4){
			strcpy(nomeLanc, "X-BURGUER");
			total += 6.50;
		}else if(lanc == 5){
			strcpy(nomeLanc, "X-TUDO");
			total += 10.0;
		}else{
			strcpy(nomeLanc, "Nenhum Lanche");
		}
		
		if (acom == 1){
			strcpy(nomeAcom, "FRITAS");
			total += 5.0;
		}else if(acom == 2){
			strcpy(nomeAcom, "POLENTA");
			total += 7.0;
		}else if(acom == 3){
			strcpy(nomeAcom, "CAMAR�O");
			total += 12.00;
		}else{
			strcpy(nomeAcom, "Nenhum acompanhamento");
		}
		
		if (bebi== 1){
			strcpy(nomeBebi, "�GUA");
			total += 2.0;
		}else if(bebi == 2){
			strcpy(nomeBebi, "PINGADO");
			total += 3.0;
		}else if(bebi == 3){
			strcpy(nomeBebi, "REFRIGERANTE");
			total += 5.0;
		}else{
			strcpy(nomeBebi, "Nenhuma Bebida");
		}
		printf("Lanche: %s\n", nomeLanc);
		printf("Acompanhamento: %s \n", nomeAcom);
		printf("Bebida: %s \n", nomeBebi);
		printf("Valor total: %.2f \n", total);
		printf("Deseja fazer um novo pedido? (s/n) ");
		scanf("%s", &resp);
		
		system("cls");
	}while(resp == 's');
}

