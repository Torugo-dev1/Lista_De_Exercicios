#include <stdio.h>

int main() {
    int codigo, consumoMensal;
    float precoLitro = 3.77, aumento, precoFinal;

    printf("Digite o código do posto: ");
    scanf("%d", &codigo);

    printf("Digite o consumo mensal de combustivel (em litros): ");
    scanf("%d", &consumoMensal);

    if (consumoMensal <= 50000) {
        aumento = 0.27; 
    } else {
        aumento = 0.18;
    }

    precoFinal = precoLitro * (1 + aumento);

    printf("Código do posto: %d\n", codigo);
    printf("Consumo mensal: %d litros\n", consumoMensal);
    printf("Preço final do litro de combustivel: R$%.2f\n", precoFinal);

    return 0;
}
