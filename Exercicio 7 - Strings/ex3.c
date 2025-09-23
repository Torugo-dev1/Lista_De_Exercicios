#include <stdio.h>
#include <string.h>

void criptografar(char str[]){
char alfabeto[] = "zyxwvutsrqponmlkjitgfedcba";
char alfabetoM[] = "ZYXWVUTSRQPONMLKJIHGFEDCBA";
for (int i=0; str[i] != '\0'; i++){
    if (str[i] >= 'a' && str[i] <= 'z'){
        int j = str[i] - 'a';
        str[i] = alfabeto[j];
    }
    else if(str[i] >= 'A' && str[i] <= 'Z'){
        int j = str[i] - 'a';
        str[i] = alfabetoM[j];
    }
}
printf("Mensagem criptografada\n");
printf("%s\n", str);
}

int main(){
char str[100];

    printf("Frase:\n");
    fgets(str, sizeof(str), stdin);
criptografar(str);
    return 0;
}