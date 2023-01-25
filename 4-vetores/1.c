#include <stdio.h>

int main(){
    int v[5];
    
    printf("Digite 5 valores para preencher vetor: ");
    //ler valores do vetor
    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &v[i]);
    }
    printf("\n");

    int* u = v;
    u[0] = 4;
    u[1] = v[0] + 2;

    printf("Valores do vetor v: ");
    for (int i = 0; i < 5; i++)
    {
        printf("%d ", v[i]);
    }
    printf("\n");

    printf("Valores do vetor u: ");
    for (int i = 0; i < 5; i++)
    {
        printf("%d ", u[i]);
    }
    printf("\n");
    
    return 0;
}