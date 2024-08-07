#include <stdio.h>

int main(void)
{
    double pi = 3.14;
    double raio = 10.0;
    double area = pi * raio * raio;
    printf("%f\n", area);

    printf("%zu\n", sizeof(double));

    return 0;
}