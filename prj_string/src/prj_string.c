
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
	int main (void) {
		char palavra[100];
		int i,j, tamanho;
		int palindromo = 1;

		printf("Digite uma palavra; ");
		scanf("%s", palavra);

		tamanho = strlen(palavra);

		for(i = 0, j = tamanho - 1;i < j; i++, j--) {
			printf("i : %c\n",palavra[i]);
			printf("j: %c\n",palavra[j]);

			if (palavra[i] !=palavra[j]){
				palindromo = 0;
				break;
			}
		}

		if(palindromo){
			printf("\nA palavra é um palindromo,\n");
		}else{
			printf("\nA palavra não é um palindromo,\n");
		}
		return 0;
}
