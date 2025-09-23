#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*Uma fabrica registra a producao diaria de pȩcas em um vetor de inteiros alocado dinamicamente.
Porem, para uma projecao de crescimento, deseja-se calcular um novo vetor em que cada
valor represente o dobro da producao real de cada dia. Implemente um programa que leia
a quantidade de dias e aloque dinamicamente um vetor com os valores de producao de
cada dia. Em seguida, implemente uma funcao que receba esse vetor e crie um novo vetor
dinamico contendo essa projecao (valores dobrados).*/

void fabrica(int dias, int *producao_real)
{

    int *projecao;
    projecao = (int *)malloc(dias * sizeof(int));
    if (projecao == NULL)
    {
        printf("ERRO");
    }
    for (int i = 0; i < dias; i++)
    {
        projecao[i] = producao_real[i] * 2;
    }
    printf("Projeção\n");
    for (int i = 0; i < dias; i++)
    {
        printf("Dia %i: %i\n", i + 1, projecao[i]);
    }
    free(projecao);
}
int main()
{
    int dias;
    int *producao_diaria;

    printf("Quantidade de dias: ");
    scanf("%i", &dias);
    producao_diaria = (int *)malloc(dias * sizeof(int));
    if (producao_diaria == NULL)
    {
        printf("ErRo");
        return 1;
    }
    for (int i = 0; i < dias; i++)
    {
        printf("dia %i:", i + 1);
        scanf("%i", &producao_diaria[i]);
    }

    fabrica(dias, producao_diaria);

free(producao_diaria);
    return 0;
}