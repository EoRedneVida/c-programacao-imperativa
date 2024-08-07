#include <stdio.h>
#include <stdbool.h>

int main(void)
{
    short a = 10;
    double b = 45.9;
    char c = '$';
    bool d = true;

    printf("%zu\n", sizeof(short));
    printf("%zu\n", sizeof(double));
    printf("%zu\n", sizeof(char));
    printf("%zu\n", sizeof(bool));

    return 0;
}