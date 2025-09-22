#include <stdio.h>

int main(){
    double x, y;

    printf("Qual a distancia percorrida em KM? \n");
    scanf("%d", x );
    prinft("Qual o consumo médio do veículo? (em Km/l) \n");
    scanf("%d", y);
    double z = (x / y);
    prinft("Vai ser necessários %.2d litros \n", z);
return 0;
}