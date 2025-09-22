#include <stdio.h>

void funVog(char vog) {
	if (vog == 'a' || vog == 'e' || vog == 'i' || vog == 'o' || vog == 'u' ||
        vog == 'A' || vog == 'E' || vog == 'I' || vog == 'O' || vog == 'U') {
	return 1;
	} else {
       return 0;
	}
}
int main() {
	char vog;
	printf("coloca um caractere aí fih\n");
	scanf("%c", &vog);
if (funVog(vog) == 1){
    printf("é uma vogal :P");
}
else {
    printf("num é ):");
}
	return 0;
}