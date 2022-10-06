#include <stdio.h>

int main(){
	int i,j,nota1[5][5],nota2[5][5],soma = 0,media;
	char nome[5][5];
	
	for(i = 0; i < 3; i++);{
		for(j = 0; j < 3; j++){	
	printf("Digite o nome:\n");
	gets(nome[i]);

	printf("Digite um numero:\n");
	gets(nota1[i]);
	
	printf("Digite outro numero:\n");
	gets(nota2[i]);
}
	soma = nota1[i][j] + nota2[i][j];
	media = (soma / 2);
	
	if(media <= 5);{
		printf("o aluno %s foi aprovado com %d de media",nome[i][j],media[i][j]);	
	}
	if(media <=10);{ 
		printf("o aluno %s foi reprovado com %d de media",nome[i][j],media[i][j]);
	}

}


	return 0;

}
