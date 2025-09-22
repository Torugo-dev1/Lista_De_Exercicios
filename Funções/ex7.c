#include <stdio.h>
int proximoEstado(int estadoAtual){
switch (estadoAtual){
    case 0: return 1;
    case 1: return 2;
    case 2: return 0;
    }
}
void exibirEstado(int estado){
    switch(estado){
        case 0: printf("Vermelho\n");
        case 1: printf("Verde\n");
        case 2: printf("Amarelo\n");
    }
}
int main(){
int estado = 0;
    exibirEstado(estado);
    estado = proximoEstado(estado);
    return 0;
}   