#include <stdio.h>

int main(){

    float codigo, valor, horas;
    printf("Codigo do funcionario: \n");
    scanf("%f", &codigo);
    printf("horas trabalhadas: \n");
    scanf("%f", &horas);
    printf("valor que recebe por hora: \n");
    scanf("%f", &valor);
    float salario = horas * valor;
    printf("Codigo: %.0f Salario: %.2f\n", codigo, salario);

    return 0;
}