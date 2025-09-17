#include <stdio.h>
#include <locale.h>

void findLarger(int num1, int num2, int *gt)
{
    if (num1 > num2)
    {
        *gt = num1;
    }
    else
    {
        *gt = num2;
    }
}

int main()
{
    setlocale(LC_ALL, "pt_BR.UTF-8");

    int num1, num2, gt;

    printf("Digite o primeiro número: ");
    scanf("%d", &num1);

    printf("Digite o segundo número: ");
    scanf("%d", &num2);

    // Chama a função passando o endereço de 'gt'
    findLarger(num1, num2, &gt);

    printf("O maior número entre %d e %d é: %d\n", num1, num2, gt);

    return 0;
}