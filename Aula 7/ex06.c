#include <stdio.h>
#include <locale.h>

void fahrenheitToCelsius(float fahrenheit, float *celsius)
{
    *celsius = 5.0 * (fahrenheit - 32.0) / 9.0;
}

int main()
{
    setlocale(LC_ALL, "pt_BR.UTF-8");

    float fahrenheit, celsius;

    printf("Digite a temperatura em Fahrenheit: ");
    scanf("%f", &fahrenheit);

    fahrenheitToCelsius(fahrenheit, &celsius);

    printf("Temperatura em Fahrenheit: %.2f°F\n", fahrenheit);
    printf("Temperatura em Celsius: %.2f°C\n", celsius);

    return 0;
}