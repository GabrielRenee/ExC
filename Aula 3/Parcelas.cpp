/***********************************************************************************
*	Uma loja esta oferecendo a oportunidade de seus clientes parcelarem as compras,*
*	mediante um acr�scimo de juros de 15% sobre o valor do produto. Para isso, faz-*
*	se necees�rio um programa que possibilite o c�lculo do valor de cada parcela,  *
*	exibindo o valor final a ser pago com o reajuste aplicado.					   *
*	Fa�a o programa.															   *
************************************************************************************/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	
	int  numParc;
	float vProd, vParc;
	setlocale(LC_ALL,"");
	printf("** PROGRAMA LOJA **\n\n");
	
	printf("Valor do produto: \n");
	scanf("%f",&vProd);
	
	printf("N�mero de parcelas: \n");
	scanf("%d", &numParc);
	
	vProd = vProd * 1.15;
	vParc = vProd/numParc;
	
	printf("Valor Parcela: R$ %.2f \n\n", vParc);
	printf("Novo Valor do Produto: R$ %.2f \n\n", vProd);
	
	system("pause");
}
