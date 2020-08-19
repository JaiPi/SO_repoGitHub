#include <stdio.h>

int main() {
	int altura, largura;
	printf("Altura: ");
	scanf("%d",&altura);
	printf("Largura: ");
	scanf("%d",&largura);
	for (int i=1; i<=largura; i++)
		if (i<=largura)
			printf("X");
	printf("\n");
	for (int l=2; l<=altura-1; l++) {
		for (int c=1; c<=largura;c++) {
			if (c==1 || c==largura)
				printf("X");
			else
				printf(" ");
		}
		printf("\n");
	}
	for (int i=1; i<=largura; i++)
		if (i<=largura)
			printf("X");
	printf("\n");
	
	return(0);
}
