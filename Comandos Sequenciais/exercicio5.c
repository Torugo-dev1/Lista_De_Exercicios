#include <stdio.h>

int main() {
float preco, desconto, percentual, total;

    printf("Qual o preco do produto? \n");
    scanf("%f", &preco);

    printf("Qual o valor de desconto em porcentagem? \n");
    scanf("%f", &percentual);

    desconto = (preco * percentual) / 100;

    total = preco - desconto;

    printf("Valor a ser pago: R$ %.2f\n", total);

    return 0;
}