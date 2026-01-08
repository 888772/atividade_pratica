#include <stdio.h>


int main() {
    
    int i;
    int numero[10] = {};

    for (i = 0; i < 10; i++)
    {
        printf("INSIRA O %dº NUMERO:\n", i);
        scanf("%d", &numero[i]);
    }

    // for (i = 0; i < 10; i++)
    // {
    //     printf("%d\n", numero[i]);
    // }
    
    int numeros_pares[10] = {};

    for (i = 0; i < 10; i++)
    {
        if (numero[i] % 2 == 0)
        {
            numeros_pares[i] = numero[i];
        }
    }
    
    for (i = 0; i < 10; i++)
     {
        if (numeros_pares[i] > 0)
        {
            printf("O NUMERO PARE DA POSICAO %dº E:\n%d\n", i , numeros_pares[i]);
        }
     }

    return 0;
}
