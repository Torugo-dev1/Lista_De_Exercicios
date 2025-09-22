#include <stdio.h>
int main(){
    float a, b, c, delta, raiz1, raiz2;

    printf("Digite o coeficiente a: ");
    scanf("%f", &a);
    printf("Digite o coeficiente b: ");
    scanf("%f", &b);
    printf("Digite o coeficiente c: ");
    scanf("%f", &c);

    if (a == 0) {
        printf("Nao eh uma equacao de segundo grau.\n");
    } else {
        delta = b * b - 4 * a * c;

        if (delta < 0) {
            printf("Nao existem raizes reais.\n");
        } else if (delta == 0) {
            raiz1 = -b / (2 * a);
            printf("A equacao possui uma raiz real: %.2f\n", raiz1);
        } else {
            raiz1 = (-b + sqrt(delta)) / (2 * a);
            raiz2 = (-b - sqrt(delta)) / (2 * a);
            printf("As raizes da equacao sao: %.2f e %.2f\n", raiz1, raiz2);
        }
    }

return 0;
}