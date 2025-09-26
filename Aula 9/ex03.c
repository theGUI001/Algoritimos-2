#include <stdio.h>
#include <stdlib.h>

#define VECTOR_SIZE 5

void main()
{
    float *v = malloc(VECTOR_SIZE * sizeof(float));
    float *bigger = malloc(sizeof(float));

    if (v == NULL || bigger == NULL)
    {
        printf("Erro ao alocar memoria.\n");
        return;
    }

    for (int i = 0; i < VECTOR_SIZE; i++)
    {
        printf("Digite o valor %d: ", i + 1);
        scanf("%f", &v[i]);
    }
    
    *bigger = v[0];
    
    for (int i = 1; i < VECTOR_SIZE; i++)
    {
        if (v[i] > *bigger)
        {
            *bigger = v[i];
        }
    }
   
    printf("O maior valor e: %f\n", *bigger);
    
    free(v);
    free(bigger);
}