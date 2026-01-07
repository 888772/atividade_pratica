#include <stdio.h>

int main()
{
    int i,x;
    int num[4] = {};
    int soma = 0;
    
    for (i = 0; i < 4; i++) {
      printf("Digite o numero %d\n", i);
      scanf("%d", &num[i]);
    }

    for(x = 0; x < 4; x++) {
        // printf("%d", num[x]); debug para saber se está passando pela array
        soma += num[x];
    }
    
    int media = soma/4;
    
    printf("Soma = %d\n", soma);
    printf("Média = %d\n", media);
    
    return 0;
}