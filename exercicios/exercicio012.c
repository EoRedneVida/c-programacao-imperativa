#include <stdio.h>
#include <stdbool.h>

int main(void)
{
    short a = 10;
    double b = 45.9;
    char c = '$';
    bool d = true;

    printf("Endereco de a: %p\n", &a);
    printf("Endereco de b: %p\n", &b);
    printf("Endereco de c: %p\n", &c);
    printf("Endereco de c: %p\n", &d);

    bool* p = &d;
    printf("p: %p\n", p);
    printf("Conteudo de p: %d\n", p);

    p = p + 1;
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