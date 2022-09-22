// Vendo se o numero digitado é par ou impar
#include <stdio.h>

int main(){
	int n;
	
	printf("Digite um valor:");
	scanf("%d", &n);
	
	if(n % 2 == 0){
		printf(" O numero que voce digitou e PAR");
	}else{
		printf(" O numero que voce digitou e IMPAR");
	}
	
	return 0;
}
