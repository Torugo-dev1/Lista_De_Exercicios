#include <stdio.h>
#include <stdlib.h>

void matriz_quadrada(int matriz[4][4], int x){
int cont = 0;
int *p = &matriz[0][0];
for(int i = 0; i<4; i++){
    for(int j =0; j<4; j++){
        matriz[i][j] = rand() % 9;
    }
}
for(int i = 0; i<4; i++){
    for(int j = 0; j<4; j++){
        printf(" %i", matriz[i][j]);
    if(x == *p){
        cont++;
    }
*p++;
    }
printf("\n");
}
printf("numero %i, aparece %i vezes\n",x, cont);
}
int main(){

    int matriz[4][4];
    int x;
printf("digite um valor:");
scanf("%i", &x);
matriz_quadrada(matriz, x);


    return 0;
}