#include <stdio.h>

int main(void)
{
    int i;
    int num[4] = {0};
    int soma = 0;
    int *p = num; // ponteiro para o início do array

    for (i = 0; i < 4; i++) {
        printf("Digite o numero %d: ", i);
        if (scanf("%d", p + i) != 1) {
            fprintf(stderr, "Erro na leitura\n");
            return 1;
        }
    }

    for (p = num; p < num + 4; p++) {
        soma += *p; // desreferenciação do ponteiro
    }

    int media = soma / 4;

    printf("Soma = %d\n", soma);
    printf("Média = %d\n", media);

    return 0;
}