#include <stdio.h>
#include <string.h>

int lerString(char palavra[], char c){
    int i, cont = 0;
for(i = 0; palavra[i] !='\0';i++){
    if(palavra[i] == c){
        cont++;
    }
}
return cont++;
}
int main(){
    char palavra[100], letra;
printf("Digite uma string\n");
fgets(palavra, sizeof(palavra), stdin);

printf("Digite um caractere\n");
scanf("%c", &letra);

int total = lerString(palavra, letra);
printf("O caractere '%c' aparece %i vezes", letra, total);
    return 0;
}