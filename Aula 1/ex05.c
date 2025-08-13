#include <stdio.h>
#include <locale.h>

float readMinutes();
unsigned int convertMinutesToSeconds(float minutes);
void printResult(float minutes, unsigned int seconds);

void main()
{
    setlocale(LC_ALL, "pt_BR.UTF-8");
    float minutes = readMinutes();
    float seconds = convertMinutesToSeconds(minutes);
    printResult(minutes, seconds);
}

float readMinutes()
{
    float minutes;
    printf("Digite o tempo em minutos: ");
    scanf("%f", &minutes);
    return minutes;
}

unsigned int convertMinutesToSeconds(float minutes)
{
    return (unsigned int)(minutes * 60);
}

void printResult(float minutes, unsigned int seconds)
{
    printf("O tempo de %.2f minutos em segundos é: %u\n", minutes, seconds);
}
