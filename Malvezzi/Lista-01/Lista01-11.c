#include <stdio.h>
#include <math.h>

int main() {
    int numero = 0;
    printf("Digite um numero inteiro maior que 0: ");
    scanf("%d", &numero);
    double numero_quadrado = pow(numero, 2);
    double numero_cubo = pow(numero, 3);
    double numero_raiz = sqrt(numero);
    double numero_raiz_cubica = cbrt(numero);

    printf("seu numero ao quadrado e igual a: %.2f\n", numero_quadrado);
    printf("seu numero ao cubo e igual a: %.2lf\n", numero_cubo);
    printf("a raiz do seu numero e igual a: %.2f\n", numero_raiz);
    printf("a raiz cubica do seu numero e igual a: %.2lf\n", numero_raiz_cubica);

        return 0;
}
