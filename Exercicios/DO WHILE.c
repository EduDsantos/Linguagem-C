//DO WHILE //

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
