#include <stdio.h>
#include <stdlib.h>
/*Implemente um programa que registre as vendas mensais em um vetor dinˆamico, permitindo
expandi-lo com realloc para incluir meses extras, e ao final exiba todas as vendas, o total
e a m ́edia mensal.*/

void vendas(){
float *pVenda;
float venda;
int meses = 0;
float total = 0;
while (1) {
        printf("Venda do mês %d: ", meses + 1);
        scanf("%f", &venda);

        if (venda < 0) {
            break;
        }
pVenda = (float *)realloc(pVenda, (meses + 1) * sizeof(float));
if(pVenda == NULL){
    printf("ERRo\n");
    exit(1);
}
pVenda[meses] = venda;
meses++;
}

for (int i =0; i<meses; i++){
    printf("Mês %i: %.2f\n", i+1, pVenda[i]);
    total += pVenda[i];
}
float media = total / meses;
printf("Total de venda: %.2f\n", total);
printf("Média: %.2f", media );
}

int main(){

vendas();
    return 0;
}