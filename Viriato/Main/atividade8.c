#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int pegarescolhapc();
int pegarescolhaeu();
void decisao(int escolhaeu, int escolhapc);

int main() {
    srand(time(NULL));
    int escolhapc = pegarescolhapc();
    int escolhaeu = pegarescolhaeu();

    switch (escolhaeu) {
        case 1:
            printf("Voce escolheu: pedra\n");
            break;
        case 2:
            printf("Voce escolheu: papel\n");
            break;
        case 3:
            printf("Voce escolheu: tesoura\n");
            break;
    }
    switch (escolhapc) {
        case 1:
            printf("PC escolheu: pedra\n");
            break;
        case 2:
            printf("PC escolheu: papel\n");
            break;
        case 3:
            printf("PC escolheu: tesoura\n");
            break;
    }

    decisao(escolhaeu, escolhapc);
    return 0;
}

int pegarescolhapc() {
    return (rand() % 3) + 1;
}
int pegarescolhaeu() {
    int e=0;
    do{
    printf("Chose 1, 2 or 3, pedra/papel/tesoura: ");
    scanf("%d", &e);
    }while (e < 1 || e > 3);
    return e;
}
void decisao(int escolhaeu, int escolhapc) {
    if (escolhaeu == escolhapc) {
        printf("EMPATE!!\n");
    } else if ((escolhaeu == 1 && escolhapc == 3) || (escolhaeu == 2 && escolhapc == 1) || (escolhaeu == 3 && escolhapc == 2)) {
        printf("VOCE GANHOU!!\n");
    } else {
        printf("VOCE PERDEU!!\n");
    }
}
