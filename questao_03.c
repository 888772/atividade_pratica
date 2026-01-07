#include <stdio.h>

int main()
{
    int i;
    int qnt_pares = 0;

    for (i = 1; i < 1000; i++)
    {
        if (i % 2 == 0)
        {
            qnt_pares++;
        }
        
    }

    printf("%d", qnt_pares);
    
    return 0;
}