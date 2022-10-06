#include <stdio.h>

void mensagem(){
	printf("Toggers......\n");
}

int soma(int num1, int num2){
	int res = num1 + num2;
	return res;
}

void proximo_char(char caractere){
	printf("%c", caractere);
}

int main(){
	printf("oooo..");
	mensagem();
	
	printf("retorno= %d\n", soma(4,10));
	
	char carac = 'a';
	proximo_char(carac+1);
	return 0;
}
