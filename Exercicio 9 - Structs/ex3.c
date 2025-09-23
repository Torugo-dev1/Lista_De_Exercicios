#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define MAX 3

struct video {
    char titulo[100];
    int visu;
};

void ordenar_videos(struct video v[]) {
    struct video temp; 

    for (int i = 0; i < MAX - 1; i++) {
        for (int j = 0; j < MAX - i - 1; j++) {
            if (v[j].visu < v[j + 1].visu) {
                temp = v[j];
                v[j] = v[j + 1];
                v[j + 1] = temp;
            }
        }
    }
    printf("\nVideos ordenados por visualizacoes (do maior para o menor):\n");
    for (int i = 0; i < MAX; i++) {
        printf("%s - %d visualizacoes\n", v[i].titulo, v[i].visu);
    }
}

int encontra_maior(struct video v[]) {
    int maior = 0;
    for (int i = 1; i < MAX; i++) {
        if (v[i].visu > v[maior].visu) {
            maior = i;
        }
    }
    return maior;
}

int total_Visualizacoes(struct video v[]) {
    int total = 0;
    for (int i = 0; i < MAX; i++) {
        total += v[i].visu;
    }
    return total;
}

int main() {
    struct video v[MAX];

    for (int i = 0; i < MAX; i++) {
        printf("Titulo do Video [%d]: ", i + 1);
        fgets(v[i].titulo, sizeof(v[i].titulo), stdin);
        v[i].titulo[strcspn(v[i].titulo, "\n")] = '\0';
        
        printf("Numero de Visualizacoes: ");
        v[i].visu = rand() % 1000;
    }

    int maior = encontra_maior(v);
    int total = total_Visualizacoes(v);

    printf("\nO video com o maior numero de visualizacoes e: %s\n", v[maior].titulo);
    printf("O total de visualizacoes na plataforma e: %d\n", total);
    
    ordenar_videos(v);

    return 0;
}