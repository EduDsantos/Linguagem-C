#include <stdio.h>

int main(){
	float num, num2;
	
	printf("Digite um valor:");
	scanf("%f", &num);
	
	printf("Digite outro valor:");
	scanf("%f", &num2);
	
	if(num > num2){
		printf("o numero %2.f e maior que o numero %2.f", num,num2);	
	}
	if(num<num2){
		printf("o numero %2.f e menor que o numero %2.f", num,num2);
	}
	
	return 0;
	
	
}
