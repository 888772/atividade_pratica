#include <stdio.h>

int main()
{
    int i,j;
    int numero = 0;
    int qnt_pares = 0;
    int qnt_impares = 0;
    int qtd_primos = 0;
    int divisores;

    printf("DIGITE A QUANTIDADE DE NUMEROS:\n");
    scanf("%d", &numero);

    //pares
    for (i = 1; i < numero; i++)
    {
        if (i % 2 == 0)
        {
            qnt_pares++;
        }
        
    }

    //impares
    for (i = 1; i < numero; i++)
    {
        if (i % 2 != 0)
        {
            qnt_impares++;
        }
        
    }

    for (i = 2; i <= numero; i++)
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
    printf("QUANTIDADE DE PARES: %d\n", qnt_pares);
    printf("QUANTIDADE DE IMPARES: %d\n", qnt_impares);
    
    return 0;
}