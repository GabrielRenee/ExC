/*************************************************
*					Exercicio 1                  *
*												 *
* Desenvolva um programa onde o usuário informe a*
* base e a altura de um retângulo e o programa   *
* calcule e exiba a respectiva área.		     *
**************************************************/

#include <stdio.h> 
#include <stdlib.h>
#include <locale.h> 

int main(){
	
	float base, alt, area; //declaração das variáveis
	setlocale(LC_ALL,"");
	
	printf("** PROGRAMA ÁREA RETÂNGULO **\n");
	
	/*** Entrada de dados ***/
	printf("Digite a medida da base do retângulo em metros:\n");
	scanf ("%f", &base);	
	printf("Digite a medida da altura do retângulo em metros:\n");
	scanf ("%f", &alt);
	
	/*** Cálculo da área ***/
	area = base * alt;
	
	/*** Saída de dados ***/
	printf("\n \n A área do retângulo tem %.2f metros \n", area);
	
	system("pause"); // impede o programa de encerrar automaticamente
}
