#include <stdio.h>
#include <stdio.h>
#include <locale.h>

float getValue(int valNumber);
float calculateAverage(float a, float b);
void printAverage(float average);

void main()
{
    setlocale(LC_ALL, "pt_BR.UTF-8");
    float value1 = getValue(1);
    float value2 = getValue(2);
    float average = calculateAverage(value1, value2);
    printAverage(average);
}

float getValue(int valNumber)
{
    float value;
    printf("Insira o número %d: ", valNumber);
    scanf("%f", &value);
    return value;
}

float calculateAverage(float a, float b)
{
    return (a + b) / 2;
}

void printAverage(float average)
{
    printf("A média dos dois valores é: %.2f\n", average);
}
