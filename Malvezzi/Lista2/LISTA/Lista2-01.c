#include <stdio.h>
#include <math.h>

int main() {
    float nota_lab, nota_ava, nota_exame, nota_final;
    const int peso_lab = 2, peso_ava = 3, peso_exame = 5;

    printf("Digite a nota do laboratorio: ");
    scanf("%f", &nota_lab);

    printf("Digite a nota da avaliacao: ");
    scanf("%f", &nota_ava);

    printf("Digite a nota do exame final: ");
    scanf("%f", &nota_exame);

    nota_final = ((nota_lab*peso_lab) + (nota_exame*peso_exame) + (nota_ava*peso_ava)) / (peso_ava + peso_exame + peso_lab);

    printf("Nota: %.2f\n", nota_final);

    if (nota_final >= 8) {
        printf("Conceito: A\n");
    } else if (nota_final >= 7) {
        printf("Conceito: B\n");
    } else if (nota_final >= 6) {
        printf("Conceito: C\n");
    } else if (nota_final >= 5) {
        printf("Conceito: D\n");
    } else {
        printf("Conceito: E\n");
    }
    return 0;
}