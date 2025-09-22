#include <stdio.h>

int main() {
    int numCompetidores, i, j;
    
    printf("Digite o número de competidores: ");
    scanf("%d", &numCompetidores);
    
    for (i = 1; i <= numCompetidores; i++) {
        float notas[5], maiorNota = 0, menorNota = 10, somaNotas = 0, mediaFinal;
        
        printf("\nCompetidor %d:\n", i);
        
        for (j = 0; j < 5; j++) {
            printf("Digite a nota do juiz %d: ", j + 1);
            scanf("%f", &notas[j]);
            
            if (notas[j] > maiorNota) maiorNota = notas[j];
            if (notas[j] < menorNota) menorNota = notas[j];
            
            somaNotas += notas[j];
        }
        
        somaNotas -= (maiorNota + menorNota);
        mediaFinal = somaNotas / 3;
        
        printf("Nota final do competidor %d: %.2f\n", i, mediaFinal);
    }
    
    return 0;
}
