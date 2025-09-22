#include <stdio.h>

int fun(int n) {
    int soma = 0;
    for (int i = 0; i <= n; i++) {
        soma += i;
    }
    return soma;
}

int main() {
    int n;
    scanf("%i", &n);
    int som = fun(n);
    printf("%i\n", som);
    return 0;
}