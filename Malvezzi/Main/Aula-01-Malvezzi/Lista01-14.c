#include <stdio.h>

int main() {
        int nasc = 0, ano = 0, idade = 0, idade_2050 = 0;
        printf("Digite seu ano de nascimento e logo apos o ano atual: ");
        scanf("%d %d", &nasc, &ano);
        idade = ano - nasc;
        idade_2050 = 2050 - nasc;

        printf("Voce tem %d anos de idade, e tera %d anos de idade em 2050.", idade, idade_2050);

        return 0;
}
