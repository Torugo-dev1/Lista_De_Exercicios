#include <stdio.h>
#include <math.h>
int main(){
double S = 0.0;
    for (int n = 1 ;n <= 100; n++) {
        double numerador = pow(2, n - 1);
        S += numerador / n;
    }
    printf("O valor de S é: %.4lf\n", S);
    return 0;
}