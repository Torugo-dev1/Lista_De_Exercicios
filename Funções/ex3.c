#include <stdio.h>
int somaMultiplos(int limite, int divisor){
    float soma = 0
    for(int i=0;i<=limite;i += divisor){
soma += i;
    }
    return soma;
}


int main(){
  int lim, div;
printf("Digite o limite e o divisor\n");
scanf("%i%i", &lim, &div);
int resul = somaMultiplos(lim, div);
    printf("soma= %i", resul);
    return 0;
}