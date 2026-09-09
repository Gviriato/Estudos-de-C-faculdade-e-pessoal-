#include <stdio.h>


int main() {
    char operador = '\0';
    double numero1 = 0.0, numero2 = 0.0, resultado = 0.0;

    printf("Digite o primeiro numero: ");
    scanf("%lf", &numero1);

    printf("Digite a operacao matematica (+, -, /, *): ");
    scanf(" %c", &operador);

    //Sei que ta feio, eu tava so testando o "&&"
    if (operador != '*' && operador != '/' && operador != '+' && operador != '-') {
        printf("Deixa de ser burro e coloca um operador certo!");
        return 0;
    }


    printf("Digite o segundo numero: ");
    scanf("%lf", &numero2);

    switch (operador) {
        case '+':
            resultado = numero1 + numero2;
            break;
        case '-':
            resultado = numero1 - numero2;
            break;
        case '*':
            resultado = numero1 * numero2;
            break;
        case '/':
            if (numero2 == 0) {
                printf("Nenhum numero pode ser dividido por 0.\n");
            } else {
                resultado = numero1 / numero2;
            }
            break;
        default:
            printf("Coloque um operador valido.\n");
    }
    printf("O resultado da sua opercao e: %lf\n", resultado);
}
