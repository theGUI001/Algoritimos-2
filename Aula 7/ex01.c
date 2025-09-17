#include <stdio.h>
#include <locale.h>

void checkEvenOdd(int number, int *result)
{
    if (number % 2 == 0)
    {
        *result = 1;
    }
    else
    {
        *result = 0;
    }
}

int main()
{
    setlocale(LC_ALL, "Portuguese");

    int number, result;

    printf("Digite um número inteiro: ");
    scanf("%d", &number);

    checkEvenOdd(number, &result);

    if (result == 1)
    {
        printf("O número %d é par.\n", number);
    }
    else
    {
        printf("O número %d é ímpar.\n", number);
    }

    return 0;
}