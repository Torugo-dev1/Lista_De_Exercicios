#include <stdio.h>
int main(){
    int quant;
    float nota;
    int aprovados = 0.0, exame = 0.0, reprovados = 0.0;
    double somaNotas = 0.0;
  printf("Quantos alunos tem na turma? \n");
  scanf("%d", &quant);  
  for(int i=1;i<=quant;i++){
    printf("Digite a nota do aluno:%d\n", i);
    scanf("%f", &nota);
    somaNotas += nota;
    if (nota >= 6.0){
        aprovados++;
    }
    else if (nota >= 4.0){
        exame++;
    }
    else {
        reprovados ++;
    }
  }
  printf("Aprovados: %d\n", aprovados);
  printf("Média da turma: %.2f\n", somaNotas / quant);
  printf("percentual de alunos que ficaram de exame: %.2f\n", (double)exame / quant *100);
  printf("percentual de alunos que reprovaram na disciplina: %.2f\n", (double) reprovados / quant *100);
    return 0;
}