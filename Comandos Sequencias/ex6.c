#include <stdio.h>
int main(){
    float n1, n2, n3;
printf("Digite 3 números \n");
scanf("%f%f%f", &n1, &n2, &n3);
if (n1 < n2 && n1 < n3){
    printf("O número 1 é o menor");
}
else if (n2 <n1 && n2 < n3){
    printf("O número 2 é o menor");
}
else {
    printf("O número 3 é o menor");
}
return 0;
}