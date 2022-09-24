#include <stdio.h>

int main(){
	
	int num1,num2;
	float res;
	
	printf("Digite o primeiro numero:\n");
	scanf("%f", &num1);
	
	printf("Digite o segundo numero:\n");
	scanf("%f",&num2);
	
	res = num1 + num2;
	printf("A soma dos valores e de : %f\n", res);
	
	res = num1 - num2;
	printf("A subtraçao dos valores e de %f\n",res);
	
	res = num1 * num2;
	printf("A multiplicaçao dos valores e de %f\n",res);
	
	res = num1 / num2;
	printf("A divisao dos valores e de %2.f\n",res);
	
	res = num1 * num1;
	printf("O primeiro valor elevado ao quadrado e %f\n", res);
	
	if(num1% 2 ==0){
		printf("O valor fornecido e PAR \n");
	}else{
		printf("O valor fornecido e IMPAR \n");
	}
	return 0;
}
