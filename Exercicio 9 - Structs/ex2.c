#include <stdio.h>
#include <string.h>

struct Roupas{

    char tipo[20];
    char tamanho;
    float preco;

};
void cadastrar(struct Roupas r[], int pos){
    printf("Tipo: ");
    fgets(r[pos].tipo, 20, stdin);
    printf("Tamanho: ");
    scanf("%c", &r[pos].tamanho);
    getchar();
    printf("Preço: ");
    scanf("%f", &r[pos].preco);
}
void buscar(struct Roupas r[], int pos){
    char tamanho;
    printf("Digite o tamanho a ser buscado: ");
    scanf("%c", &tamanho);
    getchar();
    for(int i = 0; i<pos;i++){
        if(tamanho == r[i].tamanho){
           printf("Tipo: %s\n", r[i].tipo);
            printf("Preço: %.2f\n",r[i].preco);
            printf("===============\n");
        }
    }
}
int main(){
struct Roupas r[50];

int pos = 0;
int opcao;

do{

    printf("1 - Cadastrar\n");
    printf("2 - Buscar por tamanho\n");
    printf("3 - Sair\n");
printf("Digite a opção\n");
scanf("%i", &opcao);
getchar();
switch(opcao)
{
case 1:
cadastrar(r, pos);
pos++;
break;
case 2:
buscar(r, pos);
break;
case 3:
break;

}
}while(opcao!=3);


    return 0;
}