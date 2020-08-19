#include <stdio.h>
int main() {
int a, b;
	printf("Diga dois numeros:\n");
	scanf("%d", &a);
	scanf("%d", &b);
	if (a > b)
		printf("%d é maior\n", a);
	else if (b > a)
		printf("%d é maior\n", b);
	else if (a == b)
		printf("os números são iguais\n");
}
