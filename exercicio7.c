#include <stdio.h>

int main() {
float nota1, nota2, nota3, nota4;
    printf("Insira quatro notas \n");
    scanf("%f%f%f%f", &nota1, &nota2, &nota3, &nota4);
    float Media = ((nota1 + nota2 + nota3 + nota4) / 4);
    printf("Media: %.2f\n", Media);
    return 0;
}