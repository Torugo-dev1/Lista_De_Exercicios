#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/*Implemente um programa que registre os gastos de cada dia da semana em um vetor
dinamico e, ao final, exiba o gasto total e o dia de maior gasto.*/

void registro(int *gastos, int dias)
{
    int gasto_total = 0;
    int maior_gasto = 0;
    char *dia_maior;
    char *dias_da_semana[] = {"Segunda", "Terça", "Quarta", "Quinta", "Sexta", "Sabado", "Domingo"};

    gastos = (int *)malloc(dias * sizeof(int));
    if (gastos == NULL || dias <= 0)
    {
        printf("ERRO");
        return;
    }
    printf("Gastos de cada dia:\n");
    for (int i = 0; i < dias; i++)
    {
        printf("Gasto de %s: ", dias_da_semana[i]);
        gastos[i] = rand() % 100;
        printf("%i\n", gastos[i]);
        gasto_total += gastos[i];
        if (gastos[i] > maior_gasto)
        {
            maior_gasto = gastos[i];
            dia_maior = dias_da_semana[i];
        }
    }
    printf("Gasto Total: %i\n", gasto_total);
    printf("Dia de maior gasto: %s\n", dia_maior);
    printf("Valor:%i", maior_gasto);

    free(gastos);
}

int main()
{

    int dias = 7;
    int *gasto;

    registro(gasto, dias);
    return 0;
}