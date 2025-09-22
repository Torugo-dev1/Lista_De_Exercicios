#include <stdio.h>
#include <string.h>

int main() {
    char resposta1[20], resposta2[20], resposta3[20];
    int pontos = 0;
printf("1. Voce prefere jogar 'Valorant' ou 'Minecraft'?\n");
printf("Digite Valorant ou Minecraft: ");
    scanf("%s", resposta1);
printf("\n2. Voce prefere jogar sozinho ou com amigos/colegas?\n");
printf("Digite Sozinho ou Amigos: ");
    scanf("%s", resposta2);
printf("\n3. Voce prefere jogar a noite ou durante o dia?\n");
printf("Digite Noite ou Dia: ");
    scanf("%s", resposta3);
    if (strcmp(resposta1, "Valorant") == 0) pontos += 2;
    if (strcmp(resposta1, "Minecraft") == 0) pontos += 1;

    if (strcmp(resposta2, "Amigos") == 0) pontos += 2;
    if (strcmp(resposta2, "Sozinho") == 0) pontos += 1;

    if (strcmp(resposta3, "Noite") == 0) pontos += 2;
    if (strcmp(resposta3, "Dia") == 0) pontos += 1;
    
    if (pontos >= 5) {
        printf("Gamer Competitivo!\n");
    } else if (pontos >= 3) {
        printf("Gamer Versatil!\n");
    } else {
        printf("Gamer Casual!\n");
    }

    return 0;
}