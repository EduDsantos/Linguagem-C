#include <stdio.h>


// Protótipo de funçao
int soma(int num1, int num2);
void mensagem();

int main(){
	int n1,n2,ret;
	
	printf("Digite um valor: ");
	scanf("%d",&n1);
	
	printf("Digite o segundo valor: ");
	scanf("%d", &n2);
	
	ret = soma(n1,n2);
	
	printf("A soma dos valores %d com %d e %d\n",n1,n2,ret);
	
	mensagem();
	
	return 0;
}
int soma(int num1, int num2){
	return num1 + num2;
}
	void mensagem(){
		printf("oooooooooooooooo");
	}
	
