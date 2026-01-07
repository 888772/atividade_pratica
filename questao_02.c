#include <stdio.h>

int main()
{
    char nome[] = "";
    float preco;

    printf("Digite nome do produto\n");
    scanf("%s",nome);
    printf("Qual o preço do produto %s?\n", nome);
    scanf("%f",&preco);

    float desconto = desconto = preco * 0.10;
    float preco_final = preco - desconto;

    printf("Com o desconto o produto %s fica %.2f", nome, preco_final);
    
    return 0;
}