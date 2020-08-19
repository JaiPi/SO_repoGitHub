#include <stdio.h>
int main() {
int a, b;
	printf("Diga dois numeros:\n");
	scanf("%d", &a);
	scanf("%d", &b);
	if (a > b)
		printf("%d < %d\n",b,a);
	else if (b > a)
		printf("%d < %d\n",a,b);
	else if (a == b)
		printf("%d = %d\n",b,a);
}
