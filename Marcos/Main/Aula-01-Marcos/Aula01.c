#include <stdio.h>
#include <string.h>

int main() {
    char nome[20] = "";
    int idade = 0;
    char sexo = '\0';
    float altura = 0.0f;

    printf("Digite seu nome: ");
    fgets(nome, 20, stdin);
    nome[strlen(nome) - 1] = '\0';

    printf("Digite sua idade: ");
    scanf("%d", &idade);

    printf("Digite sua altura: ");
    scanf("%f", &altura);

    printf("Digite seu sexo(M/F):");
    scanf(" %c", &sexo);

    printf("%s, %d, %.2f, %c\n", nome, idade, altura, sexo);

    return 0;
}
