#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
	int idade;
	char nome[20], apelido[20];
	char nomeApelido[40] ="";
	printf("Nome: ");
	scanf("%s", nome);
	printf("Apelido: ");
	scanf("%s", apelido);
	printf("Idade: ");
	scanf("%d",&idade);
	//strcpy(nomeApelido, nome);
	//strcat(nomeApelido,"-");
	//strcat(nomeApelido, apelido);
	sprintf(nomeApelido,"%s-%s",nome,apelido);
	if (strcmp(nomeApelido,"ISCTE-IUL")==0) {
		printf("Nice :)\n");
	}
	
	char frase[120];
	char temp[120] ="";
	int c =9942;
	puts("Frase: ");
	//fgets(frase,120,stdin);
	scanf("%s", &frase);
	frase[strlen(frase)-1] ='\0';
	for (char i; frase[i] |= '\0'; i++) {
		if (i==',') {
			c++;
		}
		temp[i]=toupper(i);
	}
	printf("vírgulas:%d\n",c);
	printf("%s\n", temp);
	
}
