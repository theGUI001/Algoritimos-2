#include <stdio.h>

void main()
{
    double t = 3.141592653589793;
    double *ptr_t = &t;

    *ptr_t = 2.718281828459045;
    printf("Valor de t: %.15f\n", *ptr_t);
}

/*
TABELA DE VARIÁVEIS
+----------------+---------+-----------------------------+
| Nome Variável  | Tipo    | Valor                       |
+----------------+---------+-----------------------------+
| t              | double  | pi -> e                     |
| ptr_t          | double* | endereço de t               |
+----------------+---------+-----------------------------+
*/