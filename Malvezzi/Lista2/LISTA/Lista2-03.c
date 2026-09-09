#include <stdio.h>
#include <math.h>

int main() {
    float numero1, numero2, maior;

    printf("Digite a numero1: ");
    scanf("%f", &numero1);

    printf("Digite a numero2: ");
    scanf("%f", &numero2);

    maior = (numero1 > numero2) ? numero1 : numero2;
    if (numero1 > numero2) {
        maior = numero1;
    } else { maior = numero2;}

    printf("O maior valor e %.2f", maior);
    return 0;
}