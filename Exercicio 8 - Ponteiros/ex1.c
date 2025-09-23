#include <stdio.h>
#include <string.h>

int main(){

    char str[]="nao gosto de programa em C";
char *p = str;
p += 4;
printf("%s", str);
printf("%s", p);
    return 0;
}