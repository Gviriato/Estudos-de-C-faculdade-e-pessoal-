#include <stdio.h>
#include <stdlib.h>

int main() {
    float salario, novo_salario;

    printf("Digite o seu salario: ");
    scanf("%f", &salario);

    novo_salario = salario * 1.25;

    printf("Seu novo salario e R$%.2f\n", novo_salario);

    return 0;
}
