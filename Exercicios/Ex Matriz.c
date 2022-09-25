#include <stdio.h>

int main(){
	
	int i,j,quant = 0,media = 0,soma = 0,nota[2][2];
	char nome[2][2];
	
	for(i = 0; i < 2; i++){
		for(j=0;j < 2; j++){
		printf("Nome do aluno:");
		gets (&nome);
		printf("Nota1:");
		gets (&nota);
		printf("Nota2:");
		gets (&nota);
		
		soma = soma + nota[i][j];
		media = soma / 2;
		}
	}
		
	if(media <= 5){
		quant = quant + 1;
	}	
		printf("A quantidade de alunos reprovados foi %d",quant);
		
	return 0;
}
