#include <stdio.h>
#include <stdlib.h>

int main() {
   float valor, juros, valor_novo, juros_novo;
   printf("Digite o valor: ");
   scanf("%f", &valor);

   printf("Digite a taxa em %:");
   scanf("%f", &juros);

   juros_novo = valor * (juros/100);
   valor_novo = valor + juros_novo;

   printf("O valor da taxa e: %.2f\n", juros_novo);
   printf("O valor e: %.2f\n", valor_novo);

}
