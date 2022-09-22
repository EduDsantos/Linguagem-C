#include <stdio.h>

int main(){
		int num, cont=0, soma;
		
	while(cont != 10){		
	do{
		printf("Digite os valores: ");
		scanf("%d",&num);
		soma = soma + num;
		cont = cont + 1;
		
	}
	while(cont !=10);
	printf("\n A soma dos valores e de: %d", soma);
		
	return 0;
}
}
