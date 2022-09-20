#include <stdio.h>

int main(){
	int idade;
	
	//Printf é um comando de saida do console
	printf("Qual e a sua idade?\n ");
	
	//scanf é um comando de entrada para ler o printf
	//esse %d significa que a sua variavel é do tipo Inteira
	scanf("%d", &idade);
	printf("sua idade e %d",idade);
	return 0;
}
