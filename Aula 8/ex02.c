#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv)
{
    double *x = (double *)malloc(sizeof(double));
    if (x == NULL)
    {
        printf("Erro na alocacao de memoria!\n");
        return 1;
    }

    *x = 3.2;
    printf("Valor: %lf", *x);

    free(x);
    return 0;
}