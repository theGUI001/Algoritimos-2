#include <stdio.h>
#include <stdlib.h>

int calcular(int *a)
{
    *a = *a * 2;
    return *a;
}

int main(int argc, char **argv)
{
    int *a = (int *)malloc(sizeof(int));
    if (a == NULL)
    {
        printf("Erro na alocacao de memoria!\n");
        return 1;
    }

    *a = 3;
    *a = calcular(a);
    printf("Valor: %d", *a);

    free(a);
    return 0;
}