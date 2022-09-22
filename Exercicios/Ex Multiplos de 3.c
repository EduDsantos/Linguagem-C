#include <stdio.h>

int main(){
	int cont=0,soma=0;
	
	while(cont  != 20 ){
		cont = cont + 1;
		printf("Contando %d \n", cont);
		
		if (cont * 3 == 0 ){
			soma = soma + 1;
		}
	}
	printf("a quantidade de Multiplos de 3 sao %d", soma);
	
	return 0;
}
