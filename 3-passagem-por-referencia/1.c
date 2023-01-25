#include <stdio.h>

//função troca
void troca(int *px, int *py){
    int aux;
    aux = *px;
    *px = *py;
    *py = aux;

}

int main(){
    int a = 5, b = 7;

    troca(&a, &b);
    printf("%d %d\n", a, b);
    return 0;

}