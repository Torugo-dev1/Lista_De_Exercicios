
#include <stdio.h>
void lerMatriz(int x, int matriz[x][x]){
    for(int i=0;i<x;i++){
        for(int j=0;j<x;j++){
            printf("Elemento [%i][%i]: ", i+1, j+1);
            scanf("%i", &matriz[i][j]);
        }
    }
}
void multiploDiagonalSecundaria(int x, int matriz[x][x], int cons){
    for(int i=0;i<x;i++){
        for(int j=0;j<x;j++){
            if (i + j == x - 1){
 matriz[i][j] = matriz[i][j] * cons;
            }
        }
    }
}
void matrizDigitada(int x, int mat[x][x]){
    printf("Matriz digitada\n");
        for(int i =0; i<x; i++){
            for(int j =0; j<x;j++){
                printf("%d\t", mat[i][j]);
            }
            printf("\n");
        }
    }
int main(){
int x, y;
printf("Escolha a dimensão da matriz:\n");
scanf("%i", &x);
int matriz[x][x];
lerMatriz(x, matriz); 
printf("Escolha uma constante:\n");
scanf("%i", &y);
multiploDiagonalSecundaria(x, matriz, y);
matrizDigitada(x, matriz);
return 0;
}