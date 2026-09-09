#include <stdio.h>

int main() {
        int horas_trabalhadas = 0;
        float salario_minimo = 0.0f;
        printf("Digite quantas horas foram trabalhadas: ");
        scanf("%d", &horas_trabalhadas);

        printf("Digite o valor do salario minimo atual: ");
        scanf("%f", &salario_minimo);

        float valor_hora = salario_minimo/2.0;
        float salario_bruto = horas_trabalhadas * valor_hora;
        float imposto = salario_bruto * 3.0/100.0;
        float salario_final = salario_bruto - imposto;

        printf("O imposto sera de: %.2f\n", imposto);
        printf("O salario bruto sera de: %.2f\n", salario_bruto);
        printf("O valor por hora sera de: %.2f\n", valor_hora);
        printf("O salario a receber sera de: %.2f\n", salario_final);

        return 0;
}
