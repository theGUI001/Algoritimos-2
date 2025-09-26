#include <stdio.h>
#include <stdlib.h>

#define VECTOR_SIZE 6

void main()
{
    int *v = malloc(VECTOR_SIZE * sizeof(int));
    int *tmp = malloc(sizeof(int));
    if (v == NULL || tmp == NULL)
    {
        printf("Erro ao alocar memoria");
        return;
    }

    for (int i = 0; i < VECTOR_SIZE; i++)
    {
        printf("Digite o valor %d: ", i + 1);
        scanf("%d", &v[i]);
    }

    for (int i = 0; i < VECTOR_SIZE / 2; i++)
    {
        *tmp = v[i];
        v[i] = v[VECTOR_SIZE - 1 - i];
        v[VECTOR_SIZE - 1 - i] = *tmp;
    }

    for (int i = 0; i < VECTOR_SIZE; i++)
    {
        printf("%d ", v[i]);
    }

    free(v);
}