#include <stdio.h>
#include <stdlib.h>

#define VECTOR_SIZE 5

void main()
{
    float *v = malloc(VECTOR_SIZE * sizeof(float));
    float *smaller = malloc(sizeof(float));

    if (v == NULL || smaller == NULL)
    {
        printf("Erro ao alocar memoria.\n");
        return;
    }
    
    for (int i = 0; i < VECTOR_SIZE; i++)
    {
        printf("Digite o valor %d: ", i + 1);
        scanf("%f", &v[i]);
    }
    
    *smaller = v[0];
    
    for (int i = 1; i < VECTOR_SIZE; i++)
    {
        if (v[i] < *smaller)
        {
            *smaller = v[i];
        }
    }
   
    printf("O menor valor e: %f\n", *smaller);
    
    free(v);
    free(smaller);
}