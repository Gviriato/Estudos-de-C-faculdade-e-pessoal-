#include <stdio.h>
#include <stdlib.h>

int main() {
    float salario, novo_salario, aumento;

    printf("Digite o seu salario: ");
    scanf("%f", &salario);

    printf("Digite a %% do aumento:");
    scanf("%f", &aumento);

    novo_salario = salario * ((aumento/100)+1);

    printf("Seu novo salario e R$%.2f\n", novo_salario);

    return 0;
}
