#include <stdio.h>
#include <locale.h>

float readCelcius();
float celciusToFahrenheit(float celcius);
void printFahrenheit(float celcius, float fahrenheit);

void main()
{
    setlocale(LC_ALL, "pt_BR.UTF-8");
    float celcius = readCelcius();
    float fahrenheit = celciusToFahrenheit(celcius);
    printFahrenheit(celcius, fahrenheit);
}

float readCelcius()
{
    float celcius;
    printf("Digite a temperatura em Celsius: ");
    scanf("%f", &celcius);
    return celcius;
}

float celciusToFahrenheit(float celcius)
{
    return (celcius * 9 / 5) + 32;
}

void printFahrenheit(float celcius, float fahrenheit)
{
    printf("%.2f Celsius são %.2f Fahrenheit\n", celcius, fahrenheit);
}