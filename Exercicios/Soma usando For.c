//Estruturas de repeti�ao//
//For, While, do...While//

//Para  o INT  'i' Inicianlizando em 0; enquanto i < 5; incrementa o i em 1
											
//Inicializa�ao > Criterio de parada > Forma de incremento.

#include <stdio.h>

int main(){
	//Variaveis 
	int numero,i,soma=0;
	
	for (i= 0; i < 5; i++){
		
		printf("Informe um valor :");
		scanf("%d", &numero);
		
		soma = soma + numero;
	}
	printf("A soma dos valores e de %d", soma);
	
	return 0;
}
