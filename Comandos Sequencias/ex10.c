#include <stdio.h>

int main() {
    char tipo;
    float litros;
    
    printf("Digite E para Etanol ou G para Gasolina: ");
    scanf(" %c", &tipo);
    
    printf("Digite quantos litros quer abastecer: ");
    scanf("%f", &litros);
    
    if (tipo == 'E' || tipo == 'e') {
        float preco = 4.50 * litros;
        
        if (litros <= 20) {
            preco = preco * 0.96;
            printf("Desconto de 4%%\n");
        } else {
            preco = preco * 0.93;
            printf("Desconto de 7%%\n");
        }
        
        printf("Preco a pagar: R$ %.2f\n", preco);
    }
    else if (tipo == 'G' || tipo == 'g') {
        float preco = 5.80 * litros;
        
        if (litros <= 20) {
            preco = preco * 0.95;
            printf("Desconto de 5%%\n");
        } else {
            preco = preco * 0.91;
            printf("Desconto de 9%%\n");
        }
        
        printf("Preco a pagar: R$ %.2f\n", preco);
    }
    else {
        printf("Erro: Tipo de combustivel invalido!\n");
    }
    
    return 0;
}