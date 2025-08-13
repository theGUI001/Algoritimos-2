#include <stdio.h>
#include <locale.h>

int readValue();
unsigned int powerOf2(int x);
void printResult(int value, unsigned int result);

void main()
{
    setlocale(LC_ALL, "pt_BR.UTF-8");
    int value = readValue();
    unsigned int result = powerOf2(value);
    printResult(value, result);
}

int readValue()
{
    int value;
    printf("Digite um valor inteiro: ");
    scanf("%d", &value);
    return value;
}

unsigned int powerOf2(int x)
{
    return x * x;
}

void printResult(int value, unsigned int result)
{
    printf("O número %d ao quadrado é: %u\n", value, result);
}