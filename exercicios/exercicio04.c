#include <stdio.h>

int main(void)
{
    printf("Hello PUCPR\n");

    double pi = 3.14;
    double raio = 10.0;
    double area = pi * raio * raio;

    printf("%f\n", area);

    printf("%p\n", &area);
    printf("%p\n", &raio);
    printf("%p\n", &pi);

    printf("%zu\n", sizeof(area));
    printf("%zu\n", sizeof(raio));
    printf("%zu\n", sizeof(pi));

    printf("%zu\n", sizeof(double));

    return 0;
}