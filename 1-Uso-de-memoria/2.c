#include <stdio.h>
#include <stdlib.h>

int idade2 = 35;

void imprimir(int id){
    id++;
    idade2++;
}

int main() {

    int idade = 25;

    printf("\nIdade: %d\n", idade);
    printf("\nIdade2: %d\n", idade2);
    imprimir(idade);
    printf("\nIdade: %d\n", idade);
    printf("\nIdade2: %d\n", idade2);

    return 0;
}