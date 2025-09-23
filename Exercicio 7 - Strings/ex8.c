#include <stdio.h>
#include <string.h>

void contarLetras(char str[]){
int i=0;
int alfa = 0, alfaM = 0, num =0;
while(str[i]!='\0'){
    if(str[i] >= 'a' && str[i] <= 'z'){
        alfa++;
    }
else if(str[i] >= 'A' && str[i] <= 'Z'){
    alfaM++;
}
else if(str[i] >= '0' && str[i] <= '9'){
    num++;
}
i++;
}
printf("A frase tem %i letras minusculas\n", alfa);
printf("A frase tem %i letras maiusculas\n", alfaM);
printf("A frase tem %i numeros\n", num);
}
int main(){
    char str[100];
printf("Digite uma frase: \n");
fgets(str, sizeof(str), stdin);
contarLetras(str);
    return 0;
}