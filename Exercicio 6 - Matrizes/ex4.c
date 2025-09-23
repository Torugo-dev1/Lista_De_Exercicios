#include <stdio.h>
void lerMatriz(int x, int y, int matriz[x][y]){
    for(int i=0;i<x;i++){
        for(int j=0;j<y;j++){
                printf("Elemento [%i][%i]: ", i+1, j+1);
            scanf("%i", &matriz[i][j]);
        }
    }
}
void matrizDigitada(int x, int y, int mat[x][y]){
    printf("Matriz digitada\n");
        for(int i =0; i<x; i++){
            for(int j =0; j<y;j++){
                printf("%d\t", mat[i][j]);
            }
            printf("\n");
        }
    }
void mostrarSoma(int x, int y, int matriz[x][y]){
    int soma = 0;
    for(int i=0;i<x;i++){
        for(int j=0;j<y;j++){
            if (j>i){
                soma += matriz[i][j];
            }
        }
    }
    printf("Soma = %i", soma);
}
int main(){
int x;
printf("Escolha o valor da matriz\n");
scanf("%i", &x);
int matriz[x][x];
lerMatriz(x, x, matriz);
matrizDigitada(x, x, matriz);
mostrarSoma(x, x, matriz);
    return 0;
}