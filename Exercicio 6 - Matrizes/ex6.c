#include <stdio.h>
void lerMatriz(int x, int matriz[x][x]){
    for(int i=0;i<x;i++){
        for(int j=0;j<x;j++){
            printf("matriz[%i][%i]", i+1, j+1);
            scanf("%d", &matriz[i][j]);
        }
    }
}
void calcularMatriz(int x, int matriz[x][x]){
    int soma = 0;
    for(int i=0; i<x;i++){
        for(int j=0;j<x;j++){
            if (i!=j && i+j != x - 1) {
            soma += matriz[i][j];
            }
        }
    }
    printf("Soma:%i", soma);
}
void mostraMatriz(int x, int matriz[x][x]){
    for(int i=0; i<x;i++){
        for(int j=0;j<x;j++){
            printf("%i\t", matriz[i][j] );
        }
        printf("\n");
    }
}
int main(){
int x;
printf("Escolha o valor da matriz quadratica: \n");
scanf("%d", &x);
int matriz[x][x];
lerMatriz(x, matriz);
mostraMatriz(x, matriz);
calcularMatriz(x, matriz);
    return 0;
}