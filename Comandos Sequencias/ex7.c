#include <stdio.h>
int main(){
    float a, b, c, temp;
    printf("Digite 3 números \n");
    scanf("%f%f%f", &a, &b, &c);
    if (a>b){
        temp = a;
        a = b;
        b = temp;
    }
    if (a>c){
        temp = a;
        a = c;
        c = temp;
    }
    if (b>c){
        temp = b;
        b = c; 
        c = temp;
    }
    printf("Ordem crescente: %.0f, %.0f, %.0f\n", a, b, c);
return 0;
}