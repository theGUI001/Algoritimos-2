#include <stdio.h>

void main()
{
    int number;
    int *ptr_number = &number;

    *ptr_number = 42;

    printf("Endereço da variável: %p\n", &number);
    printf("Valor do ponteiro: %p\n", ptr_number);
    printf("Valor da variável: %d\n", number);
    printf("Valor da variável usando o ponteiro: %d\n", *ptr_number);
}
