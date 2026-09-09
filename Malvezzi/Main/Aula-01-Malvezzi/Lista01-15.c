#include <stdio.h>

int main() {
        float preco_fab = 0.0f, custo_final = 0.0f, lucro = 0.0f, imposto = 0.0f;
        int perc_lucro = 0, perc_imposto = 0;

        printf("Digite o preco de fabrica do produto: ");
        scanf("%f", &preco_fab);

        printf("digite o %% do lucro do produto: ");
        scanf("%d", &perc_lucro);

        printf("Digite o %% do imposto do produto: ");
        scanf("%d", &perc_imposto);

        lucro = preco_fab * perc_lucro/100;
        imposto = preco_fab * perc_imposto/100;

        custo_final = preco_fab + imposto + lucro;

        printf("O valor do lucro do produto e: R$%.2f\n", lucro);
        printf("O valor do imposto do produto e: R$%.2f\n", imposto);
        printf("O valor final do produto e: R$%.2f\n", custo_final);

        return 0;
}
