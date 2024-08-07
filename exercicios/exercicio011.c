#include <stdio.h>

int main(void)
{
    int a = 1, b = 2, c = 3;

    printf("Endereco de a: %p\n", &a);
    printf("Endereco de b: %p\n", &b);
    printf("Endereco de c: %p\n", &c);

    int* p = &c;
    printf("p: %p\n", p);
    printf("Conteudo de p: %d\n", *p);

    p = p + 1;
    printf("p: %p\n", p);
    printf("Conteudo de p: %d\n", *p);

    p = p + 1;
    printf("p: %p\n", p);
    printf("Conteudo de p: %d\n", *p);

    return 0;
    
}