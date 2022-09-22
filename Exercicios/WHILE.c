//Estruturas de repetiçao//
//For, While, do...While//

/*
    WHILE
Utilizado quando vc precisa de um loop aonde nao se tenha um numero fixo
de elementos mas que tenha um criterio de parada e antes de iniciar o loop
a condiçao é checada
*/
#include <stdio.h>
int main(){
	int numero, i, soma= 0;
	
	printf("Informe um numero: ");
	scanf("%d", &numero);
	
	while(numero != 0){
		soma = soma + numero;
		
		printf("Informe um numero:");
		scanf("%d", &numero);
	}
	
	printf("A soma dos valores e de: %d", soma);
	
	
	return 0;
}
