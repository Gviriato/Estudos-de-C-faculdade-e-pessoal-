#include <stdio.h>


/*int main() {
    float numero1, numero2, numero3, aux;
    int escolha;

    printf("Digite tres numeros a serem organizados: ");
    scanf("%f %f %f", &numero1, &numero2, &numero3);

    printf("Digite como deseja organizar\n1-Ordem crescente\n2-Ordem decrescente\n3-O maior no meio\n");
    scanf("%d", &escolha);



    switch (escolha) {
        case 1:
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
            break;
        case 2:
            if (numero1 < numero2) {
                aux = numero2; numero2 = numero1; numero1 = aux;
            }
            if (numero2 < numero3) {
                aux = numero3; numero3 = numero2; numero2 = aux;
            }
            if (numero1 < numero2) {
                aux = numero2; numero2 = numero1; numero1 = aux;
            }
            printf("%.2f, %.2f, %.2f", numero1, numero2, numero3);
            break;
        case 3:
            if (numero1 > numero2) {
                aux = numero2; numero2 = numero1; numero1 = aux;
            }
            if (numero3 > numero2) {
                aux = numero2; numero2 = numero3; numero3 = aux;
            }
            printf("%.2f, %.2f, %.2f", numero1, numero2, numero3);
            break;
        default:
            printf("Selecione um numero de 1 a 3!");
            break;
    }
    return 0;
}
*/

int main() {
    int i;
    float a, b, c, aux;

    printf("Digite os tres valores que deseja organizar: ");
    scanf("%f %f %f", &a, &b, &c);

    printf("Digite como deseja organizar\n1-Ordem crescente\n2-Ordem decrescente\n3-O maior no meio\n");
    scanf("%d", &i);


    if (a > b) {
        aux = b; b = a; a = aux;
    }
    if (b > c) {
        aux = c; c = b; b = aux;
    }
    if (a > b) {
        aux = b; b = a; a = aux;
    }

    switch (i) {
        case 1:
            printf("%.2f %.2f %.2f", a, b, c);
            break;
        case 2:
            printf("%.2f %.2f %.2f", c, b, a);
            break;
        case 3:
            printf("%.2f %.2f %.2f", a, c, b);
            break;
        default:
            printf("INSIRA UM VALOR CORRETO (1, 2 OU 3)");
            break;
    }
}