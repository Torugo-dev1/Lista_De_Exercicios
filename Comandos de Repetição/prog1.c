#include <stdio.h>
int main(){
printf("Insira um número inteiro: \n");
int num, quant = 0;
scanf("%d", &num);
for(int i=1;num>=i;i++){
    if (num % i == 0){
        printf("%d", i);
        quant++;
    }
}
printf("Quantidade de divisores: %d", quant);
    return 0;
}