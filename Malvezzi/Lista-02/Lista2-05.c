#include <stdio.h>
#include <math.h>

int main() {
    float numero1, numero2, numero3, numero4;

    printf("Digite tres numeros em ordem Decrescente (ex: 2 5 7) ");
    scanf("%f %f %f", &numero1, &numero2, &numero3);

    printf("Digite um numero para ser inserido na sequencia");
    scanf("%f", &numero4);

    if (numero4 > numero3) {
        printf("%.2f %.2f %.2f %.2f", numero4, numero3, numero2, numero1);
    } else if (numero4 > numero2) {
        printf("%.2f %.2f %.2f %.2f", numero3, numero4, numero2, numero1);
    } else if (numero4 > numero1) {
        printf("%.2f %.2f %.2f %.2f", numero3, numero2, numero4, numero1);
    } else {
        printf("%.2f %.2f %.2f %.2f", numero3, numero2, numero1, numero4);
    }

    return 0;
}