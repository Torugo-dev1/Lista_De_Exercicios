#include <stdio.h>
float calcularIMC(float kg, float h) {
	float imc=kg/(h*h);
	return imc;
}
void tabela (float imc) {
	if (imc < 18.5) {
	printf("\nAbaixo do peso");
	}
	else if (18.5 <= imc && imc <= 24.9) {
	printf("\nPeso normal");
	}
	else if (25<= imc && imc <=29.9) {
	printf("\nSobrepeso");
	}
	else {
	printf("\nObeso");
	}
}
int main() {
	float h, kg;
	printf("Coloque a altura:");
	scanf("%f", &h);
	printf("\nColoque o peso em kg:");
	scanf("%f", &kg);
	float imc = calcularIMC(kg,h);
	printf("IMC:%f", imc);
	tabela(imc);

	return 0;
}