//variavel estatica entro da função
#include <stdio.h>

void imprime(float a){
    static int n = 1;
    printf("%f", a);
    if(n % 5 == 0)
        printf("\n");
    n++;
}

int main (){
    float a;

    scanf("%f", &a);

    imprime(a);
    return 0;
}