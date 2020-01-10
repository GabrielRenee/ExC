#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<string.h>
#include<conio.h>

int main(){
	setlocale(LC_ALL,"");
	int aux,n,i,p,m,j;
	printf("*** PROGRAMA TABUADA 2 ***\n\n");
	printf("Informe o valor inicial: ");
	scanf("%d", &m);
	printf("Informe o valor final: ");
	scanf("%d", &n);
	if(m>n){
		aux = m;
		m = n;
		n = aux;
	}
	for(i = m; i <= n; i++){
		for(j=0; j<11; j++){
			p = i * j ;
			printf("\t %d X %d = %d \n", j,i,p);	
		}
		getch();
		system("cls");
		printf("*** PROGRAMA TABUADA 2 ***\n\n");
	}
}
