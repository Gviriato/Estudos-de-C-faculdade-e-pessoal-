#include <stdio.h>
#include <stdlib.h>


int main() {
    int selecionado = 0;
    float valor_sacar = 0.0f;
    float valor_depositar = 0.0f;
    float valor_conta = 0.0f;

    do {
        printf("Selecione abaixo o que deseja fazer: \n");
        printf("1 - Sacar\n");
        printf("2 - Ver saldo\n");
        printf("3 - Depositar\n");
        printf("4 - Sair\n");
        scanf("%d", &selecionado);

        switch (selecionado) {
            case 1:

                printf("Digite o v3alor que voce quer sacar: \n");
                scanf("%f", &valor_sacar);

                if (valor_sacar <= valor_conta) {
                    valor_conta = valor_conta - valor_sacar;
                    printf("Voce sacou o valor de %.2f da sua conta.\n", valor_sacar);
                } else {printf("saldo de saque insuficiente:");}

                break;
            case 2:

                printf("Seu saldo e de %.2f\n", valor_conta);

                break;
            case 3:

                printf("Digite o valor que deseja depositar: \n");
                scanf("%f", &valor_depositar);

                if (valor_depositar > 0) {
                    valor_conta = valor_conta+valor_depositar;
                    printf("Foi depositado o valor de %.2f\n", valor_depositar);
                } else {printf("digite um valor maior que 0\n");}

                break;

            case 4:
                printf("voce saiu do sistema!\n");

                break;
            default:

                printf("voce deve selecionar uma opcao valida!\n");

                break;
        }
    }while (selecionado != 4);

}

