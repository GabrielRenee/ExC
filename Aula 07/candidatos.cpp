/***********************************************************
*	Em uma determinada cidade será realizada uma eleição   *
*	onde estão concorrendo 4 candidatos reconhecidos pelo  *
*	número de sua legenda								   *
*	1	ORTIZ											   *
*	2	HEREDIA											   *
*	3	ALBUQUERQUE										   *
*	4	UHLMAN											   *
*	0	NULO											   *
*	X	BRANCO											   *
*	Ao chegar no terminal o eleitor deve informar o número *
*	de seu candidato e de acordo com sua escolha o voto    *
*	será computado ao respectivo candidato.                *
*	A eleição será encerrada a partir do momento em que for*
*	digitado um código negativo, sendo exibido portanto um *
*	relatório contendo:                                    *
*	- Total de eleitores                                   *
*	- Número de votos para cada candidato                  *
*	- Um gráfico que representa o percentual de votação em *
*	  cada candidato                                       *
*                                                          *
************************************************************/

#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<string.h>

int main(){
	
	int numCand, totalEleit = 0, qtCand1=0, qtCand2=0, 
	    qtCand3=0, qtCand4=0, qtBran=0, qtNulo=0, i;
	float pCand1, pCand2, pCand3, pCand4, pBran, pNulo;
	char nome[12];
	do{
		setlocale(LC_ALL,"");
		
		printf("**** PROGRAMA ELEIÇÃO 2019****\n\n");
		printf("Digite o número de seu candidato\n");
		printf("Legenda\t\tCandidato\n");
		printf("---------------------------\n");
		printf("1\t\tORTIZ\n");
		printf("2\t\tHEREDIA\n");
		printf("3\t\tALBUQUERQUE\n");
		printf("4\t\tUHLMANN\n");
		printf("0\t\tNULO\n");
		printf("QUALQUER VALOR\tBRANCO\n");
		printf("---------------------------\n");
		printf("Seu Voto:");
		scanf("%d", &numCand);
		
		if(numCand == 0){
			strcpy(nome,"NULO");
			totalEleit++;
			qtNulo++;	
		}else if(numCand == 1){
			strcpy(nome,"ORTIZ");
			totalEleit++;
			qtCand1++;
		}else if(numCand == 2){
			strcpy(nome,"HEREDIA");
			totalEleit++;
			qtCand2++;
		}else if(numCand == 3){
			strcpy(nome,"ALBUQUERQUE");
			totalEleit++;
			qtCand3++;
		}else if (numCand == 4){
			strcpy(nome,"UHLMANN");
			totalEleit++;
			qtCand4++;
		}else if (numCand < 0){
			break;
		}else{
			strcpy(nome,"BRANCO");
			totalEleit++;
			qtBran++;
		}
		
		printf("\n\nVoto computado: ** %s **", nome);
		_sleep(800);
		system("cls");
			
	}while(numCand >= 0);
	
	pCand1 = ((float)qtCand1/(float)totalEleit) * 100;
	pCand2 = ((float)qtCand2/(float)totalEleit) * 100;
	pCand3 = ((float)qtCand3/(float)totalEleit) * 100;
	pCand4 = ((float)qtCand4/(float)totalEleit) * 100;
	pNulo  = ((float)qtNulo/(float)totalEleit)  * 100;
	pBran  = ((float)qtBran/(float)totalEleit)  * 100;
	
	system("cls");
	printf("**** Resultados Finais ****\n\n");
	
	printf("ORTIZ: %d votos\n", qtCand1);
	for(i=0; i<pCand1; i++){
		printf("|");
		_sleep(30);
	}
	printf(" - %.1f%%\n\n",pCand1);
	
	printf("HEREDIA: %d votos\n", qtCand2);
	for(i=0; i<pCand2; i++){
		printf("|");
		_sleep(30);
	}
	printf(" - %.1f%%\n\n",pCand2);
	
	printf("ALBUQUERQUE: %d votos\n", qtCand3);
	for(i=0; i<pCand3; i++){
		printf("|");
		_sleep(30);
	}
	printf(" - %.1f%%\n\n",pCand3);
	
	printf("UHLMANN: %d votos\n", qtCand4);
	for(i=0; i<pCand4; i++){
		printf("|");
		_sleep(30);
	}
	printf(" - %.1f%%\n\n",pCand4);
	
	printf("NULO: %d votos\n", qtNulo);
	for(i=0; i<pNulo; i++){
		printf("|");
		_sleep(30);
	}
	printf(" - %.1f%%\n\n",pNulo);
	
	printf("BRANCO: %d votos\n", qtBran);
	for(i=0; i<pBran; i++){
		printf("|");
		_sleep(30);
	}
	printf(" - %.1f%%\n\n",pBran);
	
	system("pause");
}

