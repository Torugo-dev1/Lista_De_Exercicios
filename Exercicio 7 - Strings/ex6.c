#include <stdio.h>
#include <string.h>

void compararString(char str[], char str1[]){

if (strlen(str)!= strlen(str1)){
    printf("São frases diferentes \n");
return;
}
if(strcmp(str, str1) == 0){
    printf("As frases são iguais\n");
}
else {
    printf("As frases são diferentes\n");
    }
}


int main(){
char str[100], str1[100];

printf("Digite frase 1 \n");
fgets(str, sizeof(str), stdin);
printf("Digite fase 2 \n");
fgets(str1, sizeof(str1), stdin);

compararString(str, str1);
    return 0;
}