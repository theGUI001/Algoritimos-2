#include <stdio.h>

void main()
{
    float s = 5.5;
    float *ptr_s = &s;

    *ptr_s = 10.7;

    printf("Valor de s: %.2f\n", *ptr_s);
}

/*
TABELA DE VARIÁVEIS
+----------------+--------+------------------+
| Nome Variável  | Tipo   | Valor            |
+----------------+--------+------------------+
| s              | float  | 5.5 -> 10.7      |
| ptr_s          | float* | endereço de s    |
+----------------+--------+------------------+
*/