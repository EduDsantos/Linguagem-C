//Maior numero
#include <stdio.h>

int main(){
	int num1,num2,maior; 
	
	printf("Digite um numero:");
	scanf("%d", &num1);
	
	printf("Digite outro numero:");
	scanf("%d", &num2);
	
	if(num1 > num2){
	printf(" o numero %d e MAIOR que o numero %d \n", num1, num2);
	}

	if(num1 < num2)
	{printf(" o numero %d e MENOR que o numero %d \n", num1, num2);
	}

	if(num1 == num2)
	{printf(" o numero %d e o numero %d sao IGUAIS \n", num1, num2);
	}
	
	return 0;
	
}
