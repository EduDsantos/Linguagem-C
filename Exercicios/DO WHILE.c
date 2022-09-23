//DO WHILE //

/*
Utilizado quando voce precisa de um loop aonde nao se tenha um numero fixo
de elementos mas que tenha um criterio de parada e a condiçao de parada é
checada após a primeira execuçao
*/
#include <stdio.h>

int main (){
	
	int numero, i, soma= 0;
	
	do{	
		printf("Informe um numero: ");
		scanf("%d", &numero);
		soma = soma + numero;
	}
	while(numero != 0);
		
	printf("A soma dos valores e de: %d", soma);
	
	return 0;	
}
