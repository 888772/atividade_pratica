#include <stdio.h>
#include <string.h>

int main() {
    char nome[11]; // 10 caracteres + '\0'
    int contador = 0;

    printf("Digite um nome (até 10 caracteres): ");
    scanf("%10s", nome);

    for (int i = 0; i < strlen(nome); i++) {
        if (nome[i] == 'A' || nome[i] == 'a') {
            contador++;
        }
    }

    printf("O nome possui %d letra(s) 'A' ou 'a'.\n", contador);

    return 0;
}
