#include <stdio.h>

void main()
{
    int r = 5;
    int *ptr_r = &r;

    *ptr_r = 10;

    printf("Valor de r: %d\n", *ptr_r);
}

/*
TABELA DE VARIÁVEIS
+----------------+--------+---------------+
| Nome Variável  | Tipo   | Valor         |
+----------------+--------+---------------+
| r              | int    | 5 -> 10       |
| ptr_r          | int*   | endereço de r |
+----------------+--------+---------------+
*/