#include <stdio.h>
#include <string.h>

int main() {
    char verbo[50] = "";
    char subs[50] = "";
    char adjetivo1[50] = "";
    char adjetivo2[50] = "";
    char adjetivo3[50] = "";

    printf("digite um adjetivo (descrição): ");
    fgets(adjetivo1, sizeof(adjetivo1), stdin);
    adjetivo1[strlen(adjetivo1) -1] = '\0';

    printf("digite um substantivo (animal ou pessoa): ");
    fgets(subs, sizeof(subs), stdin);
    subs[strlen(subs) -1] = '\0';

    printf("digite um adjetivo (tipo fazendo): ");
    fgets(verbo, sizeof(verbo), stdin);
    verbo[strlen(verbo) -1] = '\0';

    printf("digite um adjetivo (descrição): ");
    fgets(adjetivo2, sizeof(adjetivo2), stdin);
    adjetivo2[strlen(adjetivo2) -1] = '\0';

    printf("digite um adjetivo (descrição): ");
    fgets(adjetivo3, sizeof(adjetivo3), stdin);
    adjetivo3[strlen(adjetivo3) -1] = '\0';

    printf("Hoje o %s estava\n", subs);
    printf("se %s e percebeu que\n", verbo);
    printf("ele era muito %s alem de\n", adjetivo1);
    printf("se achar muito %s, mas\n", adjetivo2);
    printf("no final desistiu de tudo e se achou %s.\n", adjetivo3);

    return 0;
}
