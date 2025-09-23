#include <stdio.h>
void lerMatriz(int lin, int col, int matriz[lin][col]){
for (int i=0;i<lin;i++){
    for(int j=0;j<col;j++){
        printf("Elemento[%i][%i]", i+1, j+1);
        scanf("%d", &matriz[i][j]);
    }
}
}
void imprimirMatriz(int lin, int col, int matriz[lin][col]) {
    for (int i = 0; i < lin; i++) {
        for (int j = 0; j < col; j++) {
            printf("%d\t", matriz[i][j]);
        }
        printf("\n");
    }
}
void transportaMatriz(int lin, int col, int matriz[lin][col], int transporta[col][lin]){
for(int i=0;i<lin;i++){
    for(int j=0;j<col;j++){
transporta[j][i] = matriz[i][j];
        }
    }
}


int main(){
    int lin, col;
printf("Dimensões da Matriz:");
scanf("%i%i", &lin, &col);
int matriz[lin][col];
int transporta[col][lin];
lerMatriz(lin, col, matriz);
printf("Matriz Original\n");
imprimirMatriz(lin, col, matriz);
printf("\n");
printf("Transporta\n");
transportaMatriz(lin, col, matriz, transporta);
imprimirMatriz(col, lin, transporta);
return 0;
}