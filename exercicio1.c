#include <stdio.h>

int main(){   
    
   int x, y;
   printf("Dá os valor: \n"); 
   scanf("%d%d", &x, &y);

   int goku = x;
   x = y;
   y = goku;
   printf("%d %d\n", x, y);
   
   return 0;
}