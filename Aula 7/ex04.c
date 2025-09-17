#include <stdio.h>
#include <locale.h>

void celsiusToFahrenheit(float celsius, float *fahrenheit)
{
    *fahrenheit = (9.0 * celsius / 5.0) + 32.0;
}

int main()
{
    setlocale(LC_ALL, "pt_BR.UTF-8");

    float celsius, fahrenheit;

    printf("Digite a temperatura em Celsius: ");
    scanf("%f", &celsius);

    celsiusToFahrenheit(celsius, &fahrenheit);

    printf("Temperatura em Celsius: %.2f°C\n", celsius);
    printf("Temperatura em Fahrenheit: %.2f°F\n", fahrenheit);

    return 0;
}