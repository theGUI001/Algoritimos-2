#include <stdio.h>
#include <stdlib.h>

#define VECTOR_SIZE 6

void main()
{
    int *v = malloc(VECTOR_SIZE * sizeof(int));
    if (v == NULL)
    {
        printf("Erro ao alocar memoria");
        return;
    }

    for (int i = 0; i < VECTOR_SIZE; i++)
    {
        printf("Digite o valor %d: ", i + 1);
        scanf("%d", &v[i]);
    }

    for (int i = 0; i < VECTOR_SIZE; i++)
    {
        printf("%d ", v[VECTOR_SIZE - i - 1]);
    }

    free(v);
}