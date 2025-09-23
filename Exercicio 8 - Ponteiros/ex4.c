#include <stdio.h>
int main(){
int tam;
int *p1;
int *p2;
printf("Digite o tamanho do vetor (impar por favor)\n");
scanf("%d", &tam);
int vet[tam];
for(int i=0;i<tam;i++){
    printf("vetor [%d]\n", i+1);
scanf("%d", &vet[i]);
}
p1 = &vet[0];
p2 = &vet[tam-1];
printf("p1 = %d\n", *p1);
printf("p2 = %d\n", *p2);

while (p1  < p2 ){
    p1++;
    p2--;
}
printf("p1 = %d\n", *p1);
printf("p2 = %d\n", *p2);
}
