#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv)
{
    char *z = (char *)malloc(sizeof(char));
    if (z == NULL)
    {
        printf("Erro na alocacao de memoria!\n");
        return 1;
    }

    *z = 'c';
    printf("Valor: %c", *z);

    free(z);
    return 0;
}