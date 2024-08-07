#include <stdio.h>
#include <stdbool.h>

int main(void)
{
    bool frio = true;
    bool calor = false;

    printf("%d\n", frio);
    printf("%d\n", calor);

    printf("%zu\n", sizeof(bool));

    return 0;
}