#include <stdio.h>

int main(){
	
	char nome[5][10];
	int i, contador=0;
	
	
	for(i = 0; i < 5; i++){
	printf("Qual e o seu nome ? ");
	gets (nome[i]);
	}
	for(i=0; i< 5; i++){
		printf("%s\n",nome[i]);
	
}

	return 0;
}
