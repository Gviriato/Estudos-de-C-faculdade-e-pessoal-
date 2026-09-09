#include <stdio.h>

int main() {
    float peso = 0.0f;
    float qntd_racao = 0.0f;
    printf("Digite o peso do saco de racao em KG: ");
    scanf("%f", &peso);

    printf("Digite o peso de quanto de racao e distribuida para cada gato em gramas: ");
    scanf("%f", &qntd_racao);

    float peso_gramas = peso * 1000;
    float racao_gatos = qntd_racao * 2;
    float racao_gatos_5dias = racao_gatos * 5;
    float sobra = peso_gramas - racao_gatos_5dias;

    printf("apos 5 dias ira sobrar %.2f gramas de racao.", sobra);

    return 0;
}
