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

    printf("Digite um valor");
    scanf("%d", a);
    return a;
}

int main(int argc, char **argv)
{
    int *a = ler();
    if (a == NULL)
    {
        return 1;
    }

    printf("Valor: %d", *a);

    free(a);
    return 0;
}