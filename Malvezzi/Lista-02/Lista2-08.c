#include <stdio.h>
#include <math.h>

int main() {
    int escolha;
    float valor1, valor2;

    printf("Selecione no menu a seguir o que deseja fazer:\n1-Somar dois numeros\n2-raiz quadrada de um numero");
    scanf("%d", &escolha);

    switch (escolha) {
        case 1:
            printf("Digite os dois valores que deseja somar: ");
            scanf("%f %f", &valor1, &valor2);
            printf("%.2f", valor1+valor2);
            break;
        case 2:
            printf("Digite o valor que deseja saber a raiz: ");
            scanf("%f", &valor1);
            printf("%.2f", sqrt(valor1));
            break;
        default:
            printf("Selecione 1 ou 2!");
            break;
    }
    return 0;
}