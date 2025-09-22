#include <stdio.h>
int multiplyer(int x, int y){
    int soma = 0;
    for (int i=y;i>0;i--){
soma += x;
    }
    return soma;
}
int main(){
    int x, y;
    scanf("%i%i", &x, &y);
int resultado = multiplyer(x,y);
printf("Resultado = %i", resultado);
    return 0;
}