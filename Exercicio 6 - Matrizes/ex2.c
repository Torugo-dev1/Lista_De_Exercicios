#include <stdio.h>
void lerMatriz(int mat[3][5]){
    for(int i=0;i<3;i++){
            for(int j=0;j<5;j++){
                printf("Elemento [%i][%i]: ", i, j);
                scanf("%i", &mat[i][j]);
            }
        }
    }
    void calcularSomaColunas(int mat[3][5], int somas[5]){
        for(int j=0;j<5;j++){
            somas[j] = 0;
            for (int i=0;i<3;i++){
                somas[j] += mat[i][j];    
            }
        }
    }
void matrizDigitada(int mat[3][5], int somas[5]){
printf("Matriz digitada\n");
    for(int i =0; i<3; i++){
        for(int j =0; j<5;j++){
            printf("%d\t", mat[i][j]);
        }
        printf("\n");
    }
    printf("\n");
    for(int i=0; i<5;i++){
        printf("%i\t", somas[i]);
}
printf("\n");
}
int main(){
    int matriz[3][5];
    int somasVetor[5];
    lerMatriz(matriz);
    calcularSomaColunas(matriz, somasVetor);
    matrizDigitada(matriz, somasVetor);
    return 0;
}