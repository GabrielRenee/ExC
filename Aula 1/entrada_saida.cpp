/**************************** 
*	COMENTARIO EM BLOCO 	*
*****************************/
// COMENTARIO EM LINHA

#include <stdio.h> //funçoes de entrada e saida
#include <stdlib.h> //comandos do sistema
#include <locale.h> 

int main(){//inicio programa

	char nome[15]; //variavel do tipo texto
	setlocale(LC_ALL,"");//reconhece caracteres especiais
	printf("Universidade de Guarulhos - Ciência da computação - 2º semestre\n");//exibe mensagem ao usuário
	printf("Digite seu nome: "); 
	scanf("%s", &nome);
	system("cls");//limpa o prompt
	printf("Bem-vindo %s !!! \n", nome);		
	system("pause"); //pressionar qualquer tecla para continuar a execução
}//fim programa
