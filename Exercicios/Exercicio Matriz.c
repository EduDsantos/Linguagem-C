#include <stdio.h>

int main (){
	
	int  i, soma = 0, num1[3][3], num2[3][3], media = 0;
	 
	char nome [3][3];
	
	for (i = 0; i < 3; i++){	
	printf("Nome Dos Alunos\n");
	gets (&nome[i]);
	printf("Primeira nota:\n");
	gets (&num1[i]);
	printf("Segunda nota:\n");
	gets (&num2[i]);
	
	soma = num1[i] + num2[i];
		
	if(num1[i] / num2[i] <= 5){
		
	}
}
	

	
	return 0;
}
