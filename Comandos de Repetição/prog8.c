#include <stdio.h>

int main() {
    int numero, i;
    int primo = 1;

    printf("Digite um número: ");
    scanf("%d", &numero);

    if (numero <= 1) {
        primo = 0;
    }

    for (i = 2; i < numero; i++) {
        if (numero % i == 0) {
            primo = 0;
            break;
        }
    }

    if (primo)
        printf("%d é primo.\n", numero);
    else
        printf("%d não é primo.\n", numero);

    return 0;
}
