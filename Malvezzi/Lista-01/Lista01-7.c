#include <stdio.h>
#include <stdlib.h>

int main() {
    float salario, novo_salario, gra, imp;
    gra = 50;
    imp = 0.10;

    printf("Digite seu salario:");
    scanf("%f", &salario);

    novo_salario = (salario-(salario*imp))+gra;

    printf("seu novo salario e R$%.2f", novo_salario);

    return 0;
}
