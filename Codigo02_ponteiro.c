#include <stdio.h>
#include <string.h>

int main(void)
{
    char nome[100] = {0};
    char *pnome = nome; // ponteiro para o buffer do nome
    float preco = 0.0f;

    printf("Digite nome do produto: ");
    if (fgets(nome, sizeof(nome), stdin) == NULL) {
        fprintf(stderr, "Erro na leitura do nome\n");
        return 1;
    }
    // Remove newline lido por fgets, se houver
    nome[strcspn(nome, "\r\n")] = '\0';

    printf("Qual o preço do produto %s?\n", pnome);
    if (scanf("%f", &preco) != 1) {
        fprintf(stderr, "Erro na leitura do preço\n");
        return 1;
    }

    float desconto = preco * 0.10f;
    float preco_final = preco - desconto;

    printf("Com o desconto o produto %s fica %.2f\n", pnome, preco_final);

    return 0;
}