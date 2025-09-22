#include <stdio.h>

int main() {

    int valor;
    printf("Insira o valor a ser pago: \n");
    scanf("%d", &valor);
 
    int quantidade = valor / 7;

    int troco = valor - (valor / 7);

    printf("Troco perdido: %d\n", troco);
    return 0;
}