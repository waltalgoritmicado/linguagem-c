#include <stdio.h>

int main(void) {
	int num;
	printf("Introduz um Inteiro: ");
	scanf("%d", &num);
	printf("Foi introduzido %d cujo caractere = '%c'\n", num, num);
	printf("O caratere seguinte = '%c' tem o ASCII nº %d\n", (char) (num+1), num+1);
	return (0);
}
