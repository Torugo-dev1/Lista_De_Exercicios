#include <stdio.h>
#include <string.h>

void contString(char str[]){
    int i=0;
    int cont = 1;
while(str[i] != '\0'){
    if(str[i] == ' '){
        cont++;
        printf("\n");
    }
    else{
        printf("%c", str[i]);
    }
    i++;
}
printf("A frase tem %i palavras", cont);
}
int main(){
char str[100];

printf("Digite a frase: \n");
fgets(str, sizeof(str), stdin);
contString(str);
    return 0;
}