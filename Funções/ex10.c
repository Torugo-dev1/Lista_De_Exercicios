#include <stdio.h>
#include <math.h>
float calcularDelta(float a, float b, float c) {
    return (b * b) - (4 * a * c);
}
void calcularRaizes(float a, float b, float delta) {
    float x1, x2;

    if (delta < 0) {
        printf("Não existem raízes reais possíveis.\n");
    } else if (delta == 0) {
        x1 = -b / (2 * a);
        printf("Raiz única: x = %.2f\n", x1);
    } else {
        x1 = (-b + sqrt(delta)) / (2 * a);
        x2 = (-b - sqrt(delta)) / (2 * a);
        printf("Raízes reais: x1 = %.2f, x2 = %.2f\n", x1, x2);
    }
}

int main() {
    float a, b, c;
    printf("Digite os coeficientes a, b e c: ");
    scanf("%f %f %f", &a, &b, &c);

    if (a == 0) {
        printf("Não é uma equação de segundo grau.\n");
    } else {
        float d = calcularDelta(a, b, c);
        calcularRaizes(a, b, d);
    }

    return 0;
}
