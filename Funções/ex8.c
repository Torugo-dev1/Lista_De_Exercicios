#include <stdio.h>
void divisorExis(int x){
    for(int i=1;i<=x;i++){
        if (x % i == 0){
            printf("%i é divisor de %i\n", i, x);
        }
    }
}
int main(){
int num;
    printf("Insira um número inteiro: \n");
    scanf("%i", &num);
divisorExis(num);
    return 0;
}