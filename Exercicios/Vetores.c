#include <stdio.h>

int main(){
	
	char nome[50];
	printf("Qual e o seu nome?:");
	gets (nome);
	
	printf("ola %s\n", nome);
	
	
	
	int  i, contador=0;
	char letras[26];
	
	for( i = 97; i <= 122; i++){
	
		letras[contador] = i;
		contador = contador + 1;
	}
	
	for( i = 0; i < 26; i++){
		printf("%d == %c\n", letras[i], letras[i]);
	}
	
	return 0;
}

/*vetores de letras, ao colocar [26] na variavel, voce diz que AQUELA variavel irá armazenar 26 caracteres.
fazendo assim, um contador mostrando o alfabeto e seus respectivos numeros na tabela ASCII, substituindo os valores
da variavel LETRAS[I] por um numero inteiro e uma letra.
*/
