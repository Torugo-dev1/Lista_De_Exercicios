#include <stdio.h>
void fun(int n){
    for(int i=n-1;i>0;i--){
    printf("%i\n", i);}
}
int main(){
    int n;
scanf("%i", &n);
fun(n);
    return 0;
}