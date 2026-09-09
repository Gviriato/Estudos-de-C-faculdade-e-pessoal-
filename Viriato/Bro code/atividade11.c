
#include <stdio.h>
#include <string.h>
#include <ctype.h>

typedef enum {
    DOMINGO, SEGUNDA, TERCA, QUARTA, QUINTA, SEXTA, SABADO
}dias;

typedef enum {
    JANEIRO, FEVEREIRO, MARCO, ABRIL, MAIO, JUNHO, JULHO, AGOSTO, SETEMBRO, OUTUBRO, NOVEMBRO, DEZEMBRO
}meses;

int main() {
    int meses = MARCO;
    int dias = SEXTA;

    printf("%d, %d", dias, meses);
    return 0;
}