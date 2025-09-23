#include <stdio.h>
#include <string.h>

int contabilizar(char str[]){
char *p;
int count = 0;
p = &str[0];
while(*p != '\n'){
    if(*p == ' '){
        count++;
    }
*p++;
}
return count;
}
int main(){
char str[50];
printf("digite uma frase\n");
fgets(str, sizeof(str), stdin);
printf("espaço aparece %i vezes", contabilizar(str));

    return 0;
}