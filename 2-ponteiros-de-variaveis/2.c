#include <stdio.h>

int main(){
    int a; //variavel do tipo inteiro
    int* p; //variavel do tipo ponteiro para inteiro
    p = & a; //precebe o endereço de a
    *p = 8; //o cionteudo de p é alterado para 8
    printf("%d\n", *p);
    return 0;
}