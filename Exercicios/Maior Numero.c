#include <stdio.h>

int main(){
	int num,num2,maior;
	&maior<- 0;
	printf("Digite um numero:");
	scanf("%d", &num);
	
	printf("Digite outro numero:");
	scanf("%d", &num2);
	
	if(num > num2){
		printf("O maior valor e o %d", num);
		
	}else{
		printf("O maior valor e o %d",num2);
	}
	
	return 0;
	
}
