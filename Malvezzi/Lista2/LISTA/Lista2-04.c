#include <stdio.h>
#include <math.h>

int main() {
    float numero1, numero2, numero3, aux;

    printf("Digite a numero1: ");
    scanf("%f", &numero1);

    printf("Digite a numero2: ");
    scanf("%f", &numero2);

    printf("Digite a numero3: ");
    scanf("%f", &numero3);

    if (numero1 > numero2) {
        aux = numero2; numero2 = numero1; numero1 = aux;
    }
    if (numero2 > numero3) {
        aux = numero3; numero3 = numero2; numero2 = aux;
    }
    if (numero1 > numero2) {
        aux = numero2; numero2 = numero1; numero1 = aux;
    }

    printf("%.2f, %.2f, %.2f", numero1, numero2, numero3);
}