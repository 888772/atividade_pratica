#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {

    char nome[11]; 
    int contador_a = 0;
    int i;

    printf("Digite um nome (ate 10 caracteres): ");
    
    scanf("%10s", nome); 

    for (i = 0; nome[i] != '\\0'; i++) {
        // Verifica se o caractere atual é 'A' ou 'a'
        if (nome[i] == 'A' || nome[i] == 'a') {
            contador_a++;
        }
    }

    printf("O nome inserido e: %s\\n", nome);
    printf("O numero de letras 'A' ou 'a' no nome e: %d\\n", contador_a);

    return 0;
}
