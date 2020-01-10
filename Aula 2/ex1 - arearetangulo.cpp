/*************************************************
*					Exercicio 1                  *
*												 *
* Desenvolva um programa onde o usu�rio informe a*
* base e a altura de um ret�ngulo e o programa   *
* calcule e exiba a respectiva �rea.		     *
**************************************************/

#include <stdio.h> 
#include <stdlib.h>
#include <locale.h> 

int main(){
	
	float base, alt, area; //declara��o das vari�veis
	setlocale(LC_ALL,"");
	
	printf("** PROGRAMA �REA RET�NGULO **\n");
	
	/*** Entrada de dados ***/
	printf("Digite a medida da base do ret�ngulo em metros:\n");
	scanf ("%f", &base);	
	printf("Digite a medida da altura do ret�ngulo em metros:\n");
	scanf ("%f", &alt);
	
	/*** C�lculo da �rea ***/
	area = base * alt;
	
	/*** Sa�da de dados ***/
	printf("\n \n A �rea do ret�ngulo tem %.2f metros \n", area);
	
	system("pause"); // impede o programa de encerrar automaticamente
}
