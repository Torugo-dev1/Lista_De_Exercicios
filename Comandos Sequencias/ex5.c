#include <stdio.h>
int main(){
    float x, y;
    int p;
    printf("==Digite 2 números== \n");
    scanf("%f%f", &x, &y);
    printf("Escolha a operação que deseja realizar:\n");
    printf("1 - Calcular a média entre x e y\n");
    printf("2 - Calcular a diferença do maior pelo menor\n");
    printf("3 - Carlcular o produto de x e y\n");
    printf("4 - Calcular a divisão de x por y\n");
    scanf("%d", &p);
    if (p==1){
        printf("Média: %.2f", (x + y) / 2);
    }
    else if (p==2){
        if (x>y){
            printf("Diferença %.2f", x-y);
        }
        else {
            printf("Diferença %.2f", y-x);
        }
    }
    else if (p==3){
        printf("Produto: %.2f", x*y);
    }
    else if (p==4){
        printf("Divisão: %.2f", x/y);
    }
    else {
        printf("OPÇÃO INVALIDA");
    }
return 0;
}
