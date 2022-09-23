/*Tipos de dados em C
	INT = Variaveis do tipo Inteiro
	FLOAT = Variaveis do tipo Reais
	DOUBLE = Quase a mesma coisa que o float, mas ele suporta mais valores
	
	
*/
#include <stdio.h>

int main(){
	float num1,num2, soma;
	
	
	printf("Digite o primeiro valor:");
	scanf("%f", &num1);
	
	printf("Digite o primeiro valor:");
	scanf("%f", &num2);
	
	soma = (num1 + num2) / 2;
	
	printf("A media dos valores e de : %.1f", soma);
	
	
	return 0;
	
	
}
