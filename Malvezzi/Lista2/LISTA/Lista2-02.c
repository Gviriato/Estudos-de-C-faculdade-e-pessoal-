#include <stdio.h>
#include <math.h>

int main() {
    float nota1, nota2, nota3, media_final;

    printf("Digite a nota1: ");
    scanf("%f", &nota1);

    printf("Digite a nota2: ");
    scanf("%f", &nota2);

    printf("Digite a nota3: ");
    scanf("%f", &nota3);

    media_final = (nota1+nota2+nota3) / 3;

    printf("Nota: %.2f\n", media_final);

    if (media_final >= 7) {
        printf("Aprovado");
    } else if (media_final >= 3) {
        printf("Exame");
    } else {
        printf("Reprovado");
    }
    return 0;
}