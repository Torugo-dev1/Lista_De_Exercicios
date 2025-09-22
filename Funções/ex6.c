#include <stdio.h>
int fun(int x, int y){
    for(int i=x;i<=y;i++){
        if (i % 3 == 0){
            printf("%i", i);
            if(i!=y){
                printf("|");
            }
        }
    }
}
int main(){
int x, y;
scanf("%i%i", &x, &y);
int i = fun(x,y);
    return 0;
}