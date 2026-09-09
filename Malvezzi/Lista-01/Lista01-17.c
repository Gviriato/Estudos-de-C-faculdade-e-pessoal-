#include <stdio.h>
#define CPMF (0.38/100.00)


int main() {
    float deposito = 0.0f, cheque1 = 0.0f, cheque2 = 0.0f, valor_conta = 0.0f;
    printf("Digite o valor do deposito: ");
    scanf("%f", &deposito);

    printf("Digite o valor do cheque 1: ");
    scanf("%f", &cheque1);

    printf("Digite o valor do cheque 2: ");
    scanf("%f", &cheque2);

    float imposto1 = cheque1 * CPMF;
    float imposto2 = cheque2 * CPMF;

    valor_conta = deposito - imposto1 - imposto2 - cheque1 - cheque2;

    printf("O valor atual depois dos cheques e de: R$%.2f", valor_conta);

    return 0;
}
