#include <stdio.h>

int main(void)
{
    float pi = 3.14;
    float raio = 10.0;
    float area = pi * raio * raio;
    printf("%f\n", area);

    printf("%zu\n", sizeof(float));

    return 0;
}