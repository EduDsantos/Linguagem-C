#include <stdio.h>

int main(){
	//Variaveis declaradas
	int idade;
	
	//Entrada
	printf("Qual e a sua idade? ");
	scanf("%d", &idade);
	
	//Processamento
	if (idade < 18){
		printf("\nvoce e menor de idade");
	}else if(idade > 18 && idade < 60){
		printf("\nvoce e adulto");	
	}else{
		printf("\nvoce e idoso");
	}
	
	//Saida
	printf("\nsua idade e %d", idade);
	
	return 0;	
}
