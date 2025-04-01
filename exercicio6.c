#include <stdio.h>

int main() {
float custo, venda;
    printf("Qual o custo do produto? \n");
    scanf("%f", &custo);
    printf("Qual o valor a ser vendido? \n");
    scanf("%f", &venda);
   float lucro = (venda - custo);
    printf("Lucro: %.2f \n", lucro);

    return 0;
}