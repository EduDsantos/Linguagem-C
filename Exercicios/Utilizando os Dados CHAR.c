#include <stdio.h>

int main(){
	
	char opcao;
	
	printf("Informe uma opcao\n");
	printf("a - saldo da conta\n");
	printf("b - Extrato da conta\n");
	printf("c - Limite da conta\n");
	scanf("%c",&opcao);
	
	if(opcao == 'a'){
		printf("Seu saldo da conta e: 200,000,00");
	}else if(opcao == 'b'){
		printf("Seu Extrato e de 1000");
	}else if(opcao == 'c'){
	    printf("Seu cartao e ilimitado");
	}else{
		printf("Opçao desconhecida, por favor tente novamente");
	}
	
	
	return 0;
	
}
