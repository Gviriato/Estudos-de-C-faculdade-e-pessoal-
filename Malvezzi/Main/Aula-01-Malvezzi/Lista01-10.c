#include <stdio.h>

int main() {
        float area = 0.0f, raio = 0.0f;
        float pi = 3.1416;
        printf("Digite o raio do circulo: ");
        scanf("%f", &raio);

        area = pi * (raio * raio);

        printf("A area do circulo e: %.2f", area);
        return 0;
}
