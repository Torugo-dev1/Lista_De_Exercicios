#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void lerNum(){
int num;
int *vet;
int i = 0;

printf("Digite um número, caso for negativo, o programa encerra\n");
while (1){
    scanf("%i", &num);
     if(num<0){
        break;
    }
    vet = (int *)realloc(vet, (i+1)* sizeof(int));
    if (vet == NULL) {
            printf("Erro na alocação de memória!\n");
            exit(1);
        }
    vet[i] = num;
    i++;
}
printf("\n Vetor lido: ");
for(int j = 0; j < i; j++){
    printf("%i ", vet[j]);
}
free(vet);
}

int main(){

lerNum();
    return 0;
}