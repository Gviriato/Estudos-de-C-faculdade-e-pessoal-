#include <stdio.h>
#include <math.h>

int main() {
        float numero1 = 0.0, numero2 = 0.0;
        float resultado = 0.0;
        printf("Digite dois numeros maiores que 0, o primeiro sera elevado ao segundo: ");
        scanf("%f %f", &numero1, &numero2);
        resultado = pow(numero1, numero2);
        printf("O resultado de %.2f elevado a %.2f e: %.2f.", numero1, numero2, resultado);
        return 0;
}
