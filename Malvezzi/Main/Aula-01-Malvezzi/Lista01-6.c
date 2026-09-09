#include <stdio.h>
#include <stdlib.h>

int main() {
    float salario, novo_salario, gra, imp, salario_imp, salario_gra;
    gra = 0.05;
    imp = 0.07;

    printf("Digite o seu salario: ");
    scanf("%f", &salario);

    salario_imp = salario * imp;
    salario_gra = salario * gra;

    novo_salario = ((salario+salario_gra)-salario_imp);
    printf("%.2f\n", salario_imp);
    printf("%.2f\n", salario_gra);
    printf("Seu novo salario e: %.2f\n", novo_salario);
}
