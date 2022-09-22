#include <stdio.h>

int main(){
	int cont=0,soma=0;
	
	while(cont  != 10 ){
		cont = cont + 1;
		printf("Contando %d \n", cont);
		
		if (cont % 2 == 0){
			soma = soma + 1;
		}
	}
	printf("a quantidade de numeros pares sao %d", soma);
	
	

	
	return 0;
	
	
}
