#include <stdio.h>

void main()
{
    double number;
    double *ptr_number = &number;

    *ptr_number = 3.14159;

    printf("Endereço da variável: %p\n", &number);
    printf("Valor do ponteiro: %p\n", ptr_number);
    printf("Valor da variável: %.5f\n", number);
    printf("Valor da variável usando o ponteiro: %.5f\n", *ptr_number);
}
