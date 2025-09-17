#include <stdio.h>
#include <stdlib.h>

void apresentar(int *b)
{
    printf("Valor: %d", *b);
}

int main(int argc, char **argv)
{
    int *a = (int *)malloc(sizeof(int));
    if (a == NULL)
    {
        printf("Erro na alocacao de memoria!\n");
        return 1;
    }

    *a = 4;
    apresentar(a);

    free(a);
    return 0;
}