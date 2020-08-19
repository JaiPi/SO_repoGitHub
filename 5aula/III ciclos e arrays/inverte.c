#include <stdio.h>

int main() {
	int n =5;
	int v[n];
	printf("%d números: ",n);
	for (int i=0; i<n; i++)
		scanf("%d",&v[i]);
	for (int i =0; i<n; i++)
		printf("%d ",v[n-1-i]);
	printf("\n");
	
	return(0);
}
