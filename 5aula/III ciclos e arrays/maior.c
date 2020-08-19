#include <stdio.h>

int main() {
	int n =5;
	int c;
	int v[n];
	printf("%d números: ",n);
	for (int i=0; i<n; i++)
		scanf("%d",&v[i]);
	c =v[0];
	for (int i =0; i<n; i++) {
		printf("%d ",v[n-1-i]);
		if (c<v[i])
			c =v[i];
	}
	printf("\n");
	printf("Maior: %d\n", c);
	
	return(0);
}
