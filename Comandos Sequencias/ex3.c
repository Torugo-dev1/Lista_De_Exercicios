#include <stdio.h>
int main(){
    char c;
printf("Digite um caractere: \n");
scanf("%c", &c);
if (c == 'a' || c == 'u' || c == 'o' || c == 'i' || c == 'e' ||
    c == 'U' || c == 'O' || c == 'I' || c == 'E' || c == 'A'  )
    {
        printf ("É uma vogal\n");
    }
    else {
        printf("Não é uma vogal\n");
    }
return 0;
}