#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void ids(int n) {
	int *ids;

	ids =(int *)malloc(n * sizeof(int));

	if(ids == NULL) {
		printf("Erro memoria\n");

	}
	printf("Digite os IDS\n");
	for (int i = 0; i<n; i++) {
		printf("Id da mensagem %d:", i);
		scanf("%i", &ids[i]);


	}
	for (int i = n - 1; i >= 0; i--) {
		printf("%d\n", ids[i]);
	}
	free(ids);

}

int main() {

	int n;

	printf("Digite um numero de mensagens\n");
	scanf("%i", &n);
	ids(n);

	return 0;
}