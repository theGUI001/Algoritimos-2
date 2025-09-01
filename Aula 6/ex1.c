#include <stdio.h>

void main()
{
    int r = 5;
    int *ptr_r = &r;

    *ptr_r = 10;

    printf("Valor de r: %d\n", *ptr_r);
}