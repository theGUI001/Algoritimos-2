#include <stdio.h>
#include <stdlib.h>

#define VECTOR_SIZE 5

void main()
{
    int *v = malloc(VECTOR_SIZE * sizeof(int));
    int *tmp = malloc(sizeof(int));

    if (v == NULL || tmp == NULL)
    {
        printf("Erro ao alocar memoria.\n");
        return;
    }

    for (int i = 0; i < VECTOR_SIZE; i++)
    {
        printf("Digite o valor %d: ", i + 1);
        scanf("%d", &v[i]);
    }

    *tmp = v[0];
    v[0] = v[VECTOR_SIZE - 1];
    v[VECTOR_SIZE - 1] = *tmp;

    free(tmp);

    for (int i = 0; i < VECTOR_SIZE; i++)
    {
        printf("%d ", v[i]);
    }

    free(v);
}
