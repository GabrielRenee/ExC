/******************************************************************************
*	um supermercado necessita fazer um invent�rio de seus produtos em estoque,*
*	separando os em v�rias categorias, e contabilizando a quantidade de items *
*	em cada uma delas.														  *
*	As categorias de produtos seguem de acordo com a tabela abaixo:           *
*	                                                                          *
*	1-Limpeza                                                                 *
*	2-Utensilios dom�stico                                                    *
*	3-Bebidas                                                                 *
*	4-Doces                                                                   *
*	5-Frios                                                                   *
*	6-Salgadinhos                                                                  *
*	7-Gr�os                                                                   *
*	                                                                          *
*	Ao digitar a categoria do produto, este dever� ser contabilizado dentro	  *
*	da respectiva categoria, e uma vez que o usu�rio digitar a categoria 0    *
*	d� se o programa por encerrado.                                           *
*	Ao fim, dever� ser exibido um rel�t�rio com a quantidade de produtos em   *
*	cada categoria e o total de produtos em estoque.                          *
*******************************************************************************/

#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<string.h>

int main(){
	int cat, total=0, qLimp=0, qUted=0, qBeb=0, qDoc=0, qFrios=0, qSalg=0, qGra=0;
	setlocale(LC_ALL,"");
	printf("*** PROGRAMA ESTOQUE ***\n\n");
	do{
		printf("Informe a categoria do produto: \n");
		scanf("%d",&cat);
		switch(cat){
			case 0 :
				
			break;
			case 1:
				qLimp += 1;
				total += 1;
				printf("Limpeza: %d \n", qLimp);
			break;
			case 2:
				qUted += 1;
				total += 1;
				printf("Utensilios dom�stico: %d \n", qUted);
			break;
			case 3:
				qBeb += 1;
				total += 1;
				printf("Bebidas: %d \n", qBeb);
			break;
			case 4:
				qDoc += 1;
				total += 1;
				printf("Doces: %d \n", qDoc);
			break; 
			case 5:
				qFrios += 1;
				total += 1;
				printf("Frios: %d \n", qFrios);
			break; 
			case 6:
				qSalg += 1;
				total += 1;
				printf("Salgadinho: %d \n", qSalg);
			break; 
			case 7:
				qGra += 1;
				total += 1;
				printf("Gr�os: %d \n", qGra);
			break;
			default:
				printf("Categoria Inv�lida");;
			break;  
		}
		_sleep(500);
		system("cls");
	}while(cat != 0);
	printf("*** Relat�rio Final ***\n");
	printf("Limpeza: %d \n", qLimp);
	printf("Utensilios dom�stico: %d \n", qUted);
	printf("Bebidas: %d \n", qBeb);
	printf("Doces: %d \n", qDoc);
	printf("Frios: %d \n", qFrios);
	printf("Salgadinho: %d \n", qSalg);
	printf("Gr�os: %d \n", qGra);
	printf("Produtos no estoque: %d \n\n", total);
}
