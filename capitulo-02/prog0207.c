#include <stdio.h>

int main(void) {
	float raio, perimetro;
	double PI = 3.1415927, area;

	printf("Introduaa o Raio da Circunferência: ");
	scanf("%f", &raio);
	area = PI * raio * raio;
	perimetro = 2 * PI * raio;

	printf("Área = %f\nPerímetro = %f\n", area, perimetro);

}
