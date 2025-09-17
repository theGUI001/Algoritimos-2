#include <stdio.h>
#include <locale.h>

void calculateCorrectedSalary(float old_salary, float *new_salary)
{
    *new_salary = 110.67 * old_salary / 100.0;
}

void calculatePurchasingPowerLoss(float old_salary, float new_salary, float *loss)
{
    *loss = new_salary - old_salary;
}

int main()
{
    setlocale(LC_ALL, "Portuguese");

    float old_salary, new_salary, aquisition_loss;

    printf("=== CÁLCULO DE PERDA AQUISITIVA - INFLAÇÃO 2015 ===\n");
    printf("Inflação de 2015: 10,67%%\n\n");

    printf("Digite o salário de janeiro de 2015: R$ ");
    scanf("%f", &old_salary);

    calculateCorrectedSalary(old_salary, &new_salary);

    calculatePurchasingPowerLoss(old_salary, new_salary, &aquisition_loss);

    printf("\n=== RESULTADOS ===\n");
    printf("Salário em janeiro de 2015: R$ %.2f\n", old_salary);
    printf("Salário necessário em janeiro de 2016: R$ %.2f\n", new_salary);
    printf("Perda de poder aquisitivo: R$ %.2f\n", aquisition_loss);
    printf("Percentual de perda: %.2f%%\n", (aquisition_loss / old_salary) * 100);

    printf("\nSe o trabalhador não recebeu reajuste, ele perdeu R$ %.2f ", aquisition_loss);
    printf("de poder aquisitivo devido à inflação.\n");

    return 0;
}