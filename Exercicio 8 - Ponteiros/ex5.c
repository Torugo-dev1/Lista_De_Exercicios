#include <stdio.h>
#include <string.h>
#define MAX 255

int main(){

char str[MAX], caractere;
int count = 0;
char *p;

    printf("Entre com uma string: ");
    fgets(str, MAX, stdin);
    printf("Entre com o caractere: ");
    scanf("%c", &caractere);
p = str;
    for (int i=0; *p != '\0'; i++){
        if (*p == caractere){
            printf("%d\n", i);
            count++;
        }
        p++;
    }
    if (count == 0){
        printf("-1\n");
    }
    return 0;
}