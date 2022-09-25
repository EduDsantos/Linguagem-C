#include <stdio.h>

int main(){
	
	int i,j,numero[2][2];
	numero[0][0] = 1;
	numero[0][1] = 2;
	numero[1][0] = 3;
	numero[1][1] = 4;
	
	
	for (i = 0; i < 2; i++){
		for(j = 0; j < 2; j++){
			printf("%d\n", numero[i][j]);
		}
	}

	return 0;
}
