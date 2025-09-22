#include <stdio.h>
int main(){
    char cat;
    float per;
printf("Escolha a categoria: a/A = 15km/l | b/B = 12km/l | c/C = 10 km/l \n");
scanf("%c", &cat);
printf("Qual o percurso em km?");
scanf("%f", &per);
if (cat == 'a' || cat == 'A'){
    float con = per / 15;
    printf("Consumo: %.2f" " Litros", con);
}
else if (cat == 'b' || cat == 'b'){
    float con = per / 12;
    printf("Consumo: %.2f" " Litros", con);
}
else {
    float con = per / 13;
printf("Consumo: %.2f" " Litros", con);
    
}
return 0;
}