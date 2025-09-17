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
    int *dobro = (int *)malloc(sizeof(int));

    if (a == NULL || dobro == NULL)
    {
        printf("Erro na alocacao de memoria!\n");
        if (a)
            free(a);
        if (dobro)
            free(dobro);
        return 1;
    }

    *a = 3;
    *dobro = calcular(a);
    printf("Valor: %d %d", *a, *dobro);

    free(a);
    free(dobro);
    return 0;
}