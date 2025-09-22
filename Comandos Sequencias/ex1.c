#include <stdio.h>
int main(){
float n1, n2, n3;
printf("Digite 3 numeros positivos \n");
scanf("%f%f%f", &n1,&n2,&n3);
float media = (n1 + n2 + n3) / 3;
printf("Média: %.2f\n", media);
if (n1 > media) {
    printf("Número 1 é maior que a média \n");
}
if (n2 > media) {
    printf("Número 2 é maior que a média \n");
}
if (n3 > media) {
    printf ("Número 3 é maior que a média\n");
}
return 0;
}