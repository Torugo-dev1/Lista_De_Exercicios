#include <stdio.h>

int main() {
    float S = 0;
    int numerador = 1;

    for (int denominador = 1; denominador <= 50; denominador++) {
        S += (float)numerador / denominador;
        numerador += 2;
    }

    printf("Valor de S = %.2f\n", S);
    return 0;
}
