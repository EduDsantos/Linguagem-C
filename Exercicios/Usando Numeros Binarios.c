#include <stdio.h>

int main(){
	
	int valor = 2;
	printf("O valor e %d\n ",valor);
	
	
	//deslocamento de bits � esquerda
	valor = valor << 2;
	printf("O valor e %d\n ", valor);
	
	valor = 2;
	//deslocamento de bits � direita
	valor = valor >> 1;
	
	// usando a nega�ao ~(not)
	valor = 2;
	valor = ~valor;
	printf("o valor vale %d\n", valor);
	
}
