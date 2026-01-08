#include <stdio.h>

int main(void)
{
    char nome[11] = {0}; // até 10 caracteres + terminador
    char *p;
    int contador_a = 0;

    printf("Digite um nome (ate 10 caracteres): ");
    if (scanf("%10s", nome) != 1) {
        fprintf(stderr, "Erro na leitura do nome\n");
        return 1;
    }

    for (p = nome; *p != '\0'; p++) {
        if (*p == 'A' || *p == 'a') {
            contador_a++;
        }
    }

    printf("O nome inserido e: %s\n", nome);
    printf("O numero de letras 'A' ou 'a' no nome e: %d\n", contador_a);

    return 0;
}