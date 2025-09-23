#include <stdio.h>
#include <string.h>

    void subsNum(char str[]){
        for (int i = 0; str[i] != '\0'; i++){
            if (str[i] >= '0' && str[i] <= '9'){
                str[i] = '*';
            }
        }
        printf("Números substituidos: %s\n", str);
    }
int main(){
char str [200];
printf("Senha: \n");
fgets(str, sizeof(str), stdin);
subsNum(str);
    return 0;
}