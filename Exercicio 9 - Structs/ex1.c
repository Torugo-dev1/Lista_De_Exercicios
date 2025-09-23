#include <stdio.h>
#include <string.h>
struct Contatos{
    char nome[50];
    char telefone[30];
    char email[60];
};
void cadastrar(struct Contatos c[], int pos){
    printf("Nome: ");
    fgets(c[pos].nome, 50, stdin);
    printf("Telefone: ");
    fgets(c[pos].telefone, 30, stdin);
    printf("Email: ");
    fgets(c[pos].email, 60, stdin);
}
void buscar(struct Contatos c[], int pos){
    char nome[50];
    char *resultado;
    printf("Digite o nome a ser buscado: ");
    gets(nome);
    for(int i = 0; i<pos;i++){
        if(resultado!=NULL){
            printf("Nome: %s\n", c[i].nome);
            printf("Telefone: %s\n", c[i].telefone);
            printf("Email: %s\n", c[i].email);
        }
    }
}
int main(){

struct Contatos c[50];

int opcao;
int pos = 0;

do{
    printf(" 1 - Cadastrar\n");
    printf(" 2 - Buscar\n");
    printf(" 3 - Sair \n");
printf("Escolha uma opção\n");
scanf("%i", &opcao);
getchar();

switch (opcao)
{
case 1:
    cadastrar(c, pos);
    pos++;
    break;
case 2:
buscar(c, pos);
    break;
case 3:
break;
    }
}
while(opcao!=3);




    return 0;
}