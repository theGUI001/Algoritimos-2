#include <stdio.h>
#include <locale.h>

void celsiusToFahrenheit(float celsius, float *fahrenheit)
{
    *fahrenheit = (9.0 * celsius / 5.0) + 32.0;
}

void fahrenheitToCelsius(float fahrenheit, float *celsius)
{
    *celsius = 5.0 * (fahrenheit - 32.0) / 9.0;
}

void displayMenu()
{
    printf("\n=== MENU DE CONVERSÃO DE TEMPERATURA ===\n");
    printf("1 - Converter um valor de Celsius para Fahrenheit\n");
    printf("2 - Converter um valor de Fahrenheit para Celsius\n");
    printf("0 - Sair\n");
    printf("Escolha uma opção: ");
}

int main()
{
    setlocale(LC_ALL, "pt_BR.UTF-8");

    int opcao;
    float temperatura, resultado;

    do
    {
        displayMenu();
        scanf("%d", &opcao);

        switch (opcao)
        {
        case 1:
            printf("Digite a temperatura em Celsius: ");
            scanf("%f", &temperatura);

            celsiusToFahrenheit(temperatura, &resultado);

            printf("Temperatura original: %.2f°C\n", temperatura);
            printf("Temperatura convertida: %.2f°F\n", resultado);
            break;

        case 2:
            printf("Digite a temperatura em Fahrenheit: ");
            scanf("%f", &temperatura);

            fahrenheitToCelsius(temperatura, &resultado);

            printf("Temperatura original: %.2f°F\n", temperatura);
            printf("Temperatura convertida: %.2f°C\n", resultado);
            break;

        case 0:
            printf("Saindo do programa...\n");
            break;

        default:
            printf("Opção inválida! Tente novamente.\n");
        }

    } while (opcao != 0);

    return 0;
}