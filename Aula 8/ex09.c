#include <stdio.h>
#include <stdlib.h>

int *ler()
{
    int *a = (int *)malloc(sizeof(int));
    if (a == NULL)
    {
        printf("Erro na alocacao de memoria!\n");
        return NULL;
    }

    printf("\nDigite um valor:");
    scanf("%d", a);
    return a;
}

int *calcular(int *a)
{
    int *i = (int *)malloc(sizeof(int));
    if (i == NULL)
    {
        printf("Erro na alocacao de memoria!\n");
        return NULL;
    }

    *i = 2020 - *a;
    return i;
}

void apresentar(int *i)
{
    printf("\nIdade: %d", *i);
}

int main(int argc, char **argv)
{
    int *ano = ler();
    if (ano == NULL)
    {
        return 1;
    }

    int *idade = calcular(ano);
    if (idade == NULL)
    {
        free(ano);
        return 1;
    }

    apresentar(idade);

    free(ano);
    free(idade);
    return 0;
}