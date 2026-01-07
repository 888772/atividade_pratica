#include <stdio.h>

int main()
{
    int i, j;
    int qtd_primos = 0;
    int divisores;

    for (i = 2; i <= 1000; i++)
    {
        divisores = 0;

        for (j = 1; j <= i; j++)
        {
            if (i % j == 0)
            {
                divisores++;
            }
        }

        if (divisores == 2)
        {
            qtd_primos++;
        }
    }

    printf("Existem %d numeros primos de 1 a 1000\n", qtd_primos);

    return 0;
}
