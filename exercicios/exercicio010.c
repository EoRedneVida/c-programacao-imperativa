#include <stdio.h>

int main(void)
{
    int a = 10;
    printf("Endereco de a: %p\n", &a);
    printf("Tamanho de a: %zu\n", sizeof(a));

    int* p = &a;
    printf("Valor de p: %p\n", p);
    printf("Valor apontado por p: %d\n", *p);
    printf("Endereco de p: %p\n", &p);
    printf("Tamanho de p: %zu\n", sizeof(p));

    return 0;
}