#include <stdio.h>

int main(void) {
	short int idade;
	int montante;
	long int n_conta;

	printf("Qual a Idade: ");
	scanf("%hd", &idade);

	printf("Qual o montante a depositar: ");
	scanf("%d", &montante);

	printf("Qual o nº de conta: ");
	scanf("%ld", &n_conta);

	printf("Uma pessoa %hd de anos depositou $%d na conta %ld\n", idade, montante, n_conta);

}
