#include <stdio.h>

int main(void) {
	float quilos = 1.0E3;
	double gramas = 1.0e6;
	float n_toneladas;

	printf("Quantas toneladas comprou: ");
	scanf("%f", &n_toneladas);

	printf("Nº de Quilos = %f = %e\n", n_toneladas * quilos, n_toneladas * quilos);
	printf("Nº de Gramas = %f = %E\n", n_toneladas * gramas, n_toneladas * gramas);


}
