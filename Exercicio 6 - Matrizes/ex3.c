#include <stdio.h>
void lerMatriz(int mat[5][3]){
    for(int i=0;i<5;i++){
            for(int j=0;j<3;j++){
                printf("Elemento [%i][%i]: ", i, j);
                scanf("%i", &mat[i][j]);
            }
        }
    }
void multiplosMatriz(int mat[5][3]){
    for (int i=0;i<5;i++){
        for(int j=0;j<3;j++){
            if(mat[i][j] % 3 == 0){
                printf("Número %i é multiplo de 3\n", mat[i][j]);
            }
        }
    }
}
void matrizDigitada(int mat[5][3]){
    printf("Matriz digitada\n");
        for(int i =0; i<5; i++){
            for(int j =0; j<3;j++){
                printf("%d\t", mat[i][j]);
            }
            printf("\n");
        }
    }
int main(){
int matriz[5][3];

lerMatriz(matriz);
matrizDigitada(matriz);
multiplosMatriz(matriz);
    return 0;
}