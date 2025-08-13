#include <stdio.h>
#include <locale.h>
#include <math.h>

#define PI 3.1415926

float readRadius();
float calculateArea(float radius);
void printResult(float radius, float area);

void main()
{
    setlocale(LC_ALL, "pt_BR.UTF-8");
    float radius = readRadius();
    float area = calculateArea(radius);
    printResult(radius, area);
}

float readRadius()
{
    float radius;
    printf("Digite o raio do círculo: ");
    scanf("%f", &radius);
    return radius;
}

float calculateArea(float radius)
{
    return PI * radius * radius;
}

void printResult(float radius, float area)
{
    printf("A área do círculo de raio %.2f é: %.2f\n", radius, area);
}