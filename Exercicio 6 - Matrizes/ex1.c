#include <stdio.h>
void lerMatriz(int mat[5][3], int tamanho1, int tamanho2){
    for(int i=0;i<tamanho1;i++){
            for(int j=0;j<tamanho2;j++){
                printf("Elemento [%i][%i]: ", i, j);
                scanf("%i", &mat[i][j]);
            }
        }
    }
void calcularSomaLinhas(int mat[5][3], int somas[5]){
    for(int i=0;i<5;i++){
        somas[i] = 0;
        for (int j=0;j<3;j++){
            somas[i] += mat[i][j];    
        }
    }
}
void exibirResultado(int mat[5][3], int somas[5]){
    printf("Matriz digitada\n");
    for(int i =0; i<5; i++){
        for(int j =0; j<3;j++){
            printf("%d\t", mat[i][j]);
        }
        printf("\n");
    }
    printf("\n Soma de Cada linha \n");
    for (int i=0;i<5;i++){
        printf("Soma da Linha %i: %i\n", i+1, somas[i]);
    }
}

int main(){
int matriz[5][3];
int somasVetor[5];
lerMatriz(matriz,5,3);
calcularSomaLinhas(matriz, somasVetor);
exibirResultado(matriz, somasVetor);

    return 0;
}