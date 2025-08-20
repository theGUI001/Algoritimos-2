# Exercícios sobre tamanho de variáveis

1. **Quantos valores diferentes 1 bit pode representar?**

    2 valores (0 ou 1).

2. **Quantos valores diferentes 2 bits podem representar?**

    4 valores (00, 01, 10, 11).

3. **Quantos valores diferentes 8 bits podem representar?**

    256 valores (de 0 a 255).

4. **Qual a conta devemos fazer para calcular quantos valores x bits podem representar?**

    `2^x` (2 elevado ao número de bits).

5. **Quantos bits tem 1 byte?**

    8 bits.

6. **Quantos bits tem 4 bytes?**

    32 bits (4 x 8).

7. **Quantos valores diferentes podemos representar com 1 byte?**

    256 valores (2^8).

8. **Quantos valores diferentes podemos representar com 4 bytes?**

    4.294.967.296 valores (2^32).

9. **Qual a conta devemos fazer para calcular quantos valores x bytes podem representar?**

    `2^(8x)` (2 elevado a 8 vezes o número de bytes).

10. **Quantos bytes tem uma variável do tipo int?**

    Normalmente, 4 bytes.

11. **Quantos valores diferentes podemos representar com uma variável do tipo inteiro?**

    4.294.967.296 valores (2^32), mas para `int` com sinal: de -2.147.483.648 a 2.147.483.647.

12. **Declare uma variável do tipo inteiro e atribua o valor 2000000000. Ao imprimir este valor, o que é apresentado? Por quê?**

    ```c
    int x = 2000000000;
    printf("%d", x); // Apresenta 2000000000 pois está dentro do limite do int.
    ```

13. **Declare uma variável do tipo inteiro e atribua o valor 4000000000. Ao imprimir este valor, o que é apresentado? Por quê?**

    ```c
    int x = 4000000000;
    printf("%d", x); // O compilador acusa erro de overflow pois excede o limite do int.
    ```

14. **Declare uma variável do tipo inteiro e atribua o valor 4300000000. Ao imprimir este valor, o que é apresentado? Por quê?**

    ```c
    int x = 4300000000;
    printf("%d", x); // O compilador acusa erro de overflow pois excede o limite do int.
    ```

15. **Declare uma variável do tipo unsigned int e atribua o valor 2000000000. Ao imprimir este valor, o que é apresentado? Por quê?**

    ```c
    unsigned int x = 2000000000;
    printf("%u", x); // Apresenta 2000000000 pois está dentro do limite do unsigned int.
    ```

16. **Declare uma variável do tipo unsigned int e atribua o valor 4000000000. Ao imprimir este valor, o que é apresentado? Por quê?**

    ```c
    unsigned int x = 4000000000;
    printf("%u", x); // Apresenta 4000000000 pois está dentro do limite do unsigned int.
    ```

17. **Declare uma variável do tipo unsigned int e atribua o valor 4300000000. Ao imprimir este valor, o que é apresentado? Por quê?**

    ```c
    unsigned int x = 4300000000;
    printf("%u", x); // O compilador acusa erro de overflow pois excede o limite do unsigned int.
    ```

18. **Quantos bytes tem uma variável do tipo double?**

    Normalmente, 8 bytes.

19. **Quantos valores diferentes podemos representar com uma variável do tipo double?**
    8.589.934.592 valores (2^64), mas para `double` com sinal: de -4.294.967.296 a 4.294.967.295
