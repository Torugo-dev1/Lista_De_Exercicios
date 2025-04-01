#include <stdio.h>

int main(){
    float arquivo, velocidade;
 printf("Qual o tamanho de arquivo? \n");
scanf("%f", &arquivo);
printf("Velocidade (em MBps)? \n");
scanf("%f", &velocidade);
float tempo = (arquivo / velocidade) * 8;
printf("Tempo: \n %.2f", tempo);
return 0;
}