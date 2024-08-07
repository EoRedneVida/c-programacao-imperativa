#include <stdio.h>

int main(void)
{
    char letra = 'A';
    printf("%c\n", letra);
    printf("%d\n", letra);

    letra = letra + 1;
    printf("%c\n", letra);
    printf("%d\n", letra);

    letra = letra / 2;
    printf("%c\n", letra);
    printf("%d\n", letra);

/*Para descobrir quantos bytes o Char ocupa*/
    printf("%zu\n", sizeof(char));

    return 0;
}