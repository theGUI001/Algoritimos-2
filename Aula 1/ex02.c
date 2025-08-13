#include <stdio.h>
#include <locale.h>

float readFahrenheit();
float fahrenheitToCelsius(float fahrenheit);
void printCelsius(float celsius);

void main()
{
    setlocale(LC_ALL, "pt_BR.UTF-8");
    float fahrenheit = readFahrenheit();
    float celsius = fahrenheitToCelsius(fahrenheit);
    printCelsius(celsius);
}

float readFahrenheit()
{
    float fahrenheit;
    printf("Digite a temperatura em Fahrenheit: ");
    scanf("%f", &fahrenheit);
    return fahrenheit;
}

float fahrenheitToCelsius(float fahrenheit)
{
    return (fahrenheit - 32) * 5 / 9;
}

void printCelsius(float celsius)
{
    printf("A temperatura em Celsius é: %.2f\n", celsius);
}