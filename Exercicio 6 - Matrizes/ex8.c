#include<stdio.h>
void lerMatriz(int matriz[7][4]){
for (int i=0;i<7;i++){
    for(int j=0;j<4;j++){
        printf("Elemento[%i][%i]", i+1, j+1);
        scanf("%i", &matriz[i][j]);
    }
}
}
void mostrarMatriz(int matriz[7][4], int media[4]){
for (int i=0;i<7;i++){
    for(int j=0;j<4;j++){
        printf("%i\t", matriz[i][j]);
    }
    printf("\n");
}
printf("\nMedia Por coluna: \n");
for(int i=0; i<4;i++){
        printf("%i\t", media[i]);
}
printf("\n");
}
void calcularMediaFilmes(int mat[7][4], int media[4]){
        for (int j=0;j<4;j++){
                int soma = 0;
            for (int i=0;i<7;i++){
                soma += mat[i][j];    
            }
            media[j] = (soma/7);
        }
    }
void melhorFilme(int media[4]){
int maior = 0;
for(int i=0;i<4;i++){
    if (media[i]>maior){
        maior=media[i];
    }
}
printf("Maior media foi: %i", maior);
}
int main(){
int media[4];
int matriz[7][4];
lerMatriz(matriz);
calcularMediaFilmes(matriz, media);
mostrarMatriz(matriz, media);
melhorFilme(media);

    return 0;
}