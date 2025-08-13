#include <stdio.h>
#include <locale.h>

unsigned int readAge();
unsigned long convertAgeToDays(unsigned int age);
void printAgeInDays(unsigned long days);

int main()
{
    setlocale(LC_ALL, "pt_BR.UTF-8");
    unsigned int age = readAge();
    unsigned long days = convertAgeToDays(age);
    printAgeInDays(days);
    return 0;
}

unsigned int readAge()
{
    unsigned int age;
    printf("Digite a sua idade: ");
    scanf("%u", &age);
    return age;
}

unsigned long convertAgeToDays(unsigned int age)
{
    return (unsigned long)age * 365;
}

void printAgeInDays(unsigned long days)
{
    printf("A sua idade em dias é: %lu\n", days);
}
