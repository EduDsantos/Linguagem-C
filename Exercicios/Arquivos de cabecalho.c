#include <stdio.h>
#include "ajuda.h"

int main(){
	int n1,n2,ret_s, ret_m;
	
	mensagem();
	
	printf("Informe o primeiro numero: ");
	scanf("%d",&n1);
	
	printf("Informe outro valor : ");
	scanf("%d",&n2);
	
	ret_s = soma(n1, n2);
	printf("A soma dos valores %d com %d e %d \n", n1,n2,ret_s);
	
	ret_m= multiplicacao(n1,n2);
	printf("A multiplicacao de %d com %d e %d \n",n1,n2,ret_m);
	
	return 0;
}
