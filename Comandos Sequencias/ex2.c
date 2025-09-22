#include <stdio.h>
int main(){
    int num;
printf("Ponha um número inteiro: \n");
scanf("%d", &num);
if (num > -1) {
    printf("Número é positivo \n");
}
else if (num == 0){
    printf("Número é zero \n");
    }
else {
    printf("Número é negativo \n");
}
if (num % 2 == 1){
    printf("Número é impar \n");
}
else {
    printf("Número é par \n");
}


return 0;
}