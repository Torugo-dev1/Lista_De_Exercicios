#include <stdio.h>
int main(){
    int x, y, soma = 0;
    printf("Coloque os 2 numeros: \n");
    scanf("%i%i", &x, &y);
    int negativo = 0;
    if (x<0){
        -x;
        negativo = !negativo;
    }
    if (y<0){
        -y;
        negativo = !negativo;
    }
    for (int i = 0;i<y;i++){
        soma += x;
    }
       if (negativo)
            soma = -soma;
    printf("Resultado = %i\n", soma);
    return 0;
}